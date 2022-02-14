
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_4__ {int * win; } ;
struct TYPE_5__ {int height; int width; int percent; int prompt; int title; TYPE_1__ obj; } ;
typedef TYPE_2__ MY_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int,int,int,int,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int,int) ;
 int VAR_6 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(MY_OBJ * VAR_7)
{
    WINDOW *VAR_8 = VAR_7->obj.win;
    int VAR_9, VAR_10;

    if (VAR_8 != 0) {
 (void) FUNC_7(VAR_8);
 FUNC_2(VAR_8, 0, 0, VAR_7->height, VAR_7->width, VAR_5,
        VAR_4, VAR_3);

 FUNC_4(VAR_8, VAR_7->title);

 FUNC_1(VAR_8, VAR_5);
 FUNC_3(VAR_8, VAR_1);
 FUNC_5(VAR_8, VAR_7->prompt, VAR_7->height, VAR_7->width);

 FUNC_2(VAR_8,
        VAR_7->height - 4, 2 + VAR_2,
        2 + VAR_2, VAR_7->width - 2 * (2 + VAR_2),
        VAR_5,
        VAR_4,
        VAR_3);






 (void) FUNC_9(VAR_8, VAR_7->height - 3, 4);
 FUNC_1(VAR_8, VAR_6);

 for (VAR_9 = 0; VAR_9 < (VAR_7->width - 2 * (3 + VAR_2)); VAR_9++)
     (void) FUNC_6(VAR_8, ' ');

 (void) FUNC_9(VAR_8, VAR_7->height - 3, (VAR_7->width / 2) - 2);
 (void) FUNC_10(VAR_8, "%3d%%", VAR_7->percent);






 VAR_10 = (VAR_7->percent * (VAR_7->width - 2 * (3 + VAR_2))) / 100;
 if ((VAR_6 & VAR_0) != 0) {
     FUNC_0(VAR_8, VAR_0);
 } else {
     FUNC_1(VAR_8, VAR_0);
 }
 (void) FUNC_9(VAR_8, VAR_7->height - 3, 4);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
     chtype VAR_11 = FUNC_8(VAR_8);
     if (VAR_6 & VAR_0) {
  VAR_11 &= ~VAR_0;
     }
     (void) FUNC_6(VAR_8, VAR_11);
 }

 (void) FUNC_11(VAR_8);
    }
}
