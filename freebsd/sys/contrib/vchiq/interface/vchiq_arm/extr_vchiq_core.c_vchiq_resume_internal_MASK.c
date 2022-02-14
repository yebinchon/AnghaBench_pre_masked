
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
struct TYPE_6__ {scalar_t__ conn_state; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

VCHIQ_STATUS_T
FUNC_3(VCHIQ_STATE_T *VAR_5)
{
 VCHIQ_STATUS_T VAR_6 = VAR_3;

 if (VAR_5->conn_state == VAR_0) {
  FUNC_2(VAR_5, VAR_1);
  FUNC_1(VAR_5, ((void*)0), 0);
 } else {
  VAR_6 = VAR_2;
  FUNC_0(VAR_5, VAR_4);
 }

 return VAR_6;
}
