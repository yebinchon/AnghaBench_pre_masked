
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_tree_list {char* buffer; size_t buffer_size; int result; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,struct buffer_head*,int ,struct ocfs2_xattr_tree_list*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1,
          struct buffer_head *VAR_2,
          char *VAR_3,
          size_t VAR_4)
{
 int VAR_5;
 struct ocfs2_xattr_tree_list VAR_6 = {
  .buffer = VAR_3,
  .buffer_size = VAR_4,
  .result = 0,
 };

 VAR_5 = FUNC_1(VAR_1, VAR_2,
           VAR_0, &VAR_6);
 if (VAR_5) {
  FUNC_0(VAR_5);
  goto out;
 }

 VAR_5 = VAR_6.result;
out:
 return VAR_5;
}
