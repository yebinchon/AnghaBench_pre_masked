
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_10__ {scalar_t__ conn_state; int connect; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_11__ {scalar_t__ srvstate; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_INSTANCE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ,int*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ,int *,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int ) ;

VCHIQ_STATUS_T
FUNC_8(VCHIQ_STATE_T *VAR_9, VCHIQ_INSTANCE_T VAR_10)
{
 VCHIQ_SERVICE_T *VAR_11;
 int VAR_12;


 VAR_12 = 0;
 while ((VAR_11 = FUNC_2(VAR_9, VAR_10,
  &VAR_12)) != ((void*)0)) {
  if (VAR_11->srvstate == VAR_6)
   FUNC_7(VAR_11,
    VAR_7);
  FUNC_4(VAR_11);
 }

 if (VAR_9->conn_state == VAR_3) {
  if (FUNC_3(VAR_9, ((void*)0),
   FUNC_0(VAR_4, 0, 0), ((void*)0), 0,
   0, VAR_0) == VAR_5)
   return VAR_5;

  FUNC_6(VAR_9, VAR_2);
 }

 if (VAR_9->conn_state == VAR_2) {
  if (FUNC_1(&VAR_9->connect) != 0)
   return VAR_5;

  FUNC_6(VAR_9, VAR_1);
  FUNC_5(&VAR_9->connect);
 }

 return VAR_8;
}
