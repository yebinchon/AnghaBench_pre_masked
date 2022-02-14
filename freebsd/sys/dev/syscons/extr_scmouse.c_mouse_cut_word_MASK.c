
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int mouse_pos; int xsize; int vtb; } ;
typedef TYPE_1__ scr_stat ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(scr_stat *VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;







    if (VAR_2->status & VAR_0) {
 VAR_5 = FUNC_2(VAR_2->mouse_pos, VAR_2->xsize);
 VAR_6 = VAR_5 + VAR_2->xsize;
 VAR_7 = FUNC_3(&VAR_2->vtb, VAR_2->mouse_pos);
 if (FUNC_0(VAR_7)) {

     for (VAR_8 = VAR_2->mouse_pos; VAR_8 >= VAR_5; --VAR_8) {
  VAR_7 = FUNC_3(&VAR_2->vtb, VAR_8);
         if (!FUNC_0(VAR_7))
      break;
     }
     VAR_3 = ++VAR_8;
     for (VAR_8 = VAR_2->mouse_pos; VAR_8 < VAR_6; ++VAR_8) {
  VAR_7 = FUNC_3(&VAR_2->vtb, VAR_8);
         if (!FUNC_0(VAR_7))
      break;
     }
     VAR_4 = VAR_8 - 1;
 } else {

     for (VAR_8 = VAR_2->mouse_pos; VAR_8 >= VAR_5; --VAR_8) {
  VAR_7 = FUNC_3(&VAR_2->vtb, VAR_8);
         if (FUNC_0(VAR_7))
      break;
     }
     VAR_3 = ++VAR_8;
     for (VAR_8 = VAR_2->mouse_pos; VAR_8 < VAR_6; ++VAR_8) {
  VAR_7 = FUNC_3(&VAR_2->vtb, VAR_8);
         if (FUNC_0(VAR_7))
      break;
     }
     VAR_4 = VAR_8 - 1;
 }


 FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_9 = FUNC_4(VAR_1);
 if (VAR_1[VAR_9 - 1] == '\r')
     VAR_1[VAR_9 - 1] = '\0';
    }
}
