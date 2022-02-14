
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;


 int FUNC_0 (struct thread*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct thread* FUNC_2 (struct thread*) ;
 int * VAR_0 ;
 struct thread* FUNC_3 () ;

struct thread *
FUNC_4(void)
{
 struct thread *VAR_1;

 VAR_1 = FUNC_3();

 if (FUNC_1(VAR_0 != ((void*)0)))
  return (FUNC_2(VAR_1));

 FUNC_0(VAR_1);
 return (VAR_1);
}
