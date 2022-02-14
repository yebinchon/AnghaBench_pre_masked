
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode_security_struct {int sid; } ;
struct inode {struct inode_security_struct* i_security; } ;



__attribute__((used)) static void FUNC_0(const struct inode *VAR_0, u32 *VAR_1)
{
 struct inode_security_struct *VAR_2 = VAR_0->i_security;
 *VAR_1 = VAR_2->sid;
}
