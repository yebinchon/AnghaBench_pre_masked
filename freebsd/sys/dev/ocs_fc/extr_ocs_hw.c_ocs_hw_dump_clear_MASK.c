
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {struct TYPE_22__* mbox_cmd; void* arg; int cb; } ;
typedef TYPE_2__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_21__ {int virt; } ;
struct TYPE_24__ {TYPE_1__ bmbx; } ;
struct TYPE_23__ {scalar_t__ state; int os; TYPE_5__ sli; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef int ocs_hw_dump_clear_cb_t ;
typedef TYPE_2__ ocs_hw_dump_clear_cb_arg_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,scalar_t__,scalar_t__ (*) (TYPE_3__*,int ,TYPE_2__*,TYPE_2__*),TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__* FUNC_5 (int ,int,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_2__*,int,char*) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;

ocs_hw_rtn_e
FUNC_9(ocs_hw_t *VAR_10, ocs_hw_dump_clear_cb_t VAR_11, void *VAR_12)
{
 ocs_hw_rtn_e VAR_13 = VAR_2;
 uint8_t *VAR_14;
 ocs_hw_dump_clear_cb_arg_t *VAR_15;
 uint32_t VAR_16 = (VAR_10->state == VAR_5 ? VAR_0 : VAR_1);

 if (VAR_9 != FUNC_8(&VAR_10->sli)) {
  FUNC_4(VAR_10->os, "Function only supported for I/F type 2\n");
  return VAR_2;
 }

 VAR_14 = FUNC_5(VAR_10->os, VAR_8, VAR_7 | VAR_6);
 if (VAR_14 == ((void*)0)) {
  FUNC_3(VAR_10->os, "failed to malloc mbox\n");
  return VAR_3;
 }

 VAR_15 = FUNC_5(VAR_10->os, sizeof(ocs_hw_dump_clear_cb_arg_t), VAR_6);
 if (VAR_15 == ((void*)0)) {
  FUNC_3(VAR_10->os, "failed to malloc cb_arg\n");
  FUNC_0(VAR_10->os, VAR_14, VAR_8);
  return VAR_3;
 }

 VAR_15->cb = VAR_11;
 VAR_15->arg = VAR_12;
 VAR_15->mbox_cmd = VAR_14;

 if (FUNC_7(&VAR_10->sli, VAR_14, VAR_8,
   "/dbg/dump.bin")) {
  VAR_13 = FUNC_2(VAR_10, VAR_14, VAR_16, FUNC_1, VAR_15);
  if (VAR_13 == 0 && VAR_16 == VAR_1) {
   FUNC_6(VAR_14, VAR_10->sli.bmbx.virt, VAR_8);
   VAR_13 = FUNC_1(VAR_10, 0, VAR_14, VAR_15);
  }
 }

 if (VAR_13 != VAR_4) {
  FUNC_4(VAR_10->os, "COMMON_DELETE_OBJECT failed\n");
  FUNC_0(VAR_10->os, VAR_14, VAR_8);
  FUNC_0(VAR_10->os, VAR_15, sizeof(ocs_hw_dump_clear_cb_arg_t));
 }

 return VAR_13;
}
