
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* getc_callbacks; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ DIALOG_CALLBACK ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static bool
FUNC_0(DIALOG_CALLBACK * VAR_3)
{
    bool VAR_4 = VAR_0;
    DIALOG_CALLBACK *VAR_5;
    for (VAR_5 = VAR_2.getc_callbacks; VAR_5 != 0; VAR_5 = VAR_5->next) {
 if (VAR_5 == VAR_3) {
     VAR_4 = VAR_1;
     break;
 }
    }
    return VAR_4;
}
