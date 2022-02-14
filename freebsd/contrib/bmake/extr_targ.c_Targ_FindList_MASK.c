
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LstNode ;
typedef int Lst ;
typedef int GNode ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int * FUNC_7 (char*,int) ;

Lst
FUNC_8(Lst VAR_3, int VAR_4)
{
    Lst VAR_5;
    LstNode VAR_6;
    GNode *VAR_7;
    char *VAR_8;

    VAR_5 = FUNC_4(VAR_1);

    if (FUNC_6(VAR_3) == VAR_0) {
 return (VAR_5);
    }
    while ((VAR_6 = FUNC_5(VAR_3)) != ((void*)0)) {
 VAR_8 = (char *)FUNC_3(VAR_6);
 VAR_7 = FUNC_7(VAR_8, VAR_4);
 if (VAR_7 != ((void*)0)) {





     (void)FUNC_1(VAR_5, VAR_7);
 } else if (VAR_4 == VAR_2) {
     FUNC_0("\"%s\" -- target unknown.", VAR_8);
 }
    }
    FUNC_2(VAR_3);
    return (VAR_5);
}
