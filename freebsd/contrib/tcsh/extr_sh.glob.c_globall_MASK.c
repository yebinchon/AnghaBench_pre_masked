
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **) ;
 int ** FUNC_4 (int **,int) ;
 int ** FUNC_5 (int **) ;
 int ** FUNC_6 (int **) ;
 int FUNC_7 (int **) ;

Char **
FUNC_8(Char **VAR_4, int VAR_5)
{
    Char **VAR_6, **VAR_7;
    int VAR_8;

    if (!VAR_4 || !VAR_4[0])
 return FUNC_6(VAR_4);

    VAR_8 = FUNC_0(VAR_2) != 0;

    if (VAR_5 & VAR_0)



 VAR_6 = VAR_7 = FUNC_4(VAR_4, VAR_8);
    else
 VAR_6 = VAR_7 = FUNC_6(VAR_4);

    if (!VAR_8 && (VAR_5 & VAR_1)) {
 FUNC_2(VAR_7, VAR_3);
 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6 == VAR_7)
     FUNC_1(VAR_7);
 FUNC_3(VAR_7);
    }
    else
 FUNC_7(VAR_6);

    return VAR_6;
}
