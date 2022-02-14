
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sigaltstack_args {int * oss; int * ss; } ;
typedef int stack_t ;
typedef int ss ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct thread*,int *,int *) ;

int
FUNC_3(struct thread *VAR_0, struct sigaltstack_args *VAR_1)
{
 stack_t VAR_2, VAR_3;
 int VAR_4;

 if (VAR_1->ss != ((void*)0)) {
  VAR_4 = FUNC_0(VAR_1->ss, &VAR_2, sizeof(VAR_2));
  if (VAR_4)
   return (VAR_4);
 }
 VAR_4 = FUNC_2(VAR_0, (VAR_1->ss != ((void*)0)) ? &VAR_2 : ((void*)0),
     (VAR_1->oss != ((void*)0)) ? &VAR_3 : ((void*)0));
 if (VAR_4)
  return (VAR_4);
 if (VAR_1->oss != ((void*)0))
  VAR_4 = FUNC_1(&VAR_3, VAR_1->oss, sizeof(stack_t));
 return (VAR_4);
}
