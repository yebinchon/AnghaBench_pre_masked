
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (struct socket*,int) ;
 int * FUNC_3 (struct socket*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_1, int VAR_2, struct thread *VAR_3)
{
 int VAR_4;





 FUNC_0(FUNC_3(VAR_1) != ((void*)0), ("raw_uattach: so_pcb == NULL"));

 if (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  if (VAR_4)
   return (VAR_4);
 }
 return (FUNC_2(VAR_1, VAR_2));
}
