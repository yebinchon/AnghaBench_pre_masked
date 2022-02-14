
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;


 int FUNC_0 (int*) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t) ;

void
FUNC_2(uint8_t *VAR_1)
{
 uint32_t VAR_2;

 FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2] & 0x1) {
   VAR_1[VAR_2] &= ~1;
   FUNC_1(VAR_2);
  }
 }
}
