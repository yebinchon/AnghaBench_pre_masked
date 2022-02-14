
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fenv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

inline int
FUNC_4(fenv_t *VAR_4)
{
 fenv_t VAR_5;

 FUNC_0(VAR_5);
 *VAR_4 = VAR_5 & VAR_1;
 VAR_5 &= ~(VAR_1);
 FUNC_2(VAR_5);

 FUNC_1(VAR_5);
 *VAR_4 |= VAR_5 & (VAR_0 | (VAR_2 << VAR_3));
 VAR_5 &= ~(VAR_1);
 FUNC_3(VAR_5);
 return (0);
}
