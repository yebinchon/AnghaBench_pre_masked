
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_frame {struct i386_frame* f_frame; int f_retaddr; } ;
typedef scalar_t__ register_t ;
typedef scalar_t__ db_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct i386_frame*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (int,int,int) ;

void
FUNC_2(void)
{
 struct i386_frame *VAR_1;
 db_addr_t VAR_2;
 register_t VAR_3;

 __asm __volatile("movl %%ebp,%0" : "=r" (VAR_3));
 VAR_1 = (struct i386_frame *)VAR_3;
 VAR_2 = (db_addr_t)FUNC_1((int)&VAR_1->f_retaddr, 4, 0);
 VAR_1 = VAR_1->f_frame;
 FUNC_0(VAR_0, ((void*)0), VAR_1, VAR_2, 0, -1);
}
