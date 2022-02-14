
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ opaque_t ;
struct TYPE_5__ {int mf_prfree; int mf_mount; TYPE_1__* mf_fo; int mf_info; scalar_t__ mf_private; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_4__ {char* opt_cache; int * opt_maptype; } ;


 scalar_t__ FUNC_0 (int ,char*,int *,int ) ;
 int VAR_0 ;

void
FUNC_1(mntfs *VAR_1)
{
  char *VAR_2;

  if (VAR_1->mf_fo && VAR_1->mf_fo->opt_cache)
    VAR_2 = VAR_1->mf_fo->opt_cache;
  else
    VAR_2 = "none";
  VAR_1->mf_private = (opaque_t) FUNC_0(VAR_1->mf_info,
     VAR_2,
     (VAR_1->mf_fo ? VAR_1->mf_fo->opt_maptype : ((void*)0)),
     VAR_1->mf_mount);
  VAR_1->mf_prfree = VAR_0;
}
