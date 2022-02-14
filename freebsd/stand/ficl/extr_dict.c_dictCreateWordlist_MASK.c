
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ here; } ;
struct TYPE_8__ {int size; } ;
typedef int FICL_WORD ;
typedef TYPE_1__ FICL_HASH ;
typedef TYPE_2__ FICL_DICT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

FICL_HASH *FUNC_3(FICL_DICT *VAR_0, int VAR_1)
{
    FICL_HASH *VAR_2;

    FUNC_0(VAR_0);
    VAR_2 = (FICL_HASH *)VAR_0->here;
    FUNC_1(VAR_0, sizeof (FICL_HASH)
        + (VAR_1-1) * sizeof (FICL_WORD *));

    VAR_2->size = VAR_1;
    FUNC_2(VAR_2);
    return VAR_2;
}
