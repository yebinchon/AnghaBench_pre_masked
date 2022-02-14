
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64_frame {struct amd64_frame* f_frame; int f_retaddr; } ;
typedef scalar_t__ register_t ;
typedef scalar_t__ db_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct amd64_frame*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (long,int,int ) ;

void
FUNC_2(void)
{
 struct amd64_frame *VAR_2;
 db_addr_t VAR_3;
 register_t VAR_4;

 __asm __volatile("movq %%rbp,%0" : "=r" (VAR_4));
 VAR_2 = (struct amd64_frame *)VAR_4;
 VAR_3 = (db_addr_t)FUNC_1((long)&VAR_2->f_retaddr, 8, VAR_0);
 VAR_2 = VAR_2->f_frame;
 FUNC_0(VAR_1, ((void*)0), VAR_2, VAR_3, 0, -1);
}
