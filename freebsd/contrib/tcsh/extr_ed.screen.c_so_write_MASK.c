
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_17 ;
 int* VAR_18 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;

void
FUNC_9(Char *VAR_19, int VAR_20)
{
    int VAR_21, VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;

    if (VAR_20 <= 0)
 return;

    if (VAR_20 > VAR_16) {




 return;
    }

    if (FUNC_2(VAR_14)) {

 Char *VAR_25;
 for (VAR_25 = VAR_13; *VAR_25; VAR_25++);
 VAR_22 = VAR_25 - VAR_13;


 if (VAR_5) {
     VAR_23 = (VAR_1 - VAR_6) + VAR_22;
     VAR_24 = VAR_23 + VAR_5;
 } else if (VAR_12) {
     VAR_23 = (FUNC_5(VAR_1, VAR_11) - VAR_6) + VAR_22;
     VAR_24 = (FUNC_4(VAR_1, VAR_11) - VAR_6) + VAR_22;
 }
    }

    do {
 if (FUNC_2(VAR_14)) {
     VAR_21 = VAR_3 * VAR_16 + VAR_2;
     if (!VAR_17 &&
  VAR_21 >= VAR_23 && VAR_21 < VAR_24)
  FUNC_0();
     else if (VAR_17 && VAR_21 >= VAR_24)
  FUNC_1();



     if (VAR_17 && VAR_21 == (VAR_1 - VAR_6) + VAR_22)
  FUNC_1();
 }

 if (*VAR_19 != VAR_0) {
     if (*VAR_19 & VAR_7) {
  Char *VAR_26;



  for (VAR_26 = VAR_18 + (*VAR_19 & ~VAR_7) * VAR_8; *VAR_26; VAR_26++)
      (void) FUNC_7(*VAR_26);
     }
     else
  (void) FUNC_7(*VAR_19);
 }
 VAR_19++;
 VAR_2++;
    } while (--VAR_20);

    if (FUNC_2(VAR_14) && VAR_17)
 FUNC_1();

    if (VAR_2 >= VAR_16) {
 if (VAR_15 & VAR_9) {
     VAR_2 = 0;
     VAR_3++;
     if (VAR_15 & VAR_10) {

  Char VAR_27;
  if ((VAR_27 = VAR_4[VAR_3][VAR_2]) != '\0') {
      FUNC_9(&VAR_27, 1);
      while(VAR_4[VAR_3][VAR_2] == VAR_0)
   VAR_2++;
  }
  else {
      (void) FUNC_6(' ');
      VAR_2 = 1;
  }
     }
 }
 else
     VAR_2 = VAR_16 - 1;
    }
}
