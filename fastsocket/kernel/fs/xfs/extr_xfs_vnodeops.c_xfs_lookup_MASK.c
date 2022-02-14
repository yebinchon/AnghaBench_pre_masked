
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
typedef int xfs_ino_t ;
typedef int uint ;
struct xfs_name {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct xfs_name*) ;
 int FUNC_4 (int *,TYPE_1__*,struct xfs_name*,int *,struct xfs_name*) ;
 int FUNC_5 (int ,int *,int ,int ,int ,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

int
FUNC_8(
 xfs_inode_t *VAR_1,
 struct xfs_name *VAR_2,
 xfs_inode_t **VAR_3,
 struct xfs_name *VAR_4)
{
 xfs_ino_t VAR_5;
 int VAR_6;
 uint VAR_7;

 FUNC_3(VAR_1, VAR_2);

 if (FUNC_1(VAR_1->i_mount))
  return FUNC_0(VAR_0);

 VAR_7 = FUNC_6(VAR_1);
 VAR_6 = FUNC_4(((void*)0), VAR_1, VAR_2, &VAR_5, VAR_4);
 FUNC_7(VAR_1, VAR_7);

 if (VAR_6)
  goto out;

 VAR_6 = FUNC_5(VAR_1->i_mount, ((void*)0), VAR_5, 0, 0, VAR_3);
 if (VAR_6)
  goto out_free_name;

 return 0;

out_free_name:
 if (VAR_4)
  FUNC_2(VAR_4->name);
out:
 *VAR_3 = ((void*)0);
 return VAR_6;
}
