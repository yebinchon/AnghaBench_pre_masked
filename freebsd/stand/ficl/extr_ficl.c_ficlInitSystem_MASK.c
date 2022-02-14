
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nDictCells; } ;
typedef TYPE_1__ FICL_SYSTEM_INFO ;
typedef int FICL_SYSTEM ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;

FICL_SYSTEM *FUNC_2(int VAR_0)
{
    FICL_SYSTEM_INFO VAR_1;
    FUNC_0(&VAR_1);
    VAR_1.nDictCells = VAR_0;
    return FUNC_1(&VAR_1);
}
