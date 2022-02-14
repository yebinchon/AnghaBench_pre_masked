
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {int md_stack_base; } ;
struct thread {TYPE_1__ td_md; } ;
struct savefpu {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

struct savefpu *
FUNC_1(struct thread *VAR_1)
{
 vm_offset_t VAR_2;

 VAR_2 = VAR_1->td_md.md_stack_base;
 FUNC_0((VAR_2 % VAR_0) == 0,
     ("Unaligned pcb_user_save area ptr %#lx td %p", VAR_2, VAR_1));
 return ((struct savefpu *)VAR_2);
}
