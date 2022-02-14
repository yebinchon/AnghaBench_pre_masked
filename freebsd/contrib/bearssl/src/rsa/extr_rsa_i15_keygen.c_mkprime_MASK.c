
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int br_prng_class ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int const**,int*,int,int*,size_t) ;
 int FUNC_2 (int const**,int*,int) ;
 int FUNC_3 (int*,int*) ;

__attribute__((used)) static void
FUNC_4(const br_prng_class **VAR_0, uint16_t *VAR_1, uint32_t VAR_2,
 uint32_t VAR_3, uint16_t *VAR_4, size_t VAR_5)
{
 size_t VAR_6;

 VAR_1[0] = VAR_2;
 VAR_6 = (VAR_2 + 15) >> 4;
 for (;;) {
  size_t VAR_7;
  uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
  int VAR_12;





  FUNC_2(VAR_0, VAR_1, VAR_2);
  if ((VAR_2 & 15) == 0) {
   VAR_1[VAR_6] |= 0x6000;
  } else if ((VAR_2 & 15) == 1) {
   VAR_1[VAR_6] |= 0x0001;
   VAR_1[VAR_6 - 1] |= 0x4000;
  } else {
   VAR_1[VAR_6] |= 0x0003 << ((VAR_2 & 15) - 2);
  }
  VAR_1[1] |= 0x0003;
  VAR_8 = 0;
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_11 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 ++) {
   uint32_t VAR_13;

   VAR_13 = VAR_1[1 + VAR_7];
   VAR_8 += VAR_13 << (VAR_7 & 1);
   VAR_8 = (VAR_8 & 0xFF) + (VAR_8 >> 8);
   VAR_9 += VAR_13 << ((4 - VAR_7) & 3);
   VAR_9 = (VAR_9 & 0xFF) + (VAR_9 >> 8);
   VAR_10 += VAR_13;
   VAR_10 = (VAR_10 & 0x1FF) + (VAR_10 >> 9);
   VAR_11 += VAR_13 << (5 & -(VAR_7 & 1));
   VAR_11 = (VAR_11 & 0x3FF) + (VAR_11 >> 10);
  }
  VAR_8 = (VAR_8 & 0x0F) + (VAR_8 >> 4);
  VAR_8 = (VAR_8 & 0x0F) + (VAR_8 >> 4);
  VAR_8 = ((VAR_8 * 43) >> 5) & 3;

  VAR_9 = (VAR_9 & 0xFF) + (VAR_9 >> 8);
  VAR_9 = (VAR_9 & 0x0F) + (VAR_9 >> 4);
  VAR_9 = (VAR_9 & 0x0F) + (VAR_9 >> 4);
  VAR_9 -= 10 & -FUNC_0(VAR_9, 9);
  VAR_9 -= 5 & -FUNC_0(VAR_9, 4);

  VAR_10 = (VAR_10 & 0x3F) + (VAR_10 >> 6);
  VAR_10 = (VAR_10 & 7) + (VAR_10 >> 3);
  VAR_10 = ((VAR_10 * 147) >> 7) & 7;




  VAR_11 = (VAR_11 & 0x1F) + 66 - (VAR_11 >> 5);
  VAR_11 -= 88 & -FUNC_0(VAR_11, 87);
  VAR_11 -= 44 & -FUNC_0(VAR_11, 43);
  VAR_11 -= 22 & -FUNC_0(VAR_11, 21);
  VAR_11 -= 11 & -FUNC_0(VAR_11, 10);
  if (VAR_8 == 0 || VAR_9 == 0 || VAR_10 == 0 || VAR_11 == 0) {
   continue;
  }
  if ((VAR_3 == 3 && VAR_8 == 1)
   || (VAR_3 == 5 && VAR_9 == 5)
   || (VAR_3 == 7 && VAR_9 == 7)
   || (VAR_3 == 11 && VAR_9 == 11))
  {
   continue;
  }




  if (!FUNC_3(VAR_1, VAR_4)) {
   continue;
  }
  if (VAR_2 < 320) {
   VAR_12 = 12;
  } else if (VAR_2 < 480) {
   VAR_12 = 9;
  } else if (VAR_2 < 693) {
   VAR_12 = 6;
  } else if (VAR_2 < 906) {
   VAR_12 = 4;
  } else if (VAR_2 < 1386) {
   VAR_12 = 3;
  } else {
   VAR_12 = 2;
  }

  if (FUNC_1(VAR_0, VAR_1, VAR_12, VAR_4, VAR_5)) {
   return;
  }
 }
}
