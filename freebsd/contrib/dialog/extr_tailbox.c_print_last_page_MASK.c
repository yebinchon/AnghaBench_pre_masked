
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bg_task; int win; } ;
struct TYPE_7__ {int text; TYPE_1__ obj; } ;
typedef TYPE_2__ MY_OBJ ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_4(MY_OBJ * VAR_1)
{
    int VAR_2 = FUNC_1(VAR_1->obj.win) - (2 * VAR_0 + (VAR_1->obj.bg_task ? 1 : 3));
    int VAR_3 = FUNC_0(VAR_1->text);

    FUNC_2(VAR_1, VAR_2);
    FUNC_3(VAR_1, VAR_2, VAR_3);
}
