
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct pt_regs* FUNC_1 () ;
 int * VAR_1 ;
 int FUNC_2 (int,void*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pt_regs*) ;
 int FUNC_6 (struct pt_regs*) ;

void FUNC_7(int VAR_2)
{
 struct pt_regs *VAR_3 = FUNC_1();

 if (VAR_2 == VAR_0 && &FUNC_5)
  FUNC_5(VAR_3);
 if (!FUNC_6(VAR_3) && VAR_1 != ((void*)0) &&
     FUNC_0(FUNC_4(), VAR_1))
  FUNC_2(VAR_2, (void *)FUNC_3(VAR_3));
}
