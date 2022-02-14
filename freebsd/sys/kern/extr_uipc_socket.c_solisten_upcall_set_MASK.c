
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {void* sol_upcallarg; int sol_upcall; } ;
typedef int so_upcall_t ;


 int FUNC_0 (struct socket*) ;

void
FUNC_1(struct socket *VAR_0, so_upcall_t VAR_1, void *VAR_2)
{

 FUNC_0(VAR_0);
 VAR_0->sol_upcall = VAR_1;
 VAR_0->sol_upcallarg = VAR_2;
}
