
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_size; } ;
struct dentry {struct inode* d_inode; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_3, struct iattr *VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_inode;
 unsigned int VAR_6 = VAR_4->ia_valid;
 int VAR_7 = 0;


 VAR_7 = FUNC_1(VAR_5, VAR_4);
 if (VAR_7)
  return VAR_7;


 if (VAR_4->ia_valid & VAR_2) {
  loff_t VAR_8 = FUNC_0(VAR_5);
  if (VAR_4->ia_size != VAR_8) {
   VAR_7 = FUNC_3(VAR_5, VAR_4->ia_size, VAR_8);
   if (VAR_7 < 0 || VAR_4->ia_valid == VAR_2)
    goto out;
  } else {



   VAR_4->ia_valid |= VAR_1|VAR_0;
  }
 }

 VAR_7 = FUNC_2(VAR_5, VAR_4);
 out:
 VAR_4->ia_valid = VAR_6;
 return VAR_7;
}
