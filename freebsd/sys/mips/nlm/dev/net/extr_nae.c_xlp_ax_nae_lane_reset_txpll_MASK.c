
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

void
FUNC_4(uint64_t VAR_13, int VAR_14, int VAR_15,
    int VAR_16)
{
 uint32_t VAR_17 = 0, VAR_18;
 int VAR_19 = 0;

 VAR_17 = VAR_11 |
     VAR_10 |
     (VAR_16 << VAR_9);


 if (VAR_16 != VAR_1)
  VAR_17 |= VAR_4;

 FUNC_3(VAR_13, FUNC_1(VAR_14, VAR_0, VAR_15), VAR_17);

 if (VAR_15 != 4) {
  VAR_19 = (1 << 23);
  if (VAR_16 != VAR_1)
   VAR_19 |= VAR_4;

  VAR_17 = FUNC_2(VAR_13,
      FUNC_1(VAR_14, VAR_0, VAR_15));
  VAR_17 &= ~VAR_11;
  VAR_17 |= VAR_19;


  FUNC_3(VAR_13,
      FUNC_1(VAR_14, VAR_0, VAR_15), VAR_17);

  FUNC_0(20000);

  VAR_17 |= VAR_11;
  FUNC_3(VAR_13,
      FUNC_1(VAR_14, VAR_0, VAR_15), VAR_17);

  VAR_17 = 0;
 }


 VAR_18 = FUNC_2(VAR_13,
     FUNC_1(VAR_14, VAR_0, VAR_15)) & 0xFFC00000;

 FUNC_3(VAR_13,
     FUNC_1(VAR_14, VAR_0, VAR_15),
     (0x66 << VAR_3)
     | VAR_6
     | VAR_7
     | VAR_11
     | VAR_19
     | VAR_17 );

 while (((VAR_17 = FUNC_2(VAR_13,
     FUNC_1(VAR_14, VAR_0, VAR_15))) &
     VAR_5));

 VAR_17 &= 0xFF;

 VAR_17 &= ~(1 << 4);
 FUNC_3(VAR_13,
     FUNC_1(VAR_14, VAR_0, VAR_15),
     (0x66 << VAR_3)
     | VAR_8
     | VAR_7
     | (0x0 << 19)
     | VAR_19
     | VAR_18
     | VAR_17 );


 FUNC_3(VAR_13,
     FUNC_1(VAR_14, VAR_0, VAR_15),
     (0x66 << VAR_3)
     | VAR_8
     | VAR_7
     | (0x0 << 19)
     | VAR_19
     | VAR_18
     | VAR_17 );

 while (!((VAR_17 = FUNC_2(VAR_13,
     FUNC_1(VAR_14, VAR_0, (VAR_15 - VAR_2)))) &
     VAR_12));


 VAR_17 = FUNC_2(VAR_13, FUNC_1(VAR_14, VAR_0, VAR_15));
 VAR_17 &= ~((1 << 29) | (0x7ffff));
 FUNC_3(VAR_13, FUNC_1(VAR_14, VAR_0, VAR_15),
     (VAR_19 | VAR_17));
}
