
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* getc_callbacks; TYPE_1__* getc_redirect; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ DIALOG_CALLBACK ;


 TYPE_4__ VAR_0 ;

__attribute__((used)) static DIALOG_CALLBACK *
FUNC_0(DIALOG_CALLBACK * VAR_1)
{
    DIALOG_CALLBACK *VAR_2;

    if ((VAR_1 = VAR_0.getc_redirect) != 0) {
 if (VAR_1 == VAR_0.getc_callbacks) {
     for (VAR_1 = VAR_0.getc_callbacks; VAR_1->next != 0; VAR_1 = VAR_1->next) ;
 } else {
     for (VAR_2 = VAR_0.getc_callbacks; VAR_2->next != VAR_1; VAR_2 = VAR_2->next) ;
     VAR_1 = VAR_2;
 }
    } else {
 VAR_1 = VAR_0.getc_callbacks;
    }
    return VAR_1;
}
