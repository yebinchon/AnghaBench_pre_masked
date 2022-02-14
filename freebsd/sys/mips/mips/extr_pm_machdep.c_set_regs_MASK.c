
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int sr; } ;
struct thread {scalar_t__ td_frame; } ;
struct reg {int dummy; } ;
typedef int register_t ;


 int FUNC_0 (scalar_t__,struct reg*,int) ;

int
FUNC_1(struct thread *VAR_0, struct reg *VAR_1)
{
 struct trapframe *VAR_2;
 register_t VAR_3;

 VAR_2 = (struct trapframe *) VAR_0->td_frame;



 VAR_3 = VAR_2->sr;
 FUNC_0(VAR_0->td_frame, VAR_1, sizeof(struct reg));
 VAR_2->sr = VAR_3;
 return (0);
}
