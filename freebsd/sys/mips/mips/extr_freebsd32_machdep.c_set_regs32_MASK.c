
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct reg32 {int * r_regs; } ;
struct reg {int * r_regs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct thread*,struct reg*) ;

int
FUNC_1(struct thread *VAR_1, struct reg32 *VAR_2)
{
 struct reg VAR_3;
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3.r_regs[VAR_4] = VAR_2->r_regs[VAR_4];

 return (FUNC_0(VAR_1, &VAR_3));
}
