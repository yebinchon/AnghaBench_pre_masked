
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_tree {struct ocfs2_dx_root_block* et_object; } ;
struct ocfs2_dx_root_block {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_dx_root_block*) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_extent_tree *VAR_0)
{
 struct ocfs2_dx_root_block *VAR_1 = VAR_0->et_object;

 FUNC_0(!FUNC_1(VAR_1));

 return 0;
}
