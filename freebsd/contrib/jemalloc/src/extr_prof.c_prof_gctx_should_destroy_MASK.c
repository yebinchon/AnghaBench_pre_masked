
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nlimbo; int tctxs; } ;
typedef TYPE_1__ prof_gctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool
FUNC_1(prof_gctx_t *VAR_1) {
 if (VAR_0) {
  return 0;
 }
 if (!FUNC_0(&VAR_1->tctxs)) {
  return 0;
 }
 if (VAR_1->nlimbo != 0) {
  return 0;
 }
 return 1;
}
