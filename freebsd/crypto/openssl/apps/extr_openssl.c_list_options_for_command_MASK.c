
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* help; int * name; } ;
struct TYPE_4__ {char* name; int valtype; } ;
typedef TYPE_1__ OPTIONS ;
typedef TYPE_2__ FUNCTION ;


 int FUNC_0 (int ,char*,char const*,...) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_5)
{
    const FUNCTION *VAR_6;
    const OPTIONS *VAR_7;

    for (VAR_6 = VAR_4; VAR_6->name != ((void*)0); VAR_6++)
        if (FUNC_1(VAR_6->name, VAR_5) == 0)
            break;
    if (VAR_6->name == ((void*)0)) {
        FUNC_0(VAR_2, "Invalid command '%s'; type \"help\" for a list.\n",
                VAR_5);
        return;
    }

    if ((VAR_7 = VAR_6->help) == ((void*)0))
        return;

    for ( ; VAR_7->name != ((void*)0); VAR_7++) {
        if (VAR_7->name == VAR_0
                || VAR_7->name == VAR_1
                || VAR_7->name[0] == '\0')
            continue;
        FUNC_0(VAR_3, "%s %c\n", VAR_7->name, VAR_7->valtype);
    }
}
