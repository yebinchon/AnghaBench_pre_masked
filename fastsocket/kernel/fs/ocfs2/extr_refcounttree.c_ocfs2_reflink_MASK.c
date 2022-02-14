
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_sb; } ;
struct dentry {struct inode* d_inode; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_xattr_sem; int ip_alloc_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct buffer_head*,struct inode*,int) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*,int ,struct inode**) ;
 int FUNC_8 (struct inode*,struct inode*) ;
 int FUNC_9 (struct inode*,struct buffer_head**,int) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct inode*,struct inode*,struct dentry*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct dentry *VAR_1, struct inode *VAR_2,
    struct dentry *VAR_3, bool VAR_4)
{
 int VAR_5;
 struct inode *VAR_6 = VAR_1->d_inode;
 struct buffer_head *VAR_7 = ((void*)0);
 struct inode *VAR_8 = ((void*)0);

 if (!FUNC_13(FUNC_1(VAR_6->i_sb)))
  return -VAR_0;

 VAR_5 = FUNC_7(VAR_2, VAR_6->i_mode,
          &VAR_8);
 if (VAR_5) {
  FUNC_6(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_9(VAR_6, &VAR_7, 1);
 if (VAR_5) {
  FUNC_6(VAR_5);
  goto out;
 }

 FUNC_4(&FUNC_0(VAR_6)->ip_xattr_sem);
 FUNC_4(&FUNC_0(VAR_6)->ip_alloc_sem);
 VAR_5 = FUNC_2(VAR_1, VAR_7,
    VAR_8, VAR_4);
 FUNC_14(&FUNC_0(VAR_6)->ip_alloc_sem);
 FUNC_14(&FUNC_0(VAR_6)->ip_xattr_sem);

 FUNC_10(VAR_6, 1);
 FUNC_3(VAR_7);

 if (VAR_5) {
  FUNC_6(VAR_5);
  goto out;
 }


 if (!VAR_4) {
  VAR_5 = FUNC_8(VAR_2, VAR_8);
  if (VAR_5)
   FUNC_6(VAR_5);
 }
out:
 if (!VAR_5) {
  VAR_5 = FUNC_11(VAR_2, VAR_8,
             VAR_3);
  if (VAR_5)
   FUNC_6(VAR_5);
 }

 if (VAR_8) {




  FUNC_12(VAR_8);
  if (VAR_5)
   FUNC_5(VAR_8);
 }

 return VAR_5;
}
