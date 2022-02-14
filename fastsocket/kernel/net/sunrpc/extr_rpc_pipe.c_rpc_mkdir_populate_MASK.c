
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct qstr {int dummy; } ;
struct inode {int i_mutex; } ;
struct dentry {struct inode* d_inode; } ;


 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (struct inode*,struct dentry*,int ,int *,void*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct dentry *FUNC_7(struct dentry *VAR_1,
  struct qstr *VAR_2, umode_t VAR_3, void *VAR_4,
  int (*VAR_5)(struct dentry *, void *), void *VAR_6)
{
 struct dentry *VAR_7;
 struct inode *VAR_8 = VAR_1->d_inode;
 int VAR_9;

 FUNC_5(&VAR_8->i_mutex, VAR_0);
 VAR_7 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_1(VAR_7))
  goto out;
 VAR_9 = FUNC_3(VAR_8, VAR_7, VAR_3, ((void*)0), VAR_4);
 if (VAR_9 != 0)
  goto out_err;
 if (VAR_5 != ((void*)0)) {
  VAR_9 = VAR_5(VAR_7, VAR_6);
  if (VAR_9)
   goto err_rmdir;
 }
out:
 FUNC_6(&VAR_8->i_mutex);
 return VAR_7;
err_rmdir:
 FUNC_4(VAR_8, VAR_7);
out_err:
 VAR_7 = FUNC_0(VAR_9);
 goto out;
}
