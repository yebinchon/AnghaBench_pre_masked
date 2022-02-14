
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_security_xattr_info {int enable; int value_len; int value; int name; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct inode*,struct inode*,int *,struct buffer_head*,int *,int *) ;
 int FUNC_3 (struct inode*,struct inode*,struct ocfs2_security_xattr_info*) ;
 int FUNC_4 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*,int ,int ,int ,int ) ;

int FUNC_7(struct inode *VAR_2,
    struct inode *VAR_3)
{
 int VAR_4 = 0;
 struct buffer_head *VAR_5 = ((void*)0);
 struct ocfs2_security_xattr_info VAR_6 = {
  .enable = 1,
 };

 VAR_4 = FUNC_3(VAR_3, VAR_2, &VAR_6);
 if (!VAR_4) {
  VAR_4 = FUNC_6(VAR_3, VAR_6.name,
            VAR_6.value, VAR_6.value_len,
            VAR_1);
  if (VAR_4) {
   FUNC_1(VAR_4);
   goto leave;
  }
 } else if (VAR_4 != -VAR_0) {
  FUNC_1(VAR_4);
  goto leave;
 }

 VAR_4 = FUNC_4(VAR_2, &VAR_5, 0);
 if (VAR_4) {
  FUNC_1(VAR_4);
  goto leave;
 }

 VAR_4 = FUNC_2(((void*)0), VAR_3, VAR_2, ((void*)0), VAR_5, ((void*)0), ((void*)0));
 if (VAR_4)
  FUNC_1(VAR_4);

 FUNC_5(VAR_2, 0);
 FUNC_0(VAR_5);
leave:
 return VAR_4;
}
