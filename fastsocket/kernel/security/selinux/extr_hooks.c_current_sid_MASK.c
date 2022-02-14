
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_security_struct {int sid; } ;
struct TYPE_2__ {struct task_security_struct* security; } ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static inline u32 FUNC_1(void)
{
 const struct task_security_struct *VAR_0 = FUNC_0()->security;

 return VAR_0->sid;
}
