
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
typedef int ocs_hw_temp_cb_t ;
typedef TYPE_1__ ocs_hw_temp_cb_arg_t ;
struct TYPE_12__ {int os; int sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int,int ) ;

ocs_hw_rtn_e
FUNC_6(ocs_hw_t *VAR_9, ocs_hw_temp_cb_t VAR_10, void *VAR_11)
{
 ocs_hw_rtn_e VAR_12 = VAR_1;
 ocs_hw_temp_cb_arg_t *VAR_13;
 uint8_t *VAR_14;

 VAR_14 = FUNC_4(VAR_9->os, VAR_6, VAR_5 | VAR_4);
 if (VAR_14 == ((void*)0)) {
  FUNC_2(VAR_9->os, "failed to malloc mbox");
  return VAR_2;
 }

 VAR_13 = FUNC_4(VAR_9->os, sizeof(ocs_hw_temp_cb_arg_t), VAR_4);
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_9->os, "failed to malloc cb_arg");
  FUNC_0(VAR_9->os, VAR_14, VAR_6);
  return VAR_2;
 }

 VAR_13->cb = VAR_10;
 VAR_13->arg = VAR_11;

 if (FUNC_5(&VAR_9->sli, VAR_14, VAR_6,
    VAR_7)) {
  VAR_12 = FUNC_1(VAR_9, VAR_14, VAR_0, VAR_8, VAR_13);
 }

 if (VAR_12 != VAR_3) {
  FUNC_3(VAR_9->os, "DUMP_TYPE4 failed\n");
  FUNC_0(VAR_9->os, VAR_14, VAR_6);
  FUNC_0(VAR_9->os, VAR_13, sizeof(ocs_hw_temp_cb_arg_t));
 }

 return VAR_12;
}
