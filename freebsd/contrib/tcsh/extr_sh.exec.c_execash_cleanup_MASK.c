
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execash_state {int OLDSTD; int saveSTD; int SHDIAG; int saveDIAG; int SHOUT; int saveOUT; int SHIN; int saveIN; int didfds; int didcch; int sigterm; int sigquit; int sigint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_10)
{
    struct execash_state *VAR_11;

    VAR_11 = VAR_10;
    FUNC_2(VAR_4, &VAR_11->sigint, ((void*)0));
    FUNC_2(VAR_5, &VAR_11->sigquit, ((void*)0));
    FUNC_2(VAR_6, &VAR_11->sigterm, ((void*)0));

    VAR_9 = 0;

    VAR_7 = VAR_11->didcch;

    VAR_8 = VAR_11->didfds;
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    FUNC_3(VAR_1);
    FUNC_3(VAR_0);
    FUNC_0(VAR_2 = FUNC_1(VAR_11->saveIN, VAR_11->SHIN), 1);
    FUNC_0(VAR_3 = FUNC_1(VAR_11->saveOUT, VAR_11->SHOUT), 1);
    FUNC_0(VAR_1 = FUNC_1(VAR_11->saveDIAG, VAR_11->SHDIAG), 1);
    FUNC_0(VAR_0 = FUNC_1(VAR_11->saveSTD, VAR_11->OLDSTD), 1);
}
