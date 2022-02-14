
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_inline_data {int id_data; int id_count; } ;
struct TYPE_2__ {struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int i_nlink; int i_blocks; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct inode*,int ,unsigned int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (int *,struct inode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_1,
     handle_t *VAR_2,
     struct inode *VAR_3,
     struct inode *VAR_4,
     struct buffer_head *VAR_5)
{
 int VAR_6;
 struct ocfs2_dinode *VAR_7 = (struct ocfs2_dinode *)VAR_5->b_data;
 struct ocfs2_inline_data *VAR_8 = &VAR_7->id2.i_data;
 unsigned int VAR_9 = FUNC_2(VAR_8->id_count);

 VAR_6 = FUNC_6(VAR_2, FUNC_0(VAR_4), VAR_5,
          VAR_0);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 FUNC_4(VAR_4, VAR_3, VAR_8->id_data, VAR_9);

 FUNC_7(VAR_2, VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 FUNC_1(VAR_4, VAR_9);
 VAR_4->i_nlink = 2;
 VAR_4->i_blocks = FUNC_5(VAR_4);

 VAR_6 = FUNC_8(VAR_2, VAR_4, VAR_5);
 if (VAR_6 < 0)
  FUNC_3(VAR_6);

out:
 return VAR_6;
}
