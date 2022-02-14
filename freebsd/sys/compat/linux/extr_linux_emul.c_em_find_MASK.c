
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct linux_emuldata* td_emuldata; } ;
struct linux_emuldata {int dummy; } ;



struct linux_emuldata *
FUNC_0(struct thread *VAR_0)
{
 struct linux_emuldata *VAR_1;

 VAR_1 = VAR_0->td_emuldata;

 return (VAR_1);
}
