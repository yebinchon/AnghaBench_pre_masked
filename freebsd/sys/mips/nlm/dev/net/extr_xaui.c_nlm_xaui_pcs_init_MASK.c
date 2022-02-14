
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ,int,int,int ) ;

void
FUNC_6(uint64_t VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 uint32_t VAR_18;

 VAR_16 = VAR_5 |
     (VAR_5 << 4) |
     (VAR_5 << 8) |
     (VAR_5 << 12);

 if (VAR_12 == 0)
  return;


 VAR_13 = 7;

 if (VAR_12 & 0x3) {
  VAR_17 = FUNC_2(VAR_11,
      FUNC_0(VAR_13, VAR_0, VAR_1));
  if (VAR_12 & 0x1) {
   VAR_17 &= ~(0xFFFF);
   VAR_17 |= VAR_16;
  }
  if (VAR_12 & 0x2) {
   VAR_17 &= ~(0xFFFF<<16);
   VAR_17 |= (VAR_16 << 16);
  }
  FUNC_3(VAR_11,
      FUNC_0(VAR_13, VAR_0, VAR_1),
      VAR_17);
 }
 VAR_17 = 0;
 if (VAR_12 & 0xc) {
  VAR_17 = FUNC_2(VAR_11,
      FUNC_0(VAR_13, VAR_0, VAR_2));
  if (VAR_12 & 0x4) {
   VAR_17 &= ~(0xFFFF);
   VAR_17 |= VAR_16;
  }
  if (VAR_12 & 0x8) {
   VAR_17 &= ~(0xFFFF<<16);
   VAR_17 |= (VAR_16 << 16);
  }
  FUNC_3(VAR_11,
      FUNC_0(VAR_13, VAR_0, VAR_2),
      VAR_17);
 }


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  if ((VAR_12 & (1 << VAR_13)) == 0)
   continue;

  for (VAR_14 = VAR_8;
      VAR_14 <= VAR_9; VAR_14++) {
   if (!FUNC_1())
    FUNC_5(VAR_11,
        VAR_13, VAR_14, VAR_7);
   else
    FUNC_4(VAR_11, VAR_13,
        VAR_14, VAR_7);
  }
 }


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  if ((VAR_12 & (1 << VAR_13)) == 0)
   continue;

  for (VAR_14 = VAR_8;
      VAR_14 <= VAR_9; VAR_14++) {

   VAR_15 = FUNC_0(VAR_13, VAR_6, VAR_14 - 4);

   do {
    VAR_18 = FUNC_2(VAR_11, VAR_15);
   } while ((VAR_18 & VAR_4) == 0);


   do {
    VAR_18 = FUNC_2(VAR_11, VAR_15);
   } while ((VAR_18 & VAR_3) == 0);


   do {
    VAR_18 = FUNC_2(VAR_11, VAR_15);
   } while ((VAR_18 & VAR_10) != 0);
  }
 }
}
