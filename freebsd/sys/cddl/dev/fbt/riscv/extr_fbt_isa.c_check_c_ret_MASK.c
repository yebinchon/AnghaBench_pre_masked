
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int) ;

__attribute__((used)) static int
FUNC_1(uint32_t **VAR_5)
{
 uint16_t *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_6 = (uint16_t *)(*VAR_5) + VAR_7;
  if (FUNC_0(*VAR_6, (VAR_1 | (VAR_4 << VAR_3)),
      (VAR_0 | VAR_2))) {
   *VAR_5 = (uint32_t *)VAR_6;
   return (1);
  }
 }

 return (0);
}
