
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
 TYPE_1__* FUNC_0 (struct task_struct const*) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const struct task_struct *VAR_1,
    const struct task_struct *VAR_2,
    u32 VAR_3)
{
 const struct task_security_struct *VAR_4, *VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_1)->security; VAR_6 = VAR_4->sid;
 VAR_5 = FUNC_0(VAR_2)->security; VAR_7 = VAR_5->sid;
 FUNC_3();
 return FUNC_1(VAR_6, VAR_7, VAR_0, VAR_3, ((void*)0));
}
