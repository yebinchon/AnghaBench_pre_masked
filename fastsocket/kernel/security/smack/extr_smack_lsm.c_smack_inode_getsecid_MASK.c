
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode_smack {int smk_inode; } ;
struct inode {struct inode_smack* i_security; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct inode *VAR_0, u32 *VAR_1)
{
 struct inode_smack *VAR_2 = VAR_0->i_security;

 *VAR_1 = FUNC_0(VAR_2->smk_inode);
}
