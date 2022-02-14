
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_size; } ;
struct dentry {struct inode* d_inode; } ;
typedef int loff_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_1, struct iattr *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 unsigned int VAR_4 = VAR_2->ia_valid;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 & VAR_0 &&
     VAR_2->ia_size != FUNC_0(VAR_3)) {
  loff_t VAR_6 = VAR_3->i_size;
  VAR_5 = FUNC_4(VAR_3, VAR_2->ia_size);
  if (VAR_5)
   return VAR_5;
  VAR_5 = FUNC_3(VAR_3, VAR_6);
  if (VAR_5)
   return VAR_5;
 }
 return FUNC_2(VAR_3, VAR_2);
}
