
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ supplytime; int supply; } ;
typedef TYPE_1__ Ring ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1(Ring *VAR_1, int VAR_2)
{
    VAR_1->supply = FUNC_0(VAR_1, VAR_1->supply, VAR_2);
    VAR_1->supplytime = ++VAR_0;
}
