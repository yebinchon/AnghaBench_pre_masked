
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int chtype ;
typedef int WINDOW ;
struct TYPE_3__ {int current; int max_value; int min_value; int slide_len; int slide_inc; int slide_y; int slide_x; int value_x; int value_len; int * window; } ;
typedef TYPE_1__ VALUE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,char*,int ,int) ;

__attribute__((used)) static void
FUNC_9(VALUE * VAR_3, int VAR_4)
{
    if (VAR_4 != VAR_3->current) {
 WINDOW *VAR_5 = VAR_3->window;
 int VAR_6, VAR_7;
 int VAR_8;
 int VAR_9 = (VAR_3->max_value + 1 - VAR_3->min_value);
 int VAR_10 = (VAR_4 - VAR_3->min_value);
 int VAR_11;

 FUNC_4(VAR_5, VAR_6, VAR_7);

 if (VAR_9 > VAR_3->slide_len) {
     VAR_11 = (VAR_10 + VAR_3->slide_inc) / VAR_3->slide_inc;
 } else if (VAR_9 < VAR_3->slide_len) {
     VAR_11 = (VAR_10 + 1) * VAR_3->slide_inc;
 } else {
     VAR_11 = VAR_10;
 }

 FUNC_2(VAR_5, VAR_2);
 FUNC_7(VAR_5, VAR_3->slide_y, VAR_3->slide_x);
 for (VAR_8 = 0; VAR_8 < VAR_3->slide_len; ++VAR_8) {
     (void) FUNC_5(VAR_5, ' ');
 }
 FUNC_7(VAR_5, VAR_3->slide_y, VAR_3->value_x);
 FUNC_8(VAR_5, "%*d", VAR_3->value_len, VAR_4);
 if ((VAR_2 & VAR_0) != 0) {
     FUNC_1(VAR_5, VAR_0);
 } else {
     FUNC_2(VAR_5, VAR_0);
 }
 FUNC_7(VAR_5, VAR_3->slide_y, VAR_3->slide_x);
 for (VAR_8 = 0; VAR_8 < VAR_11; ++VAR_8) {
     chtype VAR_12 = FUNC_6(VAR_5);
     if (VAR_2 & VAR_0) {
  VAR_12 &= ~VAR_0;
     }
     (void) FUNC_5(VAR_5, VAR_12);
 }
 FUNC_2(VAR_5, VAR_1);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 VAR_3->current = VAR_4;

 FUNC_0(("# drew %d offset %d scaled %d limit %d inc %d\n",
     VAR_4,
     VAR_10,
     VAR_11,
     VAR_3->slide_len,
     VAR_3->slide_inc));

 FUNC_3(VAR_5);
    }
}
