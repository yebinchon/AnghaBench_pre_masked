
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

int
FUNC_7(uint64_t VAR_10, int VAR_11, int VAR_12,
    int VAR_13, int VAR_14, int VAR_15, uint16_t VAR_16)
{
 uint32_t VAR_17;
 uint32_t VAR_18;

 VAR_17 = FUNC_5(VAR_10, FUNC_1(VAR_12, VAR_13,
     (VAR_0 + VAR_11 * 4)));
 if (VAR_17 & VAR_3) {
  FUNC_6(VAR_10,
      FUNC_1(VAR_12, VAR_13, (VAR_0+VAR_11*4)),
      (VAR_17 & ~VAR_3));
  while(FUNC_5(VAR_10,
      FUNC_1(VAR_12, VAR_13,
      (VAR_2 + VAR_11 * 4))) &
      VAR_9);
 }


 FUNC_6(VAR_10,
     FUNC_1(VAR_12, VAR_13, (VAR_1+VAR_11*4)),
     VAR_16);

 VAR_18 = VAR_4 |
     (VAR_14 << VAR_7) |
     (VAR_15 << VAR_8);
 if (FUNC_3() || FUNC_4() || FUNC_2())
  VAR_18 |= VAR_5;
 else
  VAR_18 |= VAR_6;

 FUNC_6(VAR_10,
     FUNC_1(VAR_12, VAR_13, (VAR_0+VAR_11*4)),
     VAR_18);

 FUNC_6(VAR_10,
     FUNC_1(VAR_12, VAR_13, (VAR_0+VAR_11*4)),
     VAR_18 | VAR_3);
 FUNC_0(1000);


 while(FUNC_5(VAR_10,
     FUNC_1(VAR_12, VAR_13,
     (VAR_2 + VAR_11 * 4))) & VAR_9);

 FUNC_6(VAR_10,
     FUNC_1(VAR_12, VAR_13, (VAR_0+VAR_11*4)),
     VAR_18);

 return (0);
}
