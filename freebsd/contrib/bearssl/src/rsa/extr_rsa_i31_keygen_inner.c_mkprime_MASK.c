
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int br_prng_class ;
typedef int br_i31_modpow_opt_type ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int const**,int*,int,int*,size_t,int ) ;
 int FUNC_2 (int const**,int*,int) ;
 int FUNC_3 (int*,int*) ;

__attribute__((used)) static void
FUNC_4(const br_prng_class **VAR_0, uint32_t *VAR_1, uint32_t VAR_2,
 uint32_t VAR_3, uint32_t *VAR_4, size_t VAR_5, br_i31_modpow_opt_type VAR_6)
{
 size_t VAR_7;

 VAR_1[0] = VAR_2;
 VAR_7 = (VAR_2 + 31) >> 5;
 for (;;) {
  size_t VAR_8;
  uint32_t VAR_9, VAR_10, VAR_11, VAR_12;
  int VAR_13, VAR_14, VAR_15;





  FUNC_2(VAR_0, VAR_1, VAR_2);
  if ((VAR_2 & 31) == 0) {
   VAR_1[VAR_7] |= 0x60000000;
  } else if ((VAR_2 & 31) == 1) {
   VAR_1[VAR_7] |= 0x00000001;
   VAR_1[VAR_7 - 1] |= 0x40000000;
  } else {
   VAR_1[VAR_7] |= 0x00000003 << ((VAR_2 & 31) - 2);
  }
  VAR_1[1] |= 0x00000003;
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_11 = 0;
  VAR_12 = 0;
  VAR_14 = 0;
  VAR_15 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 ++) {
   uint32_t VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

   VAR_16 = VAR_1[1 + VAR_8];
   VAR_17 = (VAR_16 & 0xFFFF) + (VAR_16 >> 16);
   VAR_18 = (VAR_16 & 0xFFFF) + (VAR_16 >> 16);
   VAR_19 = (VAR_16 & 0x7FFF) + (VAR_16 >> 15);
   VAR_20 = (VAR_16 & 0xFFFFF) + (VAR_16 >> 20);

   VAR_9 += VAR_17 << (VAR_8 & 1);
   VAR_9 = (VAR_9 & 0xFF) + (VAR_9 >> 8);

   VAR_10 += VAR_18 << ((4 - VAR_8) & 3);
   VAR_10 = (VAR_10 & 0xFFF) + (VAR_10 >> 12);

   VAR_11 += VAR_19 << VAR_14;
   VAR_11 = (VAR_11 & 0x1FF) + (VAR_11 >> 9);
   if (++ VAR_14 == 3) {
    VAR_14 = 0;
   }

   VAR_12 += VAR_20 << VAR_15;
   if (++ VAR_15 == 10) {
    VAR_15 = 0;
   }
   VAR_12 = (VAR_12 & 0x3FF) + (VAR_12 >> 10);
  }

  VAR_9 = (VAR_9 & 0x3F) + (VAR_9 >> 6);
  VAR_9 = (VAR_9 & 0x0F) + (VAR_9 >> 4);
  VAR_9 = ((VAR_9 * 43) >> 5) & 3;

  VAR_10 = (VAR_10 & 0xFF) + (VAR_10 >> 8);
  VAR_10 = (VAR_10 & 0x0F) + (VAR_10 >> 4);
  VAR_10 -= 20 & -FUNC_0(VAR_10, 19);
  VAR_10 -= 10 & -FUNC_0(VAR_10, 9);
  VAR_10 -= 5 & -FUNC_0(VAR_10, 4);

  VAR_11 = (VAR_11 & 0x3F) + (VAR_11 >> 6);
  VAR_11 = (VAR_11 & 0x07) + (VAR_11 >> 3);
  VAR_11 = ((VAR_11 * 147) >> 7) & 7;




  VAR_12 = (VAR_12 & 0x3FF) + (VAR_12 >> 10);
  VAR_12 = (VAR_12 & 0x3FF) + (VAR_12 >> 10);
  VAR_12 = (VAR_12 & 0x1F) + 33 - (VAR_12 >> 5);
  VAR_12 -= 44 & -FUNC_0(VAR_12, 43);
  VAR_12 -= 22 & -FUNC_0(VAR_12, 21);
  VAR_12 -= 11 & -FUNC_0(VAR_12, 10);
  if (VAR_9 == 0 || VAR_10 == 0 || VAR_11 == 0 || VAR_12 == 0) {
   continue;
  }
  if ((VAR_3 == 3 && VAR_9 == 1)
   || (VAR_3 == 5 && VAR_10 == 5)
   || (VAR_3 == 7 && VAR_10 == 7)
   || (VAR_3 == 11 && VAR_10 == 11))
  {
   continue;
  }




  if (!FUNC_3(VAR_1, VAR_4)) {
   continue;
  }
  if (VAR_2 < 309) {
   VAR_13 = 12;
  } else if (VAR_2 < 464) {
   VAR_13 = 9;
  } else if (VAR_2 < 670) {
   VAR_13 = 6;
  } else if (VAR_2 < 877) {
   VAR_13 = 4;
  } else if (VAR_2 < 1341) {
   VAR_13 = 3;
  } else {
   VAR_13 = 2;
  }

  if (FUNC_1(VAR_0, VAR_1, VAR_13, VAR_4, VAR_5, VAR_6)) {
   return;
  }
 }
}
