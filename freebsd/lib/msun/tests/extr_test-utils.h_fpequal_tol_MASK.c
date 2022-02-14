
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fenv_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (long double) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (long double) ;
 int FUNC_4 (long double) ;

__attribute__((used)) static int
FUNC_5(long double VAR_2, long double VAR_3, long double VAR_4,
    unsigned int VAR_5)
{
 fenv_t VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_2) && FUNC_3(VAR_3))
  return (1);
 if (!FUNC_4(VAR_2) != !FUNC_4(VAR_3) && (VAR_5 & VAR_0))
  return (0);
 if (VAR_2 == VAR_3)
  return (1);
 if (VAR_4 == 0)
  return (0);


 FUNC_1(&VAR_6);





 if ((VAR_5 & VAR_1) && VAR_3 == 0.0)
  VAR_7 = FUNC_0(VAR_2 - VAR_3) <= FUNC_0(VAR_4);
 else
  VAR_7 = FUNC_0(VAR_2 - VAR_3) <= FUNC_0(VAR_3 * VAR_4);
 FUNC_2(&VAR_6);
 return (VAR_7);
}
