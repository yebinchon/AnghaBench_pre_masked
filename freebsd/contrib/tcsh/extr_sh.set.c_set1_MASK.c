
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int **) ;
 int ** FUNC_2 (int **,int) ;
 int FUNC_3 (int const*,int **,struct varent*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;

void
FUNC_7(const Char *VAR_5, Char **VAR_6, struct varent *VAR_7, int VAR_8)
{
    Char **VAR_9 = VAR_6;

    if ((VAR_8 & VAR_4) == 0) {
 int VAR_10;

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10) {
     VAR_6 = FUNC_2(VAR_9, VAR_10);
     if (VAR_6 == 0) {
  FUNC_1(VAR_9);
  FUNC_4(VAR_0 | VAR_1);
     }
     FUNC_1(VAR_9);
 }
    }



    if ( VAR_8 & (VAR_2 | VAR_3) ) {






 if (VAR_6 && VAR_6[0] && VAR_6[1]) {
     int VAR_11, VAR_12;
     int VAR_13;

     for (VAR_13 = 0; VAR_6[VAR_13]; VAR_13++)
         continue;
     if (VAR_8 & VAR_2) {

  for (VAR_11 = 1; VAR_11 < VAR_13; VAR_11++)
      for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)

   if (VAR_6[VAR_11] && VAR_6[VAR_12] && FUNC_0(VAR_6[VAR_12], VAR_6[VAR_11]) == 0) {
       FUNC_6(VAR_6[VAR_11]);
       VAR_6[VAR_11] = ((void*)0);
       break;
   }
     } else if (VAR_8 & VAR_3) {

  for (VAR_11 = 0; VAR_11 < VAR_13 - 1; VAR_11++)
      for (VAR_12 = VAR_11 + 1; VAR_12 < VAR_13; VAR_12++)

   if (VAR_6[VAR_11] && VAR_6[VAR_12] && FUNC_0(VAR_6[VAR_12], VAR_6[VAR_11]) == 0) {

       FUNC_6(VAR_6[VAR_11]);
       VAR_6[VAR_11] = ((void*)0);
   }
     }

     for (VAR_12 = VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
        if (VAR_6[VAR_11])
    VAR_6[VAR_12++] = VAR_6[VAR_11];


     for (; VAR_12 < VAR_13; VAR_12++)
   VAR_6[VAR_12] = ((void*)0);
 }

 VAR_8 &= ~(VAR_2|VAR_3);
    }
    FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
}
