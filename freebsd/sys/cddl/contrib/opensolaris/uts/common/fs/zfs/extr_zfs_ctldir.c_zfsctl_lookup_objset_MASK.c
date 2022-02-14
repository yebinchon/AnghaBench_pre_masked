
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * z_ctldir; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_12__ {TYPE_1__* v_mountedhere; } ;
typedef TYPE_3__ vnode_t ;
struct TYPE_13__ {TYPE_2__* vfs_data; } ;
typedef TYPE_4__ vfs_t ;
typedef int uint64_t ;
struct mount {int dummy; } ;
struct TYPE_10__ {TYPE_2__* mnt_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,TYPE_3__**) ;
 int FUNC_3 (TYPE_3__*) ;

int
FUNC_4(vfs_t *VAR_3, uint64_t VAR_4, zfsvfs_t **VAR_5)
{
 struct mount *VAR_6;
 zfsvfs_t *VAR_7 = VAR_3->vfs_data;
 vnode_t *VAR_8;
 int VAR_9;

 FUNC_0(VAR_7->z_ctldir != ((void*)0));
 *VAR_5 = ((void*)0);
 VAR_9 = FUNC_2(VAR_3, VAR_1,
     VAR_2, VAR_4, &VAR_8);
 if (VAR_9 == 0 && VAR_8 != ((void*)0)) {



  if (VAR_8->v_mountedhere != ((void*)0))
   *VAR_5 = VAR_8->v_mountedhere->mnt_data;
  FUNC_3(VAR_8);
 }
 if (*VAR_5 == ((void*)0))
  return (FUNC_1(VAR_0));
 return (0);
}
