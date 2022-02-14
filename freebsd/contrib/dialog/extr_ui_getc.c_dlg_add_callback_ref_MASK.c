
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int freeback; struct TYPE_4__** caller; } ;
typedef int DIALOG_FREEBACK ;
typedef TYPE_1__ DIALOG_CALLBACK ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(DIALOG_CALLBACK ** VAR_0, DIALOG_FREEBACK VAR_1)
{
    (*VAR_0)->caller = VAR_0;
    (*VAR_0)->freeback = VAR_1;
    FUNC_0(*VAR_0);
}
