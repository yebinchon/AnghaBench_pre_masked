
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
typedef TYPE_1__ Path ;
typedef int * LstNode ;
typedef int Lst ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,char*,int ) ;

char *
FUNC_7(const char *VAR_2, Lst VAR_3)
{
    char *VAR_4;
    char *VAR_5, *VAR_6;
    LstNode VAR_7;
    Path *VAR_8;

    VAR_4 = FUNC_4("");

    if (FUNC_3(VAR_3) == VAR_1) {
 while ((VAR_7 = FUNC_2(VAR_3)) != ((void*)0)) {
     VAR_8 = (Path *)FUNC_1(VAR_7);
     VAR_6 = FUNC_6(VAR_2, VAR_8->name, 0);
     VAR_4 = FUNC_6(VAR_5 = VAR_4, VAR_6, VAR_0);
     FUNC_5(VAR_5);
     FUNC_5(VAR_6);
 }
 FUNC_0(VAR_3);
    }

    return (VAR_4);
}
