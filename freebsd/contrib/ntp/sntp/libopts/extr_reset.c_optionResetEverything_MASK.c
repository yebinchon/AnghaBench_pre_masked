
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int presetOptCt; int * pOptDesc; } ;
typedef TYPE_1__ tOptions ;
typedef int tOptDesc ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_1(tOptions * VAR_0)
{
    tOptDesc * VAR_1 = VAR_0->pOptDesc;
    int VAR_2 = VAR_0->presetOptCt;

    for (;;) {
        FUNC_0(VAR_0, VAR_1);

        if (--VAR_2 <= 0)
            break;
        VAR_1++;
    }
}
