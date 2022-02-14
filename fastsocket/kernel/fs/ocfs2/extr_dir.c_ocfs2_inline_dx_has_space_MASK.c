
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dx_entry_list {int de_count; int de_num_used; } ;
struct ocfs2_dx_root_block {struct ocfs2_dx_entry_list dr_entries; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct buffer_head *VAR_1)
{
 struct ocfs2_dx_root_block *VAR_2;
 struct ocfs2_dx_entry_list *VAR_3;

 VAR_2 = (struct ocfs2_dx_root_block *) VAR_1->b_data;
 VAR_3 = &VAR_2->dr_entries;

 if (FUNC_0(VAR_3->de_num_used) >=
     FUNC_0(VAR_3->de_count))
  return -VAR_0;

 return 0;
}
