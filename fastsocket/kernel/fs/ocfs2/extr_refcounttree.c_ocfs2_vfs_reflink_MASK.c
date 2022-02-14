
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_sb; scalar_t__ i_uid; int i_mutex; int i_gid; int i_mode; } ;
struct dentry {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*,struct dentry*) ;
 int FUNC_11 (struct dentry*,struct inode*,struct dentry*,int) ;
 int FUNC_12 (struct inode*) ;

int FUNC_13(struct dentry *VAR_5, struct inode *VAR_6,
        struct dentry *VAR_7, bool VAR_8)
{
 struct inode *VAR_9 = VAR_5->d_inode;
 int VAR_10;

 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_10(VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 if (VAR_6->i_sb != VAR_9->i_sb)
  return -VAR_3;




 if (FUNC_0(VAR_9) || FUNC_1(VAR_9))
  return -VAR_2;


 if (!FUNC_2(VAR_9->i_mode))
  return -VAR_2;





 if (VAR_8) {
  if ((FUNC_4() != VAR_9->i_uid) && !FUNC_3(VAR_0))
   return -VAR_2;
  if (!FUNC_6(VAR_9->i_gid) && !FUNC_3(VAR_0))
   return -VAR_2;
 }






 if (!VAR_8) {
  VAR_10 = FUNC_7(VAR_9, VAR_4);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_8(&VAR_9->i_mutex);
 FUNC_12(VAR_6);
 VAR_10 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_9(&VAR_9->i_mutex);
 if (!VAR_10)
  FUNC_5(VAR_6, VAR_7);
 return VAR_10;
}
