
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
struct TYPE_6__ {int conn_state; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

VCHIQ_STATUS_T
FUNC_4(VCHIQ_STATE_T *VAR_6)
{
 VCHIQ_STATUS_T VAR_7 = VAR_2;

 switch (VAR_6->conn_state) {
 case 128:

  FUNC_3(VAR_6, VAR_0);
  FUNC_1(VAR_6, ((void*)0), 0);
  break;
 default:
  FUNC_2(VAR_5,
   "vchiq_pause_internal in state %s\n",
   VAR_3[VAR_6->conn_state]);
  VAR_7 = VAR_1;
  FUNC_0(VAR_6, VAR_4);
  break;
 }

 return VAR_7;
}
