
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm_exit {int exitcode; scalar_t__ inst_length; int rip; } ;
struct vm {int dummy; } ;


 int VAR_0 ;
 struct vm_exit* FUNC_0 (struct vm*,int) ;

void
FUNC_1(struct vm *VAR_1, int VAR_2, uint64_t VAR_3)
{
 struct vm_exit *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 VAR_4->rip = VAR_3;
 VAR_4->inst_length = 0;
 VAR_4->exitcode = VAR_0;
}
