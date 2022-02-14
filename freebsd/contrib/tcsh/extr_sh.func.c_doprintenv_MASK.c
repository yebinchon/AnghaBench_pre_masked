
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct command*) ;
 int VAR_3 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int * FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*,int *) ;

void
FUNC_7(Char **VAR_9, struct command *VAR_10)
{
    Char *VAR_11;

    FUNC_0(VAR_10);
    VAR_9++;
    if (*VAR_9 == 0) {
 Char **VAR_12;

 VAR_7 = 1;
 FUNC_1(&VAR_7, VAR_8);
 for (VAR_12 = VAR_1; *VAR_12; VAR_12++) {
     if (VAR_6) {
  int VAR_13;

  FUNC_3(&VAR_13);
  FUNC_2(&VAR_13);
     }
     FUNC_6("%S\n", *VAR_12);
 }
 FUNC_2(&VAR_7);
    }
    else if ((VAR_11 = FUNC_5(*VAR_9)) != ((void*)0)) {
 int VAR_14;

 VAR_14 = VAR_4;
 VAR_4 = 1;
 FUNC_1(&VAR_14, VAR_5);
 FUNC_6("%S\n", VAR_11);
 FUNC_2(&VAR_14);
    }
    else
 FUNC_4(VAR_2, VAR_0, VAR_3);
}
