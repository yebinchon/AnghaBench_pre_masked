
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ Var ;
typedef int GNode ;


 char* FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (char const*,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

char *
FUNC_3(const char *VAR_4, GNode *VAR_5, char **VAR_6)
{
    Var *VAR_7;

    VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2 | VAR_3 | VAR_1);
    *VAR_6 = ((void*)0);
    if (VAR_7 != ((void*)0)) {
 char *VAR_8 = (FUNC_0(&VAR_7->val, ((void*)0)));
 if (FUNC_2(VAR_7, VAR_0))
     *VAR_6 = VAR_8;
 return VAR_8;
    } else {
 return ((void*)0);
    }
}
