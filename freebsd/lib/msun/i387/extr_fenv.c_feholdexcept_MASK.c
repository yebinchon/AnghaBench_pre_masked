
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fenv_t ;
typedef int __uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int*) ;

int
FUNC_6(fenv_t *VAR_2)
{
 __uint32_t VAR_3;

 FUNC_2(VAR_2);
 FUNC_1();
 if (FUNC_0()) {
  FUNC_5(&VAR_3);
  FUNC_4(*VAR_2, VAR_3);
  VAR_3 &= ~VAR_0;
  VAR_3 |= VAR_0 << VAR_1;
  FUNC_3(&VAR_3);
 }
 return (0);
}
