
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_root_journal_access; int et_root_el; int et_root_bh; } ;


 struct ocfs2_path* FUNC_0 (int ,int ,int ) ;

struct ocfs2_path *FUNC_1(struct ocfs2_extent_tree *VAR_0)
{
 return FUNC_0(VAR_0->et_root_bh, VAR_0->et_root_el,
         VAR_0->et_root_journal_access);
}
