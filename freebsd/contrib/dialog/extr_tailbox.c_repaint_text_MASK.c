
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int win; int * input; } ;
struct TYPE_6__ {TYPE_1__ obj; int last_pos; int hscroll; int old_hscroll; } ;
typedef TYPE_2__ MY_OBJ ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(MY_OBJ * VAR_0)
{
    FILE *VAR_1 = VAR_0->obj.input;
    int VAR_2, VAR_3;

    FUNC_1(VAR_0->obj.win, VAR_2, VAR_3);
    VAR_0->old_hscroll = VAR_0->hscroll;

    FUNC_2(VAR_0);
    VAR_0->last_pos = FUNC_0(VAR_1);

    (void) FUNC_3(VAR_0->obj.win, VAR_2, VAR_3);
    FUNC_4(VAR_0->obj.win);
}
