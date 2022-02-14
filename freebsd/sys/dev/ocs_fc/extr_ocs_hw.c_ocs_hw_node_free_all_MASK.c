
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int os; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int * FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;

ocs_hw_rtn_e
FUNC_7(ocs_hw_t *VAR_9)
{
 uint8_t *VAR_10 = ((void*)0);
 ocs_hw_rtn_e VAR_11 = VAR_1;

 if (!VAR_9) {
  FUNC_3(((void*)0), "bad parameter hw=%p\n", VAR_9);
  return VAR_1;
 }




 if (FUNC_6(&VAR_9->sli) > 0) {
  FUNC_2(VAR_9->os, "Chip is in an error state - reset needed\n");
  return VAR_1;
 }

 VAR_10 = FUNC_4(VAR_9->os, VAR_5, VAR_4);
 if (!VAR_10) {
  FUNC_3(VAR_9->os, "no buffer for command\n");
  return VAR_2;
 }

 if (FUNC_5(&VAR_9->sli, VAR_10, VAR_5, 0xffff,
    VAR_6, VAR_7)) {
  VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_0, VAR_8,
    ((void*)0));
 }

 if (VAR_11 != VAR_3) {
  FUNC_3(VAR_9->os, "UNREG_RPI failed\n");
  FUNC_0(VAR_9->os, VAR_10, VAR_5);
  VAR_11 = VAR_1;
 }

 return VAR_11;
}
