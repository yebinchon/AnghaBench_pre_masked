
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {int x; int y; int width; int height; int period; int value; scalar_t__ window; int * parent; } ;
typedef TYPE_1__ BOX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int,int,int) ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_6(BOX * VAR_1,
     WINDOW *VAR_2,
     int VAR_3, int VAR_4,
     int VAR_5, int VAR_6,
     int VAR_7, int VAR_8,
     int VAR_9)
{
    (void) VAR_9;

    VAR_1->parent = VAR_2;
    VAR_1->x = VAR_3;
    VAR_1->y = VAR_4;
    VAR_1->width = VAR_5;
    VAR_1->height = VAR_6;
    VAR_1->period = VAR_7;
    VAR_1->value = VAR_8 % VAR_7;

    VAR_1->window = FUNC_0(VAR_1->parent,
     VAR_1->height, VAR_1->width,
     VAR_1->y, VAR_1->x);
    if (VAR_1->window == 0)
 return -1;
    (void) FUNC_5(VAR_1->window, VAR_0);

    FUNC_2(FUNC_3(VAR_2), FUNC_4(VAR_2));
    FUNC_1(VAR_4, VAR_3, VAR_6, VAR_5, VAR_9);

    return 0;
}
