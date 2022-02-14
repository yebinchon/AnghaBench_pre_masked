
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (size_t) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (char*,int) ;

void
FUNC_9(int VAR_12)
{
    int VAR_13;

    if (VAR_12 == VAR_2)
 return;

    if (VAR_12 > VAR_11) {




 return;
    }

    VAR_13 = VAR_12 - VAR_2;

    if (VAR_13 > 0) {
 while (VAR_13 > 0) {
     if ((VAR_7 & VAR_4) && VAR_3[VAR_2][0] != '\0') {
  size_t VAR_14;

  for (VAR_14 = VAR_10 - 1; VAR_14 > 0 && VAR_3[VAR_2][VAR_14] == VAR_0;
       VAR_14--)
      ;

  FUNC_1(VAR_14);
  FUNC_5(&VAR_3[VAR_2][VAR_1], VAR_10 - VAR_1);
  VAR_13--;
     }
     else {
  if ((VAR_13 > 1) && FUNC_0(VAR_6)) {
      (void) FUNC_7(FUNC_6(FUNC_2(VAR_6), VAR_13, VAR_13), VAR_13, VAR_5);
      VAR_13 = 0;
  }
  else {
      for ( ; VAR_13 > 0; VAR_13--)
   (void) FUNC_4('\n');
      VAR_1 = 0;
  }
     }
 }
    }
    else {
 if (FUNC_0(VAR_8) && (-VAR_13 > 1 || !FUNC_0(VAR_9)))
     (void) FUNC_7(FUNC_6(FUNC_2(VAR_8), -VAR_13, -VAR_13), -VAR_13, VAR_5);
 else {
     int VAR_15;
     if (FUNC_0(VAR_9))
  for (VAR_15 = 0; VAR_15 < -VAR_13; VAR_15++)
      (void) FUNC_7(FUNC_2(VAR_9), 1, VAR_5);
 }
    }
    VAR_2 = VAR_12;
}
