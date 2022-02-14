
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ varSpace; } ;
typedef TYPE_1__ Var_Parse_State ;
struct TYPE_5__ {int rhs; int lhs; } ;
typedef TYPE_2__ VarPattern ;
typedef int GNode ;
typedef int Buffer ;
typedef scalar_t__ Boolean ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ,char*) ;
 char* FUNC_2 (char*,int ,int*) ;
 int FUNC_3 (int *,char*,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static Boolean
FUNC_7(GNode *VAR_2, Var_Parse_State *VAR_3,
      char *VAR_4, Boolean VAR_5, Buffer *VAR_6,
      void *VAR_7)
{
    int VAR_8;
    char *VAR_9;
    VarPattern *VAR_10 = (VarPattern *)VAR_7;
    char *VAR_11;

    if (VAR_5 && VAR_3->varSpace)
 FUNC_0(VAR_6, VAR_3->varSpace);

    VAR_5 = VAR_0;

    if ((VAR_9 = FUNC_2(VAR_4, VAR_10->lhs, &VAR_8)) != ((void*)0)) {
        VAR_11 = FUNC_4(((void*)0), VAR_10->rhs, VAR_2, VAR_1);
 FUNC_3(VAR_6, VAR_11, VAR_9, VAR_8);
 FUNC_5(VAR_11);
    } else {
 FUNC_1(VAR_6, FUNC_6(VAR_4), VAR_4);
    }

    return(VAR_5);
}
