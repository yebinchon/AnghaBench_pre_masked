
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int) ;
 char** VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void
FUNC_8(void)
{
    int VAR_14;

    if (!VAR_13)
 return;

    VAR_7 = FUNC_2(VAR_2, VAR_3);
    FUNC_1(VAR_7);

    FUNC_3(VAR_12, "\f\n");
    for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
 FUNC_7(VAR_14);
    FUNC_0(VAR_7);

    if (VAR_8)
 FUNC_6();
    if (VAR_1 || VAR_0)
 FUNC_5();

    FUNC_3(VAR_12, "\n\n%d terminals, %d nonterminals\n", VAR_6,
     VAR_9);
    FUNC_3(VAR_12, "%d grammar rules, %d states\n", VAR_3 - 2, VAR_4);
}
