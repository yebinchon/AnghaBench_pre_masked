
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
 int VAR_7 ;

__attribute__((used)) static void
FUNC_0(U *VAR_8, FPBits *VAR_9)
{
 ULong *VAR_10;
 int VAR_11, VAR_12;
 static FPI VAR_13 = { 53, 1-1023-53+1, 2046-1023-53+1, 1, 0 };

 VAR_9->fpi = &VAR_13;
 VAR_9->gdtoa = VAR_7;
 VAR_9->sign = VAR_8->ui[VAR_5] & 0x80000000L;
 VAR_10 = VAR_9->bits;
 VAR_10[1] = VAR_8->ui[VAR_5] & 0xfffff;
 VAR_10[0] = VAR_8->ui[VAR_6];
 if ( (VAR_11 = (VAR_8->ui[VAR_5] & 0x7ff00000L) >> 20) !=0) {
  if (VAR_11 == 0x7ff) {

   VAR_12 = VAR_10[0] | VAR_10[1] ? VAR_2 : VAR_1;
   }
  else {
   VAR_12 = VAR_3;
   VAR_10[1] |= 0x100000;
   }
  }
 else if (VAR_10[0] | VAR_10[1]) {
  VAR_12 = VAR_0;
  VAR_11 = 1;
  }
 else
  VAR_12 = VAR_4;
 VAR_9->kind = VAR_12;
 VAR_9->ex = VAR_11 - (0x3ff + 52);
 }
