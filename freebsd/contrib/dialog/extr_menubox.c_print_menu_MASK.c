
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int menu_height; int menu_width; int box_x; scalar_t__ box_y; int item_no; int dialog; int menu; int * items; } ;
typedef TYPE_1__ ALL_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int,int,int ,int,int,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int *,int,int ,int) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(ALL_DATA * VAR_6, int VAR_7, int VAR_8, int VAR_9, bool VAR_10)
{
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
 FUNC_2(VAR_6,
     VAR_6->menu,
     &VAR_6->items[VAR_11 + VAR_8],
     VAR_11,
     (VAR_11 == VAR_7) ? VAR_1 : VAR_2,
     VAR_10);
    }


    if (VAR_10) {
 int VAR_12, VAR_13;
 VAR_12 = VAR_6->menu_height % VAR_0;
 FUNC_0(VAR_6->menu, VAR_3);
 for (; VAR_12; VAR_12--) {
     FUNC_4(VAR_6->menu, VAR_6->menu_height - VAR_12, 0);
     for (VAR_13 = 0; VAR_13 < VAR_6->menu_width;
   VAR_13++) {
  FUNC_3(VAR_6->menu, ' ');
     }
 }
    }

    (void) FUNC_5(VAR_6->menu);

    FUNC_1(VAR_6->dialog,
         VAR_8,
         VAR_8,
         VAR_8 + VAR_9,
         VAR_6->item_no,
         VAR_6->box_x,
         VAR_6->box_x + VAR_6->menu_width,
         VAR_6->box_y,
         VAR_6->box_y + VAR_6->menu_height + 1,
         VAR_4,
         VAR_5);
}
