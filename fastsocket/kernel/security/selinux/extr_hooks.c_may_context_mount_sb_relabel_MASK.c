
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int sid; } ;
struct superblock_security_struct {int sid; } ;
struct cred {struct task_security_struct* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(u32 VAR_3,
   struct superblock_security_struct *VAR_4,
   const struct cred *VAR_5)
{
 const struct task_security_struct *VAR_6 = VAR_5->security;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->sid, VAR_4->sid, VAR_2,
     VAR_0, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6->sid, VAR_3, VAR_2,
     VAR_1, ((void*)0));
 return VAR_7;
}
