
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int* VAR_6 ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < 1 << VAR_5; VAR_8++)
  FUNC_0(FUNC_2(VAR_6[VAR_8]) == 0);
 for (VAR_8 = 0; VAR_8 < 1 << VAR_5; VAR_8++) {
  VAR_7 = VAR_6[VAR_8];


  FUNC_3(VAR_7);
  FUNC_0(FUNC_2(VAR_7) == VAR_7);
  FUNC_0(FUNC_1(VAR_1) == 0);
  FUNC_0(FUNC_2(VAR_1) == 0);

  FUNC_3(VAR_7);
  FUNC_0(FUNC_2(VAR_7) == VAR_7);
  if ((VAR_7 & (VAR_4 | VAR_3)) != 0) {
   VAR_7 |= VAR_2;
   FUNC_0((FUNC_2(VAR_0) | VAR_2) ==
       VAR_7);
  } else {
   FUNC_0(FUNC_2(VAR_0) == VAR_7);
  }
  FUNC_0(FUNC_1(VAR_7) == 0);
  FUNC_0(FUNC_2(VAR_0) == 0);
 }
}
