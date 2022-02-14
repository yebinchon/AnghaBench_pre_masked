
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
struct TYPE_4__ {scalar_t__ conn_state; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int ,int *,int ,int ,int ) ;

VCHIQ_STATUS_T FUNC_2(VCHIQ_STATE_T *VAR_3)
{
 VCHIQ_STATUS_T VAR_4 = VAR_2;
 if (VAR_3->conn_state != VAR_0)
  VAR_4 = FUNC_1(VAR_3, ((void*)0),
   FUNC_0(VAR_1, 0, 0),
   ((void*)0), 0, 0, 0);
 return VAR_4;
}
