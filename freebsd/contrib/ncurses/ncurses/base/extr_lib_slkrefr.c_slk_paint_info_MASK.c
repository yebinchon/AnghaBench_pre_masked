
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_7__ {int slk_format; TYPE_2__* _slk; } ;
struct TYPE_6__ {int maxlab; TYPE_1__* ent; } ;
struct TYPE_5__ {int ent_x; } ;
typedef TYPE_3__ SCREEN ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,char*,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(WINDOW *VAR_0)
{
    SCREEN *VAR_1 = FUNC_0(VAR_0);

    if (VAR_0 && VAR_1 && (VAR_1->slk_format == 4)) {
 int VAR_2;

 (void) FUNC_2(VAR_0, 0, 0, 0, FUNC_1(VAR_0));
 FUNC_4(VAR_0, 0, 0);

 for (VAR_2 = 0; VAR_2 < VAR_1->_slk->maxlab; VAR_2++) {
     FUNC_3(VAR_0, 0, VAR_1->_slk->ent[VAR_2].ent_x, "F%d", VAR_2 + 1);
 }
    }
}
