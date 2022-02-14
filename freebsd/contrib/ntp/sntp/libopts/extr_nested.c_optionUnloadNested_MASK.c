
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nestVal; } ;
struct TYPE_6__ {scalar_t__ valType; TYPE_1__ v; } ;
typedef TYPE_2__ tOptionValue ;


 int FUNC_0 (TYPE_2__ const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

void
FUNC_2(tOptionValue const * VAR_3)
{
    if (VAR_3 == ((void*)0)) return;
    if (VAR_3->valType != VAR_1) {
        VAR_2 = VAR_0;
        return;
    }

    FUNC_1(VAR_3->v.nestVal);

    FUNC_0(VAR_3);
}
