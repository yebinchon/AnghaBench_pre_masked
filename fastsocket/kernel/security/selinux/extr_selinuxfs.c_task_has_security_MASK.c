
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct task_security_struct {int sid; } ;
struct TYPE_2__ {struct task_security_struct* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_3,
        u32 VAR_4)
{
 const struct task_security_struct *VAR_5;
 u32 VAR_6 = 0;

 FUNC_2();
 VAR_5 = FUNC_0(VAR_3)->security;
 if (VAR_5)
  VAR_6 = VAR_5->sid;
 FUNC_3();
 if (!VAR_5)
  return -VAR_0;

 return FUNC_1(VAR_6, VAR_2,
       VAR_1, VAR_4, ((void*)0));
}
