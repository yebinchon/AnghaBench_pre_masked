
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int VAR_6 ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (char*) ;
 char* VAR_7 ;
 int FUNC_7 (int ,int ) ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char**) ;

extern int
FUNC_13(int VAR_10, char **VAR_11)
{
 FUNC_12(VAR_11);
 FUNC_11(VAR_4, VAR_2);

 FUNC_5(VAR_10, VAR_11);





 int VAR_12 = VAR_1;




 if (VAR_6 == VAR_10) {
  if (FUNC_4("(stdin)", VAR_9))
   VAR_12 = VAR_0;
 } else {
  FUNC_6("\n");

  do {
   if (FUNC_8(VAR_11[VAR_6], "-") == 0) {
    if (FUNC_4("(stdin)", VAR_9))
     VAR_12 = VAR_0;
   } else {
    FILE *VAR_13 = FUNC_2(VAR_11[VAR_6], "r");
    if (VAR_13 == ((void*)0)) {
     VAR_12 = VAR_0;
     FUNC_3(VAR_8, "%s: %s: %s\n",
       VAR_7,
       VAR_11[VAR_6],
       FUNC_9(VAR_5));
     continue;
    }

    if (FUNC_4(VAR_11[VAR_6], VAR_13))
     VAR_12 = VAR_0;

    FUNC_6("\n");
    FUNC_0(VAR_13);
   }
  } while (++VAR_6 < VAR_10);
 }

 FUNC_10(VAR_12, VAR_0, 1);
}
