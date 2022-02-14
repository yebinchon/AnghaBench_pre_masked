
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name; scalar_t__ help; scalar_t__ help_free; struct TYPE_4__* text; scalar_t__ text_free; scalar_t__ name_free; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(DIALOG_FORMITEM * VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_0[VAR_1].name != 0; ++VAR_1) {
 if (VAR_0[VAR_1].name_free)
     FUNC_1(VAR_0[VAR_1].name);
 if (VAR_0[VAR_1].text_free)
     FUNC_1(VAR_0[VAR_1].text);
 if (VAR_0[VAR_1].help_free && VAR_0[VAR_1].help != FUNC_0())
     FUNC_1(VAR_0[VAR_1].help);
    }
    FUNC_1(VAR_0);
}
