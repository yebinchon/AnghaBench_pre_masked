
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct task_security_struct {scalar_t__ sockcreate_sid; int sid; } ;
struct cred {struct task_security_struct* security; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2,
     int VAR_3, int VAR_4)
{
 const struct cred *VAR_5 = FUNC_1();
 const struct task_security_struct *VAR_6 = VAR_5->security;
 u32 VAR_7, VAR_8;
 u16 VAR_9;
 int VAR_10 = 0;

 if (VAR_4)
  goto out;

 VAR_7 = VAR_6->sid;
 VAR_8 = VAR_6->sockcreate_sid ?: VAR_7;

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3);
 VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_9, VAR_0, ((void*)0));

out:
 return VAR_10;
}
