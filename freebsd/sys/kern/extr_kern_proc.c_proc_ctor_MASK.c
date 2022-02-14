
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef struct thread proc ;


 int FUNC_0 (int ,struct thread*) ;
 struct thread* FUNC_1 (struct thread*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, int VAR_3, void *VAR_4, int VAR_5)
{
 struct proc *VAR_6;
 struct thread *VAR_7;

 VAR_6 = (struct proc *)VAR_2;
 FUNC_0(VAR_0, VAR_6);
 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 != ((void*)0)) {

  FUNC_0(VAR_1, VAR_7);
 }
 return (0);
}
