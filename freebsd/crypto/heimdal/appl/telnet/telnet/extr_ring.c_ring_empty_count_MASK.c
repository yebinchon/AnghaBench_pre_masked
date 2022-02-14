
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int supply; int consume; } ;
typedef TYPE_1__ Ring ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

int
FUNC_2(Ring *VAR_0)
{
    if (FUNC_0(VAR_0)) {
     return VAR_0->size;
    } else {
 return FUNC_1(VAR_0, VAR_0->consume, VAR_0->supply);
    }
}
