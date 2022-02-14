
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_dx_root_block {int dummy; } ;
struct ocfs2_dir_lookup_result {struct buffer_head* dl_dx_root_bh; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,struct inode*,struct ocfs2_dx_root_block*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_3 (struct inode*,struct ocfs2_dinode*,struct buffer_head**) ;
 int FUNC_4 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, int VAR_2,
          struct inode *VAR_3,
          struct ocfs2_dir_lookup_result *VAR_4)
{
 int VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);
 struct ocfs2_dinode *VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_dx_root_block *VAR_9;

 VAR_5 = FUNC_4(VAR_3, &VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_5);
  goto out;
 }

 VAR_7 = (struct ocfs2_dinode *)VAR_6->b_data;

 VAR_5 = FUNC_3(VAR_3, VAR_7, &VAR_8);
 if (VAR_5) {
  FUNC_1(VAR_5);
  goto out;
 }
 VAR_9 = (struct ocfs2_dx_root_block *) VAR_8->b_data;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_9, VAR_4);
 if (VAR_5) {
  if (VAR_5 != -VAR_0)
   FUNC_1(VAR_5);
  goto out;
 }

 VAR_4->dl_dx_root_bh = VAR_8;
 VAR_8 = ((void*)0);
out:
 FUNC_0(VAR_6);
 FUNC_0(VAR_8);
 return VAR_5;
}
