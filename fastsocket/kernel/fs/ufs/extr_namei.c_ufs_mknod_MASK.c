
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 struct inode* FUNC_8 (struct inode*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11 (struct inode * VAR_1, struct dentry *VAR_2, int VAR_3, dev_t VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 if (!FUNC_6(VAR_4))
  return -VAR_0;
 VAR_5 = FUNC_8(VAR_1, VAR_3);
 VAR_6 = FUNC_1(VAR_5);
 if (!FUNC_0(VAR_5)) {
  FUNC_3(VAR_5, VAR_3, VAR_4);
  FUNC_9(VAR_5->i_sb, FUNC_2(VAR_5), VAR_4);
  FUNC_5(VAR_5);
  FUNC_4();
  VAR_6 = FUNC_7(VAR_2, VAR_5);
  FUNC_10();
 }
 return VAR_6;
}
