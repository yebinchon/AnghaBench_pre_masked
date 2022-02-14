
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int ,int,int ) ;

void
FUNC_3(Char VAR_13)
{
    VAR_13 &= VAR_0;
    if (VAR_13 != VAR_11) {
 if (VAR_12 && FUNC_0(VAR_5)) {
     if (((VAR_11 & VAR_1) && !(VAR_13 & VAR_1)) ||
  ((VAR_11 & VAR_10) && !(VAR_13 & VAR_10)) ||
  ((VAR_11 & VAR_3) && !(VAR_13 & VAR_3))) {
  (void) FUNC_2(FUNC_1(VAR_5), 1, VAR_2);
  VAR_11 = 0;
     }
 }
 if ((VAR_13 & VAR_1) != (VAR_11 & VAR_1)) {
     if (VAR_13 & VAR_1) {
  if (FUNC_0(VAR_4) && FUNC_0(VAR_5)) {
      (void) FUNC_2(FUNC_1(VAR_4), 1, VAR_2);
      VAR_11 |= VAR_1;
  }
     }
     else {
  if (FUNC_0(VAR_4) && FUNC_0(VAR_5)) {
      (void) FUNC_2(FUNC_1(VAR_5), 1, VAR_2);
      if ((VAR_11 & VAR_3) && FUNC_0(VAR_6)) {
   (void) FUNC_2(FUNC_1(VAR_6), 1, VAR_2);
   VAR_11 &= ~VAR_3;
      }
      if ((VAR_11 & VAR_10) && FUNC_0(VAR_8)) {
   (void) FUNC_2(FUNC_1(VAR_8), 1, VAR_2);
   VAR_11 &= ~VAR_10;
      }
      VAR_11 &= ~VAR_1;
  }
     }
 }
 if ((VAR_13 & VAR_3) != (VAR_11 & VAR_3)) {
     if (VAR_13 & VAR_3) {
  if (FUNC_0(VAR_7) && FUNC_0(VAR_6)) {
      (void) FUNC_2(FUNC_1(VAR_7), 1, VAR_2);
      VAR_11 |= VAR_3;
  }
     }
     else {
  if (FUNC_0(VAR_6)) {
      (void) FUNC_2(FUNC_1(VAR_6), 1, VAR_2);
      VAR_11 &= ~VAR_3;
  }
     }
 }
 if ((VAR_13 & VAR_10) != (VAR_11 & VAR_10)) {
     if (VAR_13 & VAR_10) {
  if (FUNC_0(VAR_9) && FUNC_0(VAR_8)) {
      (void) FUNC_2(FUNC_1(VAR_9), 1, VAR_2);
      VAR_11 |= VAR_10;
  }
     }
     else {
  if (FUNC_0(VAR_8)) {
      (void) FUNC_2(FUNC_1(VAR_8), 1, VAR_2);
      VAR_11 &= ~VAR_10;
  }
     }
 }
    }
}
