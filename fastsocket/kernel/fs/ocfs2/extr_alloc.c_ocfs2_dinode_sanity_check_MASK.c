
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_tree {int * et_ops; struct ocfs2_dinode* et_object; } ;
struct ocfs2_dinode {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct ocfs2_extent_tree *VAR_1)
{
 struct ocfs2_dinode *VAR_2 = VAR_1->et_object;

 FUNC_0(VAR_1->et_ops != &VAR_0);
 FUNC_0(!FUNC_1(VAR_2));

 return 0;
}
