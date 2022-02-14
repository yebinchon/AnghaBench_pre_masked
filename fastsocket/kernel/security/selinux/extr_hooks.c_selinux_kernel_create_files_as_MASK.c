
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int create_sid; } ;
struct inode_security_struct {int sid; } ;
struct inode {struct inode_security_struct* i_security; } ;
struct cred {struct task_security_struct* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct cred *VAR_2, struct inode *VAR_3)
{
 struct inode_security_struct *VAR_4 = VAR_3->i_security;
 struct task_security_struct *VAR_5 = VAR_2->security;
 u32 VAR_6 = FUNC_1();
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4->sid,
      VAR_1,
      VAR_0,
      ((void*)0));

 if (VAR_7 == 0)
  VAR_5->create_sid = VAR_4->sid;
 return VAR_7;
}
