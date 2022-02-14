
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode vfs_inode; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct ocfs2_extent_rec*) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_extent_tree *VAR_0,
        struct ocfs2_extent_rec *VAR_1)
{
 struct inode *VAR_2 = &FUNC_0(VAR_0->et_ci)->vfs_inode;

 FUNC_1(VAR_2, VAR_1);
}
