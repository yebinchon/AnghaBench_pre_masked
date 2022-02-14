
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int **) ;
 int ** FUNC_5 (int **,int) ;
 int * FUNC_6 (int *,int **,int) ;
 int ** FUNC_7 (int **) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int **) ;
 int FUNC_13 (int **) ;

Char *
FUNC_14(Char *VAR_8, int VAR_9)
{
    Char *VAR_10[2], **VAR_11, **VAR_12;
    int VAR_13, VAR_14;

    VAR_14 = FUNC_1(VAR_6) != 0;
    VAR_10[0] = VAR_8;
    VAR_10[1] = 0;
    VAR_13 = FUNC_12(VAR_10);
    if (VAR_13 == VAR_4)
 return (FUNC_11(FUNC_0(VAR_8)));

    if (VAR_13 & VAR_2) {



 VAR_12 = FUNC_5(VAR_10, VAR_14);
 if (VAR_14 || (VAR_13 & VAR_3) == 0) {
     VAR_11 = VAR_12;
     goto result;
 }
 FUNC_3(VAR_12, VAR_7);
    }
    else if (VAR_14 || (VAR_13 & VAR_3) == 0)
 return (FUNC_11(FUNC_0(VAR_8)));
    else
 VAR_12 = VAR_10;

    VAR_11 = FUNC_7(VAR_12);
    if (VAR_13 & VAR_2) {
     if (VAR_11 != VAR_12)
     FUNC_4(VAR_12);
 else
     FUNC_2(VAR_12);
    }
    if (VAR_11 == ((void*)0)) {
 FUNC_8(FUNC_9(VAR_8));
 FUNC_10(VAR_0 | VAR_1);
    }
 result:
    if (VAR_11 && VAR_11[0] == ((void*)0)) {
 FUNC_13(VAR_11);
 return (FUNC_0(VAR_5));
    }
    if (VAR_11 && VAR_11[1])
 return (FUNC_6(VAR_8, VAR_11, VAR_9));
    else {
 VAR_8 = FUNC_11(*VAR_11);
 FUNC_13(VAR_11);
 return (VAR_8);
    }
}
