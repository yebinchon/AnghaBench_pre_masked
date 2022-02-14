
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int u; } ;
struct TYPE_8__ {scalar_t__ u; } ;
struct TYPE_7__ {int size; int dict; int here; } ;
typedef TYPE_1__ FICL_DICT ;
typedef int CELL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int) ;

void FUNC_4(FICL_DICT* VAR_2)
{
    if( FUNC_2(VAR_2) < VAR_1.u ) {
        VAR_2->dict = FUNC_3( VAR_0.u * sizeof (CELL) );
        FUNC_0(VAR_2->dict);
        VAR_2->here = VAR_2->dict;
        VAR_2->size = VAR_0.u;
        FUNC_1(VAR_2);
    }
}
