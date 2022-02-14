
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_security_xattr_info {int value_len; int value; int name; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct inode*,int *,int *,int *) ;

int FUNC_3(struct inode *VAR_1,
       struct inode *VAR_2,
       struct ocfs2_security_xattr_info *VAR_3)
{

 if (!FUNC_1(FUNC_0(VAR_2->i_sb)))
  return -VAR_0;
 return FUNC_2(VAR_1, VAR_2, &VAR_3->name, &VAR_3->value,
         &VAR_3->value_len);
}
