
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_empty_dir_priv {int dx_dir; int seen_other; } ;
struct ocfs2_dx_root_block {int dr_num_entries; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct ocfs2_dinode*,struct buffer_head**) ;
 int FUNC_4 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0,
         struct ocfs2_empty_dir_priv *VAR_1)
{
 int VAR_2;
 struct buffer_head *VAR_3 = ((void*)0);
 struct buffer_head *VAR_4 = ((void*)0);
 struct ocfs2_dinode *VAR_5;
 struct ocfs2_dx_root_block *VAR_6;

 VAR_1->dx_dir = 1;

 VAR_2 = FUNC_4(VAR_0, &VAR_3);
 if (VAR_2) {
  FUNC_2(VAR_2);
  goto out;
 }
 VAR_5 = (struct ocfs2_dinode *)VAR_3->b_data;

 VAR_2 = FUNC_3(VAR_0, VAR_5, &VAR_4);
 if (VAR_2) {
  FUNC_2(VAR_2);
  goto out;
 }
 VAR_6 = (struct ocfs2_dx_root_block *)VAR_4->b_data;

 if (FUNC_1(VAR_6->dr_num_entries) != 2)
  VAR_1->seen_other = 1;

out:
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 return VAR_2;
}
