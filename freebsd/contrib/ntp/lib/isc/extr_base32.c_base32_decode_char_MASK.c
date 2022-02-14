
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {char* base; scalar_t__ seen_32; int digits; int* val; int length; int target; scalar_t__ seen_end; } ;
typedef TYPE_1__ base32_decode_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static inline isc_result_t
FUNC_3(base32_decode_ctx_t *VAR_3, int VAR_4) {
 char *VAR_5;
 unsigned int VAR_6;

 if (VAR_3->seen_end)
  return (VAR_0);
 if ((VAR_5 = FUNC_2(VAR_3->base, VAR_4)) == ((void*)0))
  return (VAR_0);
 VAR_6 = VAR_5 - VAR_3->base;



 if (VAR_6 > 32)
  VAR_6 -= 33;



 if (VAR_6 != 32 && VAR_3->seen_32 != 0)
  return (VAR_0);





 if (VAR_6 == 32 && VAR_3->seen_32 == 0)
  switch (VAR_3->digits) {
  case 0:
  case 1:
   return (VAR_0);
  case 2:
   if ((VAR_3->val[1]&0x03) != 0)
    return (VAR_0);
   VAR_3->seen_32 = 1;
   break;
  case 3:
   return (VAR_0);
  case 4:
   if ((VAR_3->val[3]&0x0f) != 0)
    return (VAR_0);
   VAR_3->seen_32 = 3;
   break;
  case 5:
   if ((VAR_3->val[4]&0x01) != 0)
    return (VAR_0);
   VAR_3->seen_32 = 3;
   break;
  case 6:
   return (VAR_0);
  case 7:
   if ((VAR_3->val[6]&0x07) != 0)
    return (VAR_0);
   VAR_3->seen_32 = 4;
   break;
  }



 VAR_3->val[VAR_3->digits++] = (VAR_6 == 32) ? 0 : VAR_6;

 if (VAR_3->digits == 8) {
  int VAR_7 = 5;
  unsigned char VAR_8[5];

  if (VAR_3->seen_32 != 0) {
   VAR_3->seen_end = VAR_2;
   VAR_7 = VAR_3->seen_32;
  }
  VAR_8[0] = (VAR_3->val[0]<<3)|(VAR_3->val[1]>>2);
  VAR_8[1] = (VAR_3->val[1]<<6)|(VAR_3->val[2]<<1)|(VAR_3->val[3]>>4);
  VAR_8[2] = (VAR_3->val[3]<<4)|(VAR_3->val[4]>>1);
  VAR_8[3] = (VAR_3->val[4]<<7)|(VAR_3->val[5]<<2)|(VAR_3->val[6]>>3);
  VAR_8[4] = (VAR_3->val[6]<<5)|(VAR_3->val[7]);
  FUNC_0(FUNC_1(VAR_3->target, VAR_8, VAR_7));
  if (VAR_3->length >= 0) {
   if (VAR_7 > VAR_3->length)
    return (VAR_0);
   else
    VAR_3->length -= VAR_7;
  }
  VAR_3->digits = 0;
 }
 return (VAR_1);
}
