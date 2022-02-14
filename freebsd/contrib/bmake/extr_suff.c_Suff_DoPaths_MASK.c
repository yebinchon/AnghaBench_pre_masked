
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int searchPath; } ;
typedef TYPE_1__ Suff ;
typedef int * LstNode ;
typedef int Lst ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (char*,char*,int ,int ) ;
 int VAR_7 ;
 int FUNC_11 (char*) ;
 int VAR_8 ;

void
FUNC_12(void)
{
    Suff *VAR_9;
    LstNode VAR_10;
    char *VAR_11;
    Lst VAR_12;
    Lst VAR_13;

    if (FUNC_9(VAR_8) == VAR_2) {
 return;
    }

    VAR_12 = FUNC_6(VAR_3);
    VAR_13 = FUNC_6(VAR_3);

    while ((VAR_10 = FUNC_8(VAR_8)) != ((void*)0)) {
 VAR_9 = (Suff *)FUNC_3(VAR_10);
 if (!FUNC_7 (VAR_9->searchPath)) {
     FUNC_0(VAR_9->searchPath, VAR_7);
 } else {
     FUNC_4(VAR_9->searchPath, VAR_1);
     VAR_9->searchPath = FUNC_5(VAR_7, VAR_0);
 }
    }

    FUNC_10(".INCLUDES", VAR_11 = FUNC_1("-I", VAR_12), VAR_6, 0);
    FUNC_11(VAR_11);
    FUNC_10(".LIBS", VAR_11 = FUNC_1("-L", VAR_13), VAR_6, 0);
    FUNC_11(VAR_11);

    FUNC_4(VAR_12, VAR_1);
    FUNC_4(VAR_13, VAR_1);

    FUNC_2(VAR_8);
}
