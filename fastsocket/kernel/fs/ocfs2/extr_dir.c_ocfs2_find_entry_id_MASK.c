
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_inline_data {int id_data; } ;
struct ocfs2_dir_entry {int dummy; } ;
struct TYPE_2__ {struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct buffer_head**) ;
 int FUNC_4 (struct buffer_head*,struct inode*,char const*,int,int ,int ,int ,struct ocfs2_dir_entry**) ;

__attribute__((used)) static struct buffer_head *FUNC_5(const char *VAR_0,
            int VAR_1,
            struct inode *VAR_2,
            struct ocfs2_dir_entry **VAR_3)
{
 int VAR_4, VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);
 struct ocfs2_dinode *VAR_7;
 struct ocfs2_inline_data *VAR_8;

 VAR_4 = FUNC_3(VAR_2, &VAR_6);
 if (VAR_4) {
  FUNC_2(VAR_4);
  goto out;
 }

 VAR_7 = (struct ocfs2_dinode *)VAR_6->b_data;
 VAR_8 = &VAR_7->id2.i_data;

 VAR_5 = FUNC_4(VAR_6, VAR_2, VAR_0, VAR_1, 0,
          VAR_8->id_data, FUNC_1(VAR_2), VAR_3);
 if (VAR_5 == 1)
  return VAR_6;

 FUNC_0(VAR_6);
out:
 return ((void*)0);
}
