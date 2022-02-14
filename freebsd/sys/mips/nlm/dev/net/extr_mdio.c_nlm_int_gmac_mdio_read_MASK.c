
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(uint64_t VAR_14, int VAR_15, int VAR_16,
    int VAR_17, int VAR_18, int VAR_19)
{
 uint32_t VAR_20;
 uint32_t VAR_21;

 VAR_21 = VAR_8 |
     (VAR_18 << VAR_7) |
     (VAR_19 << VAR_2) |
     (2 << VAR_6) |
     (1 << VAR_9) |
     (7 << VAR_11) |
     (2 << VAR_10) |
     (2 << VAR_5) |
     (1 << VAR_4);

 VAR_20 = FUNC_1(VAR_14,
     FUNC_0(VAR_16, VAR_17, (VAR_0 + VAR_15 * 4)));
 if (VAR_20 & VAR_1) {
  FUNC_2(VAR_14,
      FUNC_0(VAR_16, VAR_17, (VAR_0 + VAR_15*4)),
      (VAR_20 & ~VAR_1));
 }

 FUNC_2(VAR_14,
     FUNC_0(VAR_16, VAR_17, (VAR_0 + VAR_15 * 4)),
     VAR_21);


 FUNC_2(VAR_14,
     FUNC_0(VAR_16, VAR_17, (VAR_0 + VAR_15 * 4)),
     VAR_21 | (1 << VAR_3));


 while(FUNC_1(VAR_14,
     FUNC_0(VAR_16, VAR_17, (VAR_12 + VAR_15 * 4))) &
     VAR_13) {
 }

 FUNC_2(VAR_14,
     FUNC_0(VAR_16, VAR_17, (VAR_0 + VAR_15 * 4)),
     VAR_21);


 return FUNC_1(VAR_14,
     FUNC_0(VAR_16, VAR_17, (VAR_12 + VAR_15 * 4)));
}
