
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_mount_t ;
struct TYPE_7__ {int * i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct TYPE_8__ {int q_core; } ;
typedef TYPE_2__ xfs_dquot_t ;
struct kstatfs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kstatfs*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ,int ,int ,TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(
 xfs_inode_t *VAR_1,
 struct kstatfs *VAR_2)
{
 xfs_mount_t *VAR_3 = VAR_1->i_mount;
 xfs_dquot_t *VAR_4;

 if (!FUNC_2(VAR_3, ((void*)0), FUNC_1(VAR_1), VAR_0, 0, &VAR_4)) {
  FUNC_0(VAR_2, &VAR_4->q_core);
  FUNC_3(VAR_4);
 }
}
