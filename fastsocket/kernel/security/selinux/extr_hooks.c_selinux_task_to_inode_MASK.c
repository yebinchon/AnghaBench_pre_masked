
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct inode_security_struct {int initialized; int sid; } ;
struct inode {struct inode_security_struct* i_security; } ;


 int FUNC_0 (struct task_struct*) ;

__attribute__((used)) static void FUNC_1(struct task_struct *VAR_0,
      struct inode *VAR_1)
{
 struct inode_security_struct *VAR_2 = VAR_1->i_security;
 u32 VAR_3 = FUNC_0(VAR_0);

 VAR_2->sid = VAR_3;
 VAR_2->initialized = 1;
}
