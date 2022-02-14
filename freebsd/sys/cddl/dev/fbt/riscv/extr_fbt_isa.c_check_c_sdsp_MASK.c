
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
 scalar_t__ FUNC_0 (int ,int,int) ;

__attribute__((used)) static int
FUNC_1(uint32_t **VAR_4)
{
 uint16_t *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_5 = (uint16_t *)(*VAR_4) + VAR_6;
  if (FUNC_0(*VAR_5, (VAR_1 | VAR_3),
      (VAR_0 | VAR_2))) {
   *VAR_4 = (uint32_t *)VAR_5;
   return (1);
  }
 }

 return (0);
}
