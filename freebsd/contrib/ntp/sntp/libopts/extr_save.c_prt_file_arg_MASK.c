
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* originalOptArgArray; } ;
typedef TYPE_3__ tOptions ;
struct TYPE_10__ {char const* argString; } ;
struct TYPE_12__ {char const* optCookie; size_t optIndex; TYPE_2__ optArg; } ;
typedef TYPE_4__ tOptDesc ;
struct TYPE_9__ {char* argString; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_4__*,char const*) ;

__attribute__((used)) static void
FUNC_2(FILE * VAR_0, tOptDesc * VAR_1, tOptions * VAR_2)
{




    if (VAR_1->optCookie != ((void*)0))
        FUNC_1(VAR_0, VAR_1, VAR_1->optCookie);

    else if (FUNC_0(VAR_2)) {
        char const * VAR_3 =
            VAR_2->originalOptArgArray[VAR_1->optIndex].argString;

        if (VAR_1->optArg.argString == VAR_3)
            return;

        FUNC_1(VAR_0, VAR_1, VAR_1->optArg.argString);
    }
}
