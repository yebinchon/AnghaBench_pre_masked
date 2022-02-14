
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULong ;
struct TYPE_5__ {scalar_t__ kind; int ex; int* bits; TYPE_1__* fpi; } ;
struct TYPE_4__ {int nbits; } ;
typedef TYPE_1__ FPI ;
typedef TYPE_2__ FPBits ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(FPBits *VAR_1)
{
 FPI *VAR_2;
 ULong *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_1->kind == VAR_0)
  return VAR_1->ex = 0;
 VAR_2 = VAR_1->fpi;
 VAR_3 = VAR_1->bits;
 for(VAR_6 = (VAR_2->nbits - 1) >> 2; VAR_6 > 0; --VAR_6)
  if ((VAR_3[VAR_6 >> 3] >> 4*(VAR_6 & 7)) & 0xf) {
   VAR_7 = VAR_6 >> 3;
   for(VAR_4 = 0; VAR_4 <= VAR_7; ++VAR_4)
    if (VAR_3[VAR_4]) {
     if (VAR_4 > 0) {
      VAR_6 -= 8*VAR_4;
      VAR_1->ex += 32*VAR_4;
      for(VAR_5 = VAR_4; VAR_5 <= VAR_7; ++VAR_5)
       VAR_3[VAR_5-VAR_4] = VAR_3[VAR_5];
      }
     break;
     }
   for(VAR_4 = 0; VAR_4 < 28 && !((VAR_3[0] >> VAR_4) & 0xf); VAR_4 += 4);
   if (VAR_4) {
    VAR_1->ex += VAR_4;
    VAR_7 = VAR_6 >> 3;
    VAR_6 -= (VAR_4 >> 2);
    for(VAR_5 = 0;;++VAR_5) {
     VAR_3[VAR_5] >>= VAR_4;
     if (VAR_5 == VAR_7)
      break;
     VAR_3[VAR_5] |= VAR_3[VAR_5+1] << (32 - VAR_4);
     }
    }
   break;
   }
 return VAR_6;
 }
