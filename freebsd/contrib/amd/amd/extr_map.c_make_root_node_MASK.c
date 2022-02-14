
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* mf_ops; int mf_error; } ;
typedef TYPE_3__ mntfs ;
typedef int am_opts ;
struct TYPE_15__ {TYPE_1__* am_al; } ;
struct TYPE_13__ {int (* mount_fs ) (TYPE_4__*,TYPE_3__*) ;int (* fs_init ) (TYPE_3__*) ;} ;
struct TYPE_12__ {TYPE_3__* al_mnt; } ;


 char* VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 () ;
 TYPE_3__* FUNC_1 (int *,int *,char*,char*,char*,char*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;

void
FUNC_6(void)
{
  mntfs *VAR_3;
  char *VAR_4 = VAR_0;
  VAR_2 = FUNC_0();




  FUNC_3(VAR_2, "");




  VAR_3 = FUNC_1(&VAR_1, (am_opts *) ((void*)0), "", VAR_4, "", "", "");




  FUNC_2(VAR_2->am_al->al_mnt);
  VAR_2->am_al->al_mnt = VAR_3;




  if (VAR_3->mf_ops->fs_init)
    (*VAR_3->mf_ops->fs_init) (VAR_3);




  VAR_3->mf_error = VAR_3->mf_ops->mount_fs(VAR_2, VAR_3);
}
