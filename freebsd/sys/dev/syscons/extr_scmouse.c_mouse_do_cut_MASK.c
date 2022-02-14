
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xsize; int mouse_cut_start; int mouse_cut_end; int vtb; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char* VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 char FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(scr_stat *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;

    for (VAR_7 = VAR_2, VAR_5 = VAR_4 = VAR_6 = 0; VAR_7 <= VAR_3; ++VAR_7) {
 VAR_0[VAR_5] = FUNC_3(&VAR_1->vtb, VAR_7);

 if (VAR_0[VAR_5] == '\0')
     VAR_0[VAR_5] = ' ';
 if (!FUNC_0(VAR_0[VAR_5]))
     VAR_4 = VAR_5 + 1;
 ++VAR_5;

 if ((VAR_7 % VAR_1->xsize) == (VAR_1->xsize - 1)) {
     VAR_0[VAR_4++] = '\r';
     VAR_5 = VAR_4;
     VAR_6 = 0;
 }
    }
    VAR_0[VAR_5] = '\0';


    VAR_8 = FUNC_4();
    if (VAR_1->mouse_cut_start <= VAR_1->mouse_cut_end) {
 FUNC_2(VAR_1, VAR_1->mouse_cut_start);
 FUNC_2(VAR_1, VAR_1->mouse_cut_end);
    } else if (VAR_1->mouse_cut_end >= 0) {
 FUNC_2(VAR_1, VAR_1->mouse_cut_end);
 FUNC_2(VAR_1, VAR_1->mouse_cut_start);
    }


    VAR_1->mouse_cut_start = VAR_2;
    VAR_1->mouse_cut_end = VAR_3;
    FUNC_2(VAR_1, VAR_2);
    FUNC_2(VAR_1, VAR_3);
    FUNC_5(VAR_8);
}
