
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* opaque_t ;
struct TYPE_5__ {void (* mf_prfree ) (void*) ;TYPE_1__* mf_fo; int * mf_private; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_4__ {int * opt_umount; int * opt_unmount; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(mntfs *VAR_1)
{

  if (VAR_1->mf_private != ((void*)0))
    return 0;

  if (VAR_1->mf_fo == ((void*)0))
    return 0;


  if (VAR_1->mf_fo->opt_unmount != ((void*)0))
    VAR_1->mf_private = (opaque_t) FUNC_0(VAR_1->mf_fo->opt_unmount);
  else
    VAR_1->mf_private = (opaque_t) FUNC_0(VAR_1->mf_fo->opt_umount);
  VAR_1->mf_prfree = (void (*)(opaque_t)) VAR_0;

  return 0;
}
