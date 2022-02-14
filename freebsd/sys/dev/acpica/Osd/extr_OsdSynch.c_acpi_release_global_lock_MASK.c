
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int volatile*,int,int) ;

int
FUNC_1(volatile uint32_t *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 do {
  VAR_4 = *VAR_2;
  VAR_3 = VAR_4 & ~(VAR_1 | VAR_0);
 } while (FUNC_0(VAR_2, VAR_4, VAR_3) == 0);

 return ((VAR_4 & VAR_1) != 0);
}
