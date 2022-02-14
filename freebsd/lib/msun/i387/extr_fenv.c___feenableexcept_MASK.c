
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __uint32_t ;
typedef int __uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;

int
FUNC_5(int VAR_2)
{
 __uint32_t VAR_3, VAR_4;
 __uint16_t VAR_5;

 VAR_2 &= VAR_0;
 FUNC_2(&VAR_5);
 if (FUNC_0())
  FUNC_4(&VAR_3);
 else
  VAR_3 = 0;
 VAR_4 = ~(VAR_5 | VAR_3 >> VAR_1) & VAR_0;
 VAR_5 &= ~VAR_2;
 FUNC_1(&VAR_5);
 if (FUNC_0()) {
  VAR_3 &= ~(VAR_2 << VAR_1);
  FUNC_3(&VAR_3);
 }
 return (VAR_4);
}
