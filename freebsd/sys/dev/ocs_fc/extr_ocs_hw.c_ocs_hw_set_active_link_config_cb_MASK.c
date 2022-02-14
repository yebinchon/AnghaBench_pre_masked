
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int os; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_6__ {scalar_t__ opts; int arg; int (* cb ) (int ,int ,int ) ;} ;
typedef TYPE_2__ ocs_hw_linkcfg_cb_arg_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{
 ocs_hw_linkcfg_cb_arg_t *VAR_5 = (ocs_hw_linkcfg_cb_arg_t *)VAR_4;

 if (VAR_2) {
  FUNC_1(VAR_1->os, "SET_RECONFIG_LINK_ID failed, status=%d\n", VAR_2);
 }


 if (VAR_5->cb) {
  VAR_5->cb(VAR_2, 0, VAR_5->arg);
 }


 if (VAR_5->opts != VAR_0) {
  FUNC_0(VAR_1->os, VAR_5, sizeof(*VAR_5));
 }
}
