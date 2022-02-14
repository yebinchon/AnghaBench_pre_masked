
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(uint64_t VAR_15, int VAR_16, int VAR_17,
    int VAR_18, int VAR_19, int VAR_20, uint16_t VAR_21)
{
 uint32_t VAR_22;
 uint32_t VAR_23;

 VAR_23 = VAR_9 |
     (VAR_19 << VAR_8) |
     (VAR_20 << VAR_3) |
     (1 << VAR_7) |
     (1 << VAR_10) |
     (7 << VAR_12) |
     (2 << VAR_11) |
     (1 << VAR_6) |
     (1 << VAR_5);

 VAR_22 = FUNC_1(VAR_15,
     FUNC_0(VAR_17, VAR_18, (VAR_0 + VAR_16 * 4)));
 if (VAR_22 & VAR_1) {
  FUNC_2(VAR_15,
      FUNC_0(VAR_17, VAR_18, (VAR_0 + VAR_16*4)),
      (VAR_22 & ~VAR_1));
 }


 FUNC_2(VAR_15,
     FUNC_0(VAR_17, VAR_18, (VAR_2 + VAR_16 * 4)),
     VAR_21);

 FUNC_2(VAR_15,
     FUNC_0(VAR_17, VAR_18, (VAR_0 + VAR_16 * 4)),
     VAR_23);

 FUNC_2(VAR_15,
     FUNC_0(VAR_17, VAR_18, (VAR_0 + VAR_16 * 4)),
     VAR_23 | (1 << VAR_4));


 while(FUNC_1(VAR_15,
     FUNC_0(VAR_17, VAR_18, (VAR_13 + VAR_16 * 4))) &
     VAR_14) {
 }

 FUNC_2(VAR_15,
     FUNC_0(VAR_17, VAR_18, (VAR_0 + VAR_16 * 4)),
     VAR_23);

 return (0);
}
