
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {scalar_t__ d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_0, struct dentry *VAR_1,
    struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;





 FUNC_3();
 if (VAR_1->d_inode)
  FUNC_4(VAR_1->d_inode);
 if (VAR_3->d_inode) {
  FUNC_4(VAR_3->d_inode);
  VAR_4 = FUNC_7(VAR_3);
  if (VAR_4) {
   FUNC_1("unlink %s/%s, error=%d\n",
    FUNC_0(VAR_3), VAR_4);
   goto out;
  }

  FUNC_2(VAR_3);
 }

 FUNC_5(VAR_0);
 FUNC_5(VAR_2);
 VAR_4 = FUNC_6(VAR_1, VAR_3);
 if (!VAR_4) {
  FUNC_8(VAR_1);
  FUNC_8(VAR_3);
 }
out:
 FUNC_9();
 return VAR_4;
}
