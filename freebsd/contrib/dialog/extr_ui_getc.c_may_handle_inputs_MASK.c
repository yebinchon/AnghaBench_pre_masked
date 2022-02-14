
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* getc_callbacks; } ;
struct TYPE_3__ {scalar_t__ input; struct TYPE_3__* next; } ;
typedef TYPE_1__ DIALOG_CALLBACK ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static bool
FUNC_0(void)
{
    bool VAR_3 = VAR_0;

    DIALOG_CALLBACK *VAR_4;

    for (VAR_4 = VAR_2.getc_callbacks; VAR_4 != 0; VAR_4 = VAR_4->next) {
 if (VAR_4->input != 0) {
     VAR_3 = VAR_1;
     break;
 }
    }

    return VAR_3;
}
