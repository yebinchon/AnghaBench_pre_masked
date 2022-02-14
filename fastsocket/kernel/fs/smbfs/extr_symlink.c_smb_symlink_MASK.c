
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,char const*,int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,struct dentry*,char const*) ;

int FUNC_4(struct inode *VAR_0, struct dentry *VAR_1, const char *VAR_2)
{
 FUNC_0("create symlink %s -> %s/%s\n", VAR_2, FUNC_1(VAR_1));

 return FUNC_3(FUNC_2(VAR_1), VAR_1, VAR_2);
}
