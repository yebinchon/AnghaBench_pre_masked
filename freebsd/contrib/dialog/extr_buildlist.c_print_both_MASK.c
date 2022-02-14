
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_7__ {scalar_t__ check_x; TYPE_1__* list; } ;
struct TYPE_6__ {int top_index; scalar_t__ box_y; scalar_t__ box_x; int * win; } ;
typedef TYPE_1__ MY_DATA ;
typedef TYPE_2__ ALL_DATA ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,long,long,long,long,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (TYPE_2__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_2__*,int,int) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int) ;

__attribute__((used)) static void
FUNC_11(ALL_DATA * VAR_3,
    int VAR_4)
{
    int VAR_5;
    int VAR_6, VAR_7;
    WINDOW *VAR_8 = FUNC_9(VAR_3->list[0].win);

    FUNC_1(("! print_both %d\n", VAR_4));
    FUNC_6(VAR_8, VAR_6, VAR_7);
    for (VAR_5 = 0; VAR_5 < 2; ++VAR_5) {
 MY_DATA *VAR_9 = VAR_3->list + VAR_5;
 WINDOW *VAR_10 = VAR_9->win;
 int VAR_11 = FUNC_7(VAR_3, VAR_9->top_index, VAR_5);
 int VAR_12 = FUNC_7(VAR_3, -1, VAR_5);
 int VAR_13 = VAR_11 + FUNC_5(VAR_10);

 FUNC_8(VAR_3, VAR_4, VAR_5);

 FUNC_3(VAR_5 * VAR_0);
 FUNC_2(VAR_8,
      (long) (VAR_9->top_index),
      (long) (VAR_11),
      (long) FUNC_0(VAR_13, VAR_12),
      (long) VAR_12,
      VAR_9->box_x + VAR_3->check_x,
      VAR_9->box_x + FUNC_4(VAR_10),
      VAR_9->box_y,
      VAR_9->box_y + FUNC_5(VAR_10) + 1,
      VAR_1,
      VAR_2);
    }
    (void) FUNC_10(VAR_8, VAR_6, VAR_7);
    FUNC_3(0);
}
