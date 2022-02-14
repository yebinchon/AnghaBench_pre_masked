
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULong ;
struct TYPE_6__ {int* ui; } ;
typedef TYPE_1__ U ;
struct TYPE_8__ {int sign; int* bits; int kind; int ex; int gdtoa; TYPE_2__* fpi; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int member_4; } ;
typedef TYPE_2__ FPI ;
typedef TYPE_3__ FPBits ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_0(U *VAR_10, FPBits *VAR_11)
{
 ULong *VAR_12;
 int VAR_13, VAR_14;
 static FPI VAR_15 = { 113, 1-16383-113+1, 32766 - 16383 - 113 + 1, 1, 0 };

 VAR_11->fpi = &VAR_15;
 VAR_11->gdtoa = VAR_9;
 VAR_11->sign = VAR_10->ui[VAR_5] & 0x80000000L;
 VAR_12 = VAR_11->bits;
 VAR_12[3] = VAR_10->ui[VAR_5] & 0xffff;
 VAR_12[2] = VAR_10->ui[VAR_6];
 VAR_12[1] = VAR_10->ui[VAR_7];
 VAR_12[0] = VAR_10->ui[VAR_8];
 if ( (VAR_13 = (VAR_10->ui[VAR_5] & 0x7fff0000L) >> 16) !=0) {
  if (VAR_13 == 0x7fff) {

   VAR_14 = VAR_12[0] | VAR_12[1] | VAR_12[2] | VAR_12[3]
    ? VAR_2 : VAR_1;
   }
  else {
   VAR_14 = VAR_3;
   VAR_12[3] |= 0x10000;
   }
  }
 else if (VAR_12[0] | VAR_12[1] | VAR_12[2] | VAR_12[3]) {
  VAR_14 = VAR_0;
  VAR_13 = 1;
  }
 else
  VAR_14 = VAR_4;
 VAR_11->kind = VAR_14;
 VAR_11->ex = VAR_13 - (0x3fff + 112);
 }
