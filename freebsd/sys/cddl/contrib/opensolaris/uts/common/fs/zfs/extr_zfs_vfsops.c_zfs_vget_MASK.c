
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ z_unlinked; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_11__ {scalar_t__ z_shares_dir; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int vnode_t ;
struct TYPE_12__ {TYPE_2__* vfs_data; } ;
typedef TYPE_3__ vfs_t ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_6(vfs_t *VAR_4, ino_t VAR_5, int VAR_6, vnode_t **VAR_7)
{
 zfsvfs_t *VAR_8 = VAR_4->vfs_data;
 znode_t *VAR_9;
 int VAR_10;






 if (VAR_5 == VAR_2 || VAR_5 == VAR_3 ||
     (VAR_8->z_shares_dir != 0 && VAR_5 == VAR_8->z_shares_dir))
  return (VAR_1);

 FUNC_0(VAR_8);
 VAR_10 = FUNC_5(VAR_8, VAR_5, &VAR_9);
 if (VAR_10 == 0 && VAR_9->z_unlinked) {
  FUNC_4(FUNC_2(VAR_9));
  VAR_10 = VAR_0;
 }
 if (VAR_10 == 0)
  *VAR_7 = FUNC_2(VAR_9);
 FUNC_1(VAR_8);
 if (VAR_10 == 0) {
  VAR_10 = FUNC_3(*VAR_7, VAR_6);
  if (VAR_10 != 0)
   FUNC_4(*VAR_7);
 }
 if (VAR_10 != 0)
  *VAR_7 = ((void*)0);
 return (VAR_10);
}
