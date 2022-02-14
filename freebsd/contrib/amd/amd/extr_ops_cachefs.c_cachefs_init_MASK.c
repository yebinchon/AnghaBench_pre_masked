
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ voidp ;
struct TYPE_5__ {void (* mf_prfree ) (scalar_t__) ;TYPE_1__* mf_fo; scalar_t__ mf_private; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_4__ {int opt_cachedir; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(mntfs *VAR_1)
{



  if (!VAR_1->mf_private) {
    VAR_1->mf_private = (voidp) FUNC_0(VAR_1->mf_fo->opt_cachedir);
    VAR_1->mf_prfree = (void (*)(voidp)) VAR_0;
  }

  return 0;
}
