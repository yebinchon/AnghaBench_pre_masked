
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackmark {int stacknleft; scalar_t__ stacknxt; int * stackp; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int) ;

void
FUNC_2(struct stackmark *VAR_3)
{
 VAR_3->stackp = VAR_2;
 VAR_3->stacknxt = VAR_1;
 VAR_3->stacknleft = VAR_0;

 if (VAR_2 != ((void*)0) && VAR_1 == FUNC_0(VAR_2))
  FUNC_1(1);
}
