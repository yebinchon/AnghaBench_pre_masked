
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ text_flen; } ;
typedef TYPE_1__ DIALOG_FORMITEM ;



__attribute__((used)) static int
FUNC_0(DIALOG_FORMITEM VAR_0[], int VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    while (VAR_1 < VAR_2) {
 if (VAR_0[VAR_1].text_flen > 0) {
     ++VAR_3;
 }
 ++VAR_1;
    }

    return (VAR_3 == 1);
}
