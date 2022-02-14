
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int * d_inode; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*,struct qstr*) ;
 int FUNC_3 (struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct dentry *VAR_1,
       struct qstr *VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_1(VAR_3))
  return VAR_3;
 if (VAR_3->d_inode == ((void*)0))
  return VAR_3;
 FUNC_3(VAR_3);
 return FUNC_0(-VAR_0);
}
