
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int size; struct TYPE_6__* dict; } ;
typedef int FICL_WORD ;
typedef int FICL_HASH ;
typedef TYPE_1__ FICL_DICT ;
typedef int CELL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

FICL_DICT *FUNC_4(unsigned VAR_0, unsigned VAR_1)
{
    FICL_DICT *VAR_2;
    size_t VAR_3;

    VAR_3 = sizeof (FICL_HASH) + VAR_0 * sizeof (CELL)
                                 + (VAR_1 - 1) * sizeof (FICL_WORD *);

    VAR_2 = FUNC_2(sizeof (FICL_DICT));
    FUNC_0(VAR_2);
    FUNC_3(VAR_2, 0, sizeof (FICL_DICT));
    VAR_2->dict = FUNC_2(VAR_3);
    FUNC_0(VAR_2->dict);

    VAR_2->size = VAR_0;
    FUNC_1(VAR_2, VAR_1);
    return VAR_2;
}
