
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {int dummy; } ;


 int FUNC_0 (struct asn1_ctx*,unsigned char*) ;

__attribute__((used)) static unsigned char FUNC_1(struct asn1_ctx *VAR_0,
           unsigned long *VAR_1)
{
 unsigned char VAR_2;

 *VAR_1 = 0;

 do {
  if (!FUNC_0(VAR_0, &VAR_2))
   return 0;

  *VAR_1 <<= 7;
  *VAR_1 |= VAR_2 & 0x7F;
 } while ((VAR_2 & 0x80) == 0x80);
 return 1;
}
