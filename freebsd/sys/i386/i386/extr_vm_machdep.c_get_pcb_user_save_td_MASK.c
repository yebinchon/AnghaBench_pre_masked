
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef union savefpu {int dummy; } savefpu ;
struct thread {int td_kstack; int td_kstack_pages; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;

union savefpu *
FUNC_2(struct thread *VAR_3)
{
 vm_offset_t VAR_4;

 VAR_4 = VAR_3->td_kstack + VAR_3->td_kstack_pages * VAR_0 -
     FUNC_1(VAR_2, VAR_1);
 FUNC_0((VAR_4 % VAR_1) == 0, ("Unaligned pcb_user_save area"));
 return ((union savefpu *)VAR_4);
}
