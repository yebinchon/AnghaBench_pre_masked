
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct command*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int (*) (int *)) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_9 ;
 int ** FUNC_4 (int **) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int,int **) ;
 int FUNC_8 (int,...) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

void
FUNC_12(Char **VAR_10, struct command *VAR_11)
{
    Char *VAR_12;
    int VAR_13 = 0;
    char *VAR_14;

    FUNC_0(VAR_11);
    VAR_10++;
    if (*VAR_10 && FUNC_3(*VAR_10, VAR_5)) {
 if (*++VAR_10 == ((void*)0))
     FUNC_8(VAR_2 | VAR_0);
 VAR_13++;
    }
    else if (*VAR_10 && FUNC_3(*VAR_10, VAR_6)) {
     if (*++VAR_10 == ((void*)0))
     FUNC_8(VAR_2 | VAR_1);
 VAR_13 = 2;
    }

    VAR_12 = FUNC_5(*VAR_10++, VAR_4);
    VAR_14 = FUNC_10(FUNC_6(VAR_12));
    FUNC_1(VAR_14, FUNC_11);
    FUNC_11(VAR_12);
    VAR_10 = FUNC_4(VAR_10);
    FUNC_1(VAR_10, VAR_8);
    if ((!FUNC_7(VAR_14, 0, VAR_13, VAR_10)) && (!VAR_13) && (!VAR_7))
 FUNC_8(VAR_3, VAR_14, FUNC_9(VAR_9));
    FUNC_2(VAR_14);
}
