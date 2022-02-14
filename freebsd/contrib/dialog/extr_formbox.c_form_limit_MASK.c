
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; int name_y; int text_y; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;



__attribute__((used)) static int
FUNC_0(DIALOG_FORMITEM VAR_0[])
{
    int VAR_1;
    int VAR_2 = 0;
    for (VAR_1 = 0; VAR_0[VAR_1].name != 0; ++VAR_1) {
 if (VAR_2 < VAR_0[VAR_1].name_y)
     VAR_2 = VAR_0[VAR_1].name_y;
 if (VAR_2 < VAR_0[VAR_1].text_y)
     VAR_2 = VAR_0[VAR_1].text_y;
    }
    return VAR_2;
}
