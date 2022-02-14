
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* getc_callbacks; } ;
struct TYPE_4__ {int win; struct TYPE_4__* next; } ;
typedef TYPE_1__ DIALOG_CALLBACK ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(DIALOG_CALLBACK * VAR_2)
{
    VAR_2->next = VAR_1.getc_callbacks;
    VAR_1.getc_callbacks = VAR_2;
    FUNC_0(VAR_2->win, VAR_0);
}
