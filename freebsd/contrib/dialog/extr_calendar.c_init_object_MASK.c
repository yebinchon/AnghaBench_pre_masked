
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {int x; int y; int width; int height; int week_start; scalar_t__ window; int * parent; int box_draw; } ;
typedef int BOX_DRAW ;
typedef TYPE_1__ BOX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,int,int,int) ;
 int FUNC_1 (int,scalar_t__,int,scalar_t__,scalar_t__,int,scalar_t__,int) ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_7(BOX * VAR_3,
     WINDOW *VAR_4,
     int VAR_5, int VAR_6,
     int VAR_7, int VAR_8,
     BOX_DRAW VAR_9,
     int VAR_10,
     int VAR_11)
{
    VAR_3->parent = VAR_4;
    VAR_3->x = VAR_5;
    VAR_3->y = VAR_6;
    VAR_3->width = VAR_7;
    VAR_3->height = VAR_8;
    VAR_3->box_draw = VAR_9;
    VAR_3->week_start = VAR_10;

    VAR_3->window = FUNC_0(VAR_3->parent,
     VAR_3->height, VAR_3->width,
     VAR_3->y, VAR_3->x);
    if (VAR_3->window == 0)
 return -1;
    (void) FUNC_6(VAR_3->window, VAR_2);

    FUNC_3(FUNC_4(VAR_4), FUNC_5(VAR_4));
    if (VAR_11 == 'D') {
 FUNC_1(VAR_6 + 1, VAR_5 + VAR_1, VAR_8 - 1, VAR_7 - VAR_1,
         VAR_0 + VAR_10, 1, VAR_1, 3);
    } else {
 FUNC_2(VAR_6, VAR_5, VAR_8, VAR_7, VAR_11);
    }

    return 0;
}
