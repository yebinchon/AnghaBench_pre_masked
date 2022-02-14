
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct linux_pemuldata* p_emuldata; } ;
struct linux_pemuldata {int dummy; } ;



struct linux_pemuldata *
FUNC_0(struct proc *VAR_0)
{
 struct linux_pemuldata *VAR_1;

 VAR_1 = VAR_0->p_emuldata;

 return (VAR_1);
}
