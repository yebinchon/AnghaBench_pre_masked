
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct _region {int dummy; } ;


 scalar_t__ FUNC_0 (int const) ;
 int * FUNC_1 (struct _region*) ;
 size_t FUNC_2 (struct _region*) ;

uint32_t
FUNC_3(struct _region *VAR_0)
{
 const uint8_t *VAR_1;
 uint32_t VAR_2, VAR_3;
 size_t VAR_4;

 VAR_2 = 0;
 VAR_1 = FUNC_1(VAR_0);

 for (VAR_4 = FUNC_2(VAR_0); VAR_4 > 0; VAR_4--) {
  VAR_2 <<= 4;
  VAR_2 += FUNC_0(*VAR_1);
  VAR_3 = VAR_2 & 0xF0000000;
  if (VAR_3 != 0) {
   VAR_2 ^= VAR_3;
   VAR_2 ^= VAR_3 >> 24;
  }
  VAR_1++;
 }
 return (VAR_2);
}
