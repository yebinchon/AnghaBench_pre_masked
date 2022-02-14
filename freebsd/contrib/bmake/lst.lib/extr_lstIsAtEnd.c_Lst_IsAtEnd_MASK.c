
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ atEnd; int isOpen; } ;
typedef TYPE_1__* Lst ;
typedef TYPE_1__* List ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

Boolean
FUNC_1(Lst VAR_2)
{
    List VAR_3 = VAR_2;

    return (!FUNC_0 (VAR_2) || !VAR_3->isOpen ||
     (VAR_3->atEnd == VAR_0) || (VAR_3->atEnd == VAR_1));
}
