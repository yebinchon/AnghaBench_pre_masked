
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULong ;
struct TYPE_6__ {int* us; } ;
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
 size_t VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_0(U *VAR_11, FPBits *VAR_12)
{
 ULong *VAR_13;
 int VAR_14, VAR_15;
 static FPI VAR_16 = { 64, 1-16383-64+1, 32766 - 16383 - 64 + 1, 1, 0 };

 VAR_12->fpi = &VAR_16;
 VAR_12->gdtoa = VAR_10;
 VAR_12->sign = VAR_11->us[VAR_5] & 0x8000;
 VAR_13 = VAR_12->bits;
 VAR_13[1] = (VAR_11->us[VAR_6] << 16) | VAR_11->us[VAR_7];
 VAR_13[0] = (VAR_11->us[VAR_8] << 16) | VAR_11->us[VAR_9];
 if ( (VAR_14 = VAR_11->us[VAR_5] & 0x7fff) !=0) {
  VAR_15 = VAR_3;
  if (VAR_14 == 0x7fff)

   VAR_15 = VAR_13[0] | VAR_13[1] ? VAR_2 : VAR_1;
  }
 else if (VAR_13[0] | VAR_13[1]) {
  VAR_15 = VAR_0;
  VAR_14 = 1;
  }
 else
  VAR_15 = VAR_4;
 VAR_12->kind = VAR_15;
 VAR_12->ex = VAR_14 - (0x3fff + 63);
 }
