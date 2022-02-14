
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int ,struct buffer_head**,int ) ;
 int FUNC_3 (int ,struct ocfs2_dinode*,struct buffer_head*,int ) ;
 int VAR_0 ;

int FUNC_4(struct inode *VAR_1, struct ocfs2_dinode *VAR_2,
    u64 VAR_3, struct buffer_head **VAR_4)
{
 int VAR_5;
 struct buffer_head *VAR_6 = *VAR_4;

 VAR_5 = FUNC_2(FUNC_0(VAR_1), VAR_3, &VAR_6,
         VAR_0);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_3(VAR_1->i_sb, VAR_2, VAR_6, 0);
 if (VAR_5) {
  FUNC_1(VAR_6);
  goto out;
 }


 if (!*VAR_4)
  *VAR_4 = VAR_6;

out:
 return VAR_5;
}
