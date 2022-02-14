
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
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;
 int VAR_12 ;

void
FUNC_11(int VAR_13)
{
 int VAR_14;

 if (VAR_13 == VAR_9 || VAR_11 == 0)
  return;
 if (VAR_13) {
  if (VAR_12 != -1)
   FUNC_0(VAR_12);
  if ((VAR_12 = FUNC_6(VAR_6, VAR_2 | VAR_1)) < 0) {
   VAR_14 = 0;
   while (VAR_14 <= 2 && !FUNC_3(VAR_14))
    VAR_14++;
   if (VAR_14 > 2 ||
       (VAR_12 = FUNC_1(VAR_14, VAR_0, 10)) < 0) {
    FUNC_4();
    return;
   }
  }
  if (VAR_12 < 10) {




   if ((VAR_14 = FUNC_1(VAR_12, VAR_0, 10)) < 0) {
    FUNC_4();
    return;
   }
   FUNC_0(VAR_12);
   VAR_12 = VAR_14;
  }
  do {
   VAR_8 = FUNC_9(VAR_12);
   if (VAR_8 < 0) {
    FUNC_4();
    return;
   }
   if (VAR_8 != FUNC_2()) {
    if (!VAR_7) {
     VAR_8 = -1;
     FUNC_4();
     return;
    }
    FUNC_5(0, VAR_4);
    continue;
   }
  } while (0);
  FUNC_8(VAR_3);
  FUNC_8(VAR_5);
  FUNC_8(VAR_4);
  FUNC_7(0, VAR_10);
  FUNC_10(VAR_12, VAR_10);
 } else {
  FUNC_7(0, VAR_8);
  if (VAR_12 >= 0) {
   FUNC_10(VAR_12, VAR_8);
   FUNC_0(VAR_12);
   VAR_12 = -1;
  }
  FUNC_8(VAR_3);
  FUNC_8(VAR_5);
  FUNC_8(VAR_4);
 }
 VAR_9 = VAR_13;
}
