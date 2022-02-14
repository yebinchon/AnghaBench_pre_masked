
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 struct task_security_struct* FUNC_1 () ;
 scalar_t__ VAR_2 ;

int FUNC_2(u32 VAR_3)
{
 if (VAR_2) {
  const struct task_security_struct *VAR_4;
  u32 VAR_5;

  VAR_4 = FUNC_1();
  VAR_5 = VAR_4->sid;

  return FUNC_0(VAR_5, VAR_3, VAR_1,
        VAR_0, ((void*)0));
 }
 return 0;
}
