
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_smack {int smk_inode; } ;
struct inode {struct inode_smack* i_security; } ;
struct cred {int security; } ;



__attribute__((used)) static int FUNC_0(struct cred *VAR_0,
     struct inode *VAR_1)
{
 struct inode_smack *VAR_2 = VAR_1->i_security;

 VAR_0->security = VAR_2->smk_inode;
 return 0;
}
