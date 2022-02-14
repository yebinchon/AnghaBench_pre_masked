
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
struct TYPE_14__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_host_stat_cb_t ;
typedef TYPE_1__ ocs_hw_host_stat_cb_arg_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int ,int,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int,TYPE_1__) ;

ocs_hw_rtn_e
FUNC_6(ocs_hw_t *VAR_7, uint8_t VAR_8, ocs_hw_host_stat_cb_t VAR_9, void *VAR_10)
{
 ocs_hw_rtn_e VAR_11 = VAR_1;
 ocs_hw_host_stat_cb_arg_t *VAR_12;
 uint8_t *VAR_13;

 VAR_13 = FUNC_4(VAR_7->os, VAR_5, VAR_4);
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_7->os, "failed to malloc mbox");
  return VAR_2;
 }

 VAR_12 = FUNC_4(VAR_7->os, sizeof(ocs_hw_host_stat_cb_arg_t), 0);
 if (VAR_12 == ((void*)0)) {
  FUNC_2(VAR_7->os, "failed to malloc cb_arg");
  FUNC_0(VAR_7->os, VAR_13, VAR_5);
  return VAR_2;
  }

  VAR_12->cb = VAR_9;
  VAR_12->arg = VAR_10;


 if (FUNC_5(&VAR_7->sli, VAR_13, VAR_5, VAR_8)) {
   VAR_11 = FUNC_1(VAR_7, VAR_13, VAR_0, VAR_6, VAR_12);
 }

 if (VAR_11 != VAR_3) {
  FUNC_3(VAR_7->os, "READ_HOST_STATS failed\n");
  FUNC_0(VAR_7->os, VAR_13, VAR_5);
  FUNC_0(VAR_7->os, VAR_12, sizeof(ocs_hw_host_stat_cb_arg_t));
 }

 return VAR_11;
}
