
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {unsigned char* pointer; int error; } ;


 int VAR_0 ;
 int FUNC_0 (struct asn1_ctx*,unsigned char*) ;

__attribute__((used)) static unsigned char FUNC_1(struct asn1_ctx *VAR_1,
           unsigned char *VAR_2,
           unsigned long *VAR_3)
{
 unsigned char VAR_4;
 unsigned int VAR_5;

 if (!FUNC_0(VAR_1, &VAR_4))
  return 0;

 *VAR_3 = VAR_4;
 if (VAR_4 == 0) VAR_5 = 0;
 else VAR_5 = 1;

 while (VAR_1->pointer < VAR_2) {
  if (++VAR_5 > sizeof (unsigned long)) {
   VAR_1->error = VAR_0;
   return 0;
  }

  if (!FUNC_0(VAR_1, &VAR_4))
   return 0;

  *VAR_3 <<= 8;
  *VAR_3 |= VAR_4;
 }
 return 1;
}
