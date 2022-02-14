
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mf_refc; int mf_error; int * mf_server; int * mf_prfree; int * mf_private; scalar_t__ mf_cid; scalar_t__ mf_flags; int * mf_loopdev; void* mf_remopts; void* mf_mopts; void* mf_auto; void* mf_info; void* mf_mount; scalar_t__ mf_fo; int mf_fsflags; TYPE_2__* mf_ops; } ;
typedef TYPE_1__ mntfs ;
typedef int am_opts ;
struct TYPE_7__ {int * (* ffserver ) (TYPE_1__*) ;int nfs_fs_flags; } ;
typedef TYPE_2__ am_ops ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(mntfs *VAR_0, am_ops *VAR_1, am_opts *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5, char *VAR_6, char *VAR_7)
{
  VAR_0->mf_ops = VAR_1;
  VAR_0->mf_fsflags = VAR_1->nfs_fs_flags;
  VAR_0->mf_fo = 0;
  if (VAR_2)
    VAR_0->mf_fo = FUNC_0(VAR_2);

  VAR_0->mf_mount = FUNC_2(VAR_3);
  VAR_0->mf_info = FUNC_2(VAR_4);
  VAR_0->mf_auto = FUNC_2(VAR_5);
  VAR_0->mf_mopts = FUNC_2(VAR_6);
  VAR_0->mf_remopts = FUNC_2(VAR_7);
  VAR_0->mf_loopdev = ((void*)0);
  VAR_0->mf_refc = 1;
  VAR_0->mf_flags = 0;
  VAR_0->mf_error = -1;
  VAR_0->mf_cid = 0;
  VAR_0->mf_private = ((void*)0);
  VAR_0->mf_prfree = ((void*)0);

  if (VAR_1->ffserver)
    VAR_0->mf_server = (*VAR_1->ffserver) (VAR_0);
  else
    VAR_0->mf_server = ((void*)0);
}
