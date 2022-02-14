
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dialog; scalar_t__ use_height; scalar_t__ box_y; scalar_t__ use_width; scalar_t__ box_x; scalar_t__ check_x; scalar_t__ item_no; int list; int states; int * items; } ;
typedef TYPE_1__ ALL_DATA ;


 int FUNC_0 (int ,long,long,long,long,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int *,int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(ALL_DATA * VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    int VAR_7, VAR_8;

    FUNC_1(VAR_2->dialog, VAR_7, VAR_8);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
 FUNC_2(VAR_2,
     VAR_2->list,
     &VAR_2->items[VAR_6 + VAR_4],
     VAR_2->states,
     VAR_6, VAR_6 == VAR_3);
    }
    (void) FUNC_4(VAR_2->list);

    FUNC_0(VAR_2->dialog,
         (long) (VAR_4),
         (long) (VAR_4),
         (long) (VAR_4 + VAR_5),
         (long) (VAR_2->item_no),
         VAR_2->box_x + VAR_2->check_x,
         VAR_2->box_x + VAR_2->use_width,
         VAR_2->box_y,
         VAR_2->box_y + VAR_2->use_height + 1,
         VAR_0,
         VAR_1);

    (void) FUNC_3(VAR_2->dialog, VAR_7, VAR_8);
}
