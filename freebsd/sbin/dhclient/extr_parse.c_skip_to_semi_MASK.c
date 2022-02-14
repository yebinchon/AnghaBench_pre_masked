
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,int *) ;
 int FUNC_1 (char**,int *) ;

void
FUNC_2(FILE *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 char *VAR_7;

 do {
  VAR_6 = FUNC_1(&VAR_7, VAR_4);
  if (VAR_6 == VAR_2) {
   if (VAR_5) {
    VAR_6 = FUNC_0(&VAR_7, VAR_4);
    if (!--VAR_5)
     return;
   } else
    return;
  } else if (VAR_6 == VAR_1) {
   VAR_5++;
  } else if (VAR_6 == VAR_3 && !VAR_5) {
   VAR_6 = FUNC_0(&VAR_7, VAR_4);
   return;
  } else if (VAR_6 == '\n') {






   VAR_6 = FUNC_0(&VAR_7, VAR_4);
   return;
  }
  VAR_6 = FUNC_0(&VAR_7, VAR_4);
 } while (VAR_6 != VAR_0);
}
