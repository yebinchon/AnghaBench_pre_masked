
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {scalar_t__ d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct dentry * VAR_0)
{
 if (VAR_0->d_inode) {
  if (FUNC_2(VAR_0->d_inode)) {
   FUNC_1("bad inode, unhashing %s/%s\n",
     FUNC_0(VAR_0));
   return 1;
  }
 } else {

 }
 return 0;
}
