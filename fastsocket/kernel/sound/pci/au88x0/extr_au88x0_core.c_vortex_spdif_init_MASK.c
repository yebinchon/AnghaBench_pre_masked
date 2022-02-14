
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int ,int,int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_3(vortex_t * VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;


 FUNC_1(VAR_6->mmio, VAR_4,
  FUNC_0(VAR_6->mmio, VAR_4) & 0xfff3fffd);

 for (VAR_9 = 0; VAR_9 < 11; VAR_9++)
  FUNC_1(VAR_6->mmio, VAR_3 + (VAR_9 << 2), 0);

 FUNC_1(VAR_6->mmio, VAR_1,
  FUNC_0(VAR_6->mmio, VAR_1) | VAR_0);


 if (VAR_11 && VAR_12) {
  int VAR_14;

  VAR_9 = (((0x5DC00000 / VAR_7) + 1) >> 1);
  if (VAR_9 > 0x800) {
   if (VAR_9 < 0x1ffff)
    VAR_14 = (VAR_9 >> 1);
   else
    VAR_14 = 0x1ffff;
  } else {
   VAR_9 = VAR_14 = 0x800;
  }

  FUNC_2(VAR_6, VAR_11, VAR_14, 0, 1,
     VAR_13, 1, 0, VAR_14, 1);
  FUNC_2(VAR_6, VAR_12, VAR_14, 0, 1,
     VAR_13, 1, 0, VAR_14, 1);
 }

 VAR_9 = VAR_7;
 VAR_7 |= 0x8c;
 switch (VAR_9) {
 case 32000:
  VAR_10 &= 0xFFFFFFFE;
  VAR_10 &= 0xFFFFFFFD;
  VAR_10 &= 0xF3FFFFFF;
  VAR_10 |= 0x03000000;
  VAR_10 &= 0xFFFFFF3F;
  VAR_7 &= 0xFFFFFFFD;
  VAR_7 |= 1;
  break;
 case 44100:
  VAR_10 &= 0xFFFFFFFE;
  VAR_10 &= 0xFFFFFFFD;
  VAR_10 &= 0xF0FFFFFF;
  VAR_10 |= 0x03000000;
  VAR_10 &= 0xFFFFFF3F;
  VAR_7 &= 0xFFFFFFFC;
  break;
 case 48000:
  if (VAR_8 == 1) {
   VAR_10 &= 0xFFFFFFFE;
   VAR_10 &= 0xFFFFFFFD;
   VAR_10 &= 0xF2FFFFFF;
   VAR_10 |= 0x02000000;
   VAR_10 &= 0xFFFFFF3F;
  } else {

   VAR_10 |= 0x00000003;
   VAR_10 &= 0xFFFFFFBF;
   VAR_10 |= 0x80;
  }
  VAR_7 |= 2;
  VAR_7 &= 0xFFFFFFFE;
  break;

 }



 FUNC_1(VAR_6->mmio, VAR_2, VAR_10 & 0xffff);
 FUNC_1(VAR_6->mmio, VAR_3, VAR_10 >> 0x10);
 FUNC_1(VAR_6->mmio, VAR_5, VAR_7);
}
