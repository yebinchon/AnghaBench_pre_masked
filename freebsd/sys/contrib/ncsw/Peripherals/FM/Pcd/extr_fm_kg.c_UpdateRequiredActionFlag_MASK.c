
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int requiredActionFlag; scalar_t__ requiredAction; struct TYPE_4__* valid; } ;
typedef TYPE_1__ t_FmPcdKgScheme ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(t_FmPcdKgScheme *VAR_2, bool VAR_3)
{

    FUNC_0(VAR_2);
    FUNC_0(VAR_2->valid);

    if (VAR_3)
        VAR_2->requiredActionFlag = VAR_1;
    else
    {
        VAR_2->requiredAction = 0;
        VAR_2->requiredActionFlag = VAR_0;
    }
}
