
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode_smack {int smk_inode; } ;
struct inode {struct inode_smack* i_security; } ;


 int FUNC_0 (struct task_struct*) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_0, struct inode *VAR_1)
{
 struct inode_smack *VAR_2 = VAR_1->i_security;
 VAR_2->smk_inode = FUNC_0(VAR_0);
}
