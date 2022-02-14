
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {unsigned int end; unsigned int pointer; } ;


 int FUNC_0 (struct asn1_ctx*,unsigned char*) ;

__attribute__((used)) static unsigned char FUNC_1(struct asn1_ctx *VAR_0,
     unsigned int *VAR_1,
     unsigned int *VAR_2)
{
 unsigned char VAR_3, VAR_4;

 if (!FUNC_0(VAR_0, &VAR_3))
  return 0;

 if (VAR_3 == 0x80)
  *VAR_1 = 0;
 else {
  *VAR_1 = 1;

  if (VAR_3 < 0x80)
   *VAR_2 = VAR_3;
  else {
   VAR_4 = VAR_3 & 0x7F;
   *VAR_2 = 0;

   while (VAR_4 > 0) {
    if (!FUNC_0(VAR_0, &VAR_3))
     return 0;
    *VAR_2 <<= 8;
    *VAR_2 |= VAR_3;
    VAR_4--;
   }
  }
 }


 if (*VAR_2 > VAR_0->end - VAR_0->pointer)
  return 0;

 return 1;
}
