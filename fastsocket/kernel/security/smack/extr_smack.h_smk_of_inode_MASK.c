
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_smack {char* smk_inode; } ;
struct inode {struct inode_smack* i_security; } ;



__attribute__((used)) static inline char *FUNC_0(const struct inode *VAR_0)
{
 struct inode_smack *VAR_1 = VAR_0->i_security;
 return VAR_1->smk_inode;
}
