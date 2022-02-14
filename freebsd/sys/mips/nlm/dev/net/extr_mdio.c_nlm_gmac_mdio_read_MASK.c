
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

int
FUNC_7(uint64_t VAR_9, int VAR_10, int VAR_11,
    int VAR_12, int VAR_13, int VAR_14)
{
 uint32_t VAR_15;
 uint32_t VAR_16;

 VAR_15 = FUNC_5(VAR_9, FUNC_1(VAR_11, VAR_12,
     (VAR_0 + VAR_10 * 4)));
 if (VAR_15 & VAR_2) {
  FUNC_6(VAR_9,
      FUNC_1(VAR_11, VAR_12, (VAR_0+VAR_10*4)),
      (VAR_15 & ~VAR_2));
  while(FUNC_5(VAR_9,
      FUNC_1(VAR_11, VAR_12,
      (VAR_1 + VAR_10 * 4))) &
      VAR_8);
 }

 VAR_16 = VAR_3 |
     (VAR_13 << VAR_6) |
     (VAR_14 << VAR_7);
 if (FUNC_3() || FUNC_4() || FUNC_2())
  VAR_16 |= VAR_4;
 else
  VAR_16 |= VAR_5;

 FUNC_6(VAR_9,
     FUNC_1(VAR_11, VAR_12, (VAR_0+VAR_10*4)),
     VAR_16);

 FUNC_6(VAR_9,
     FUNC_1(VAR_11, VAR_12, (VAR_0+VAR_10*4)),
     VAR_16 | (1<<18));
 FUNC_0(1000);

 while(FUNC_5(VAR_9,
     FUNC_1(VAR_11, VAR_12, (VAR_1 + VAR_10 * 4))) &
     VAR_8);

 FUNC_6(VAR_9,
     FUNC_1(VAR_11, VAR_12, (VAR_0+VAR_10*4)),
     VAR_16);


 return FUNC_5(VAR_9,
     FUNC_1(VAR_11, VAR_12, (VAR_1 + VAR_10 * 4)));
}
