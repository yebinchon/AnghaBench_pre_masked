
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int* VAR_8 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < 1 << VAR_7; VAR_10++) {
  VAR_9 = VAR_8[VAR_10];

  FUNC_0(FUNC_3(VAR_1) == 0);
  FUNC_0(FUNC_2(VAR_9) == 0);
  if ((VAR_9 & (VAR_6 | VAR_5)) != 0) {
   VAR_9 |= VAR_3;
   FUNC_0((FUNC_3(VAR_0) | VAR_3) ==
       VAR_9);
  } else {
   FUNC_0(FUNC_3(VAR_0) == VAR_9);
  }
  FUNC_0(FUNC_1(VAR_1) == 0);
 }
 FUNC_0(FUNC_2(VAR_4 | VAR_2) == 0);
 FUNC_0(FUNC_3(VAR_0) == (VAR_4 | VAR_2));
 FUNC_0(FUNC_2(VAR_5 | VAR_6 | VAR_3) == 0);
 FUNC_0(FUNC_3(VAR_0) == VAR_0);
 FUNC_0(FUNC_1(VAR_1) == 0);
}
