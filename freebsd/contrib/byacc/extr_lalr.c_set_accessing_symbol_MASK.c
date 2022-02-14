
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t number; int accessing_symbol; struct TYPE_3__* next; } ;
typedef TYPE_1__ core ;


 int * FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(void)
{
    core *VAR_4;

    VAR_1 = FUNC_0(VAR_3, VAR_0);
    for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
 VAR_1[VAR_4->number] = VAR_4->accessing_symbol;
}
