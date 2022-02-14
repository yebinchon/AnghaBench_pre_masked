
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int columns; int width; int member_0; } ;
struct TYPE_5__ {scalar_t__ type; int * name; } ;
typedef scalar_t__ FUNC_TYPE ;
typedef TYPE_1__ FUNCTION ;
typedef TYPE_2__ DISPLAY_COLUMNS ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(FUNC_TYPE VAR_2, int VAR_3)
{
    FUNCTION *VAR_4;
    int VAR_5 = 0;
    DISPLAY_COLUMNS VAR_6 = {0};

    if (!VAR_3)
        FUNC_1(&VAR_6);

    for (VAR_4 = VAR_1; VAR_4->name != ((void*)0); VAR_4++) {
        if (VAR_4->type != VAR_2)
            continue;
        if (VAR_3) {
            FUNC_0(VAR_0, "%s\n", VAR_4->name);
        } else {
            if (VAR_5 % VAR_6.columns == 0 && VAR_5 > 0)
                FUNC_0(VAR_0, "\n");
            FUNC_0(VAR_0, "%-*s", VAR_6.width, VAR_4->name);
            VAR_5++;
        }
    }
    if (!VAR_3)
        FUNC_0(VAR_0, "\n\n");
}
