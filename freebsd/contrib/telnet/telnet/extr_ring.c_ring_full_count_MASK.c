
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mark; scalar_t__ consume; int size; scalar_t__ supply; } ;
typedef TYPE_1__ Ring ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;

int
FUNC_2(Ring *VAR_0)
{
    if ((VAR_0->mark == 0) || (VAR_0->mark == VAR_0->consume)) {
 if (FUNC_0(VAR_0)) {
     return VAR_0->size;
 } else {
     return FUNC_1(VAR_0, VAR_0->supply, VAR_0->consume);
 }
    } else {
 return FUNC_1(VAR_0, VAR_0->mark, VAR_0->consume);
    }
}
