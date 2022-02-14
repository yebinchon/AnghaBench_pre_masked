
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULong ;
struct TYPE_5__ {int* bits; int ex; scalar_t__ sign; TYPE_1__* fpi; } ;
struct TYPE_4__ {int rounding; } ;
typedef TYPE_1__ FPI ;
typedef TYPE_2__ FPBits ;


 int VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(FPBits *VAR_2, int VAR_3, int VAR_4)
{
 FPI *VAR_5 = VAR_2->fpi;
 ULong *VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 VAR_12 = VAR_4 - VAR_3;
 VAR_6 = VAR_2->bits;
 VAR_9 = 0;
   VAR_11 = VAR_12 - 1;
   if ((VAR_7 = VAR_6[VAR_11 >> 3] >> (VAR_10 = (VAR_11&7)*4)) & 8) {
    if (VAR_7 & 7)
     goto inc1;
    if (VAR_10 && VAR_6[VAR_11 >> 3] << (32 - VAR_10))
     goto inc1;
    while(VAR_11 >= 8) {
     VAR_11 -= 8;
     if (VAR_6[VAR_11>>3]) {
 inc1:
      VAR_9 = 1;
      goto haveinc;
      }
     }
    }



 haveinc:
 VAR_2->ex += VAR_12*4;
 VAR_8 = VAR_12 >> 3;
 VAR_11 = VAR_4 >> 3;
 VAR_10 = VAR_8;
 if ((VAR_13 = 4*(VAR_12 & 7)))
  for(;; ++VAR_10) {
   VAR_6[VAR_10-VAR_8] = VAR_6[VAR_10] >> VAR_13;
   if (VAR_10 == VAR_11)
    break;
   VAR_6[VAR_10-VAR_8] |= VAR_6[VAR_10+1] << (32-VAR_13);
   }
 else
  for(;; ++VAR_10) {
   VAR_6[VAR_10-VAR_8] = VAR_6[VAR_10];
   if (VAR_10 == VAR_11)
    break;
   }
 VAR_11 = VAR_3 >> 3;
 if (VAR_9) {
  for(VAR_10 = 0; !(++VAR_6[VAR_10] & 0xffffffff); ++VAR_10);
  if (VAR_10 > VAR_11) {
 onebit:
   VAR_6[0] = 1;
   VAR_2->ex += 4*VAR_3;
   return 1;
   }
  if ((VAR_10 = VAR_3 & 7) < 7 && VAR_6[VAR_11] >> (VAR_10+1)*4)
   goto onebit;
  }
 for(VAR_8 = 0; !(VAR_6[VAR_8 >> 3] & (0xf << 4*(VAR_8&7))); ++VAR_8);
 if (VAR_8) {
  VAR_2->ex += 4*VAR_8;
  VAR_3 -= VAR_8;
  VAR_10 = VAR_8 >> 3;
  VAR_8 &= 7;
  VAR_8 *= 4;
  for(VAR_12 = VAR_10; ; ++VAR_12) {
   VAR_6[VAR_12-VAR_10] = VAR_6[VAR_12] >> VAR_8;
   if (VAR_12 == VAR_11)
    break;
   VAR_6[VAR_12-VAR_10] |= VAR_6[VAR_12+1] << (32 - VAR_8);
   }
  }
 return VAR_3;
 }
