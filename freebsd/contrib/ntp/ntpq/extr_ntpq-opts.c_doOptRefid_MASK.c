
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tOptions ;
struct TYPE_5__ {int argEnum; } ;
struct TYPE_6__ {TYPE_1__ optArg; } ;
typedef TYPE_2__ tOptDesc ;


 int * VAR_0 ;

 int FUNC_0 (int *,TYPE_2__*,char const* const*,int) ;

__attribute__((used)) static void
FUNC_1(tOptions* VAR_1, tOptDesc* VAR_2)
{


    static char const * const VAR_3[2] = {
        128 +1972, 128 +1041 };

    if (VAR_1 <= VAR_0) {
        (void) FUNC_0(VAR_1, VAR_2, VAR_3, 2);
        return;
    }

    VAR_2->optArg.argEnum =
        FUNC_0(VAR_1, VAR_2, VAR_3, 2);
}
