
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int * d_op; int d_inode; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct dentry*,struct qstr*) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int VAR_1 ;

__attribute__((used)) static struct dentry *FUNC_3(struct dentry *VAR_2,
       struct qstr *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (!VAR_4) {
   VAR_4 = FUNC_0(-VAR_0);
   goto out_err;
  }
 }
 if (!VAR_4->d_inode)
  VAR_4->d_op = &VAR_1;
out_err:
 return VAR_4;
}
