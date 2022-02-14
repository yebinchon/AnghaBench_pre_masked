
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (int*,size_t) ;

void
FUNC_3(uint32_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3;
 size_t VAR_4, VAR_5;

 VAR_3 = VAR_1;
 VAR_4 = VAR_2;
 VAR_5 = 1;
 for (;;) {
  if (VAR_4 < 4) {
   uint32_t VAR_6;

   if (VAR_4 < 2) {
    if (VAR_4 == 0) {
     break;
    } else {
     VAR_6 = VAR_3[0];
    }
   } else {
    if (VAR_4 == 2) {
     VAR_6 = FUNC_0(VAR_3);
    } else {
     VAR_6 = ((uint32_t)VAR_3[0] << 16)
      | FUNC_0(VAR_3 + 1);
    }
   }
   VAR_0[VAR_5 ++] = VAR_6;
   break;
  } else {
   VAR_4 -= 4;
   VAR_0[VAR_5 ++] = FUNC_1(VAR_3 + VAR_4);
  }
 }
 VAR_0[0] = FUNC_2(VAR_0 + 1, VAR_5 - 1);
}
