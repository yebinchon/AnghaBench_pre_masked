
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {void* arg; int cb; } ;
typedef TYPE_1__ uint8_t ;
struct TYPE_18__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_link_stat_cb_t ;
typedef TYPE_1__ ocs_hw_link_stat_cb_arg_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* FUNC_4 (int ,int,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int,TYPE_1__,TYPE_1__,TYPE_1__) ;

ocs_hw_rtn_e
FUNC_6(ocs_hw_t *VAR_8,
   uint8_t VAR_9,
   uint8_t VAR_10,
   uint8_t VAR_11,
   ocs_hw_link_stat_cb_t VAR_12,
   void *VAR_13)
{
 ocs_hw_rtn_e VAR_14 = VAR_1;
 ocs_hw_link_stat_cb_arg_t *VAR_15;
 uint8_t *VAR_16;

 VAR_16 = FUNC_4(VAR_8->os, VAR_6, VAR_5 | VAR_4);
 if (VAR_16 == ((void*)0)) {
  FUNC_2(VAR_8->os, "failed to malloc mbox");
  return VAR_2;
 }

 VAR_15 = FUNC_4(VAR_8->os, sizeof(ocs_hw_link_stat_cb_arg_t), VAR_4);
 if (VAR_15 == ((void*)0)) {
  FUNC_2(VAR_8->os, "failed to malloc cb_arg");
  FUNC_0(VAR_8->os, VAR_16, VAR_6);
  return VAR_2;
 }

 VAR_15->cb = VAR_12;
 VAR_15->arg = VAR_13;

 if (FUNC_5(&VAR_8->sli, VAR_16, VAR_6,
        VAR_9,
        VAR_10,
        VAR_11)) {
  VAR_14 = FUNC_1(VAR_8, VAR_16, VAR_0, VAR_7, VAR_15);
 }

 if (VAR_14 != VAR_3) {
  FUNC_3(VAR_8->os, "READ_LINK_STATS failed\n");
  FUNC_0(VAR_8->os, VAR_16, VAR_6);
  FUNC_0(VAR_8->os, VAR_15, sizeof(ocs_hw_link_stat_cb_arg_t));
 }

 return VAR_14;
}
