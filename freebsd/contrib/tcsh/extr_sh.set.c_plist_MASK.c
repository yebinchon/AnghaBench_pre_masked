
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int v_flags; struct varent* v_parent; struct varent* v_right; int vec; int v_name; struct varent* v_left; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char) ;

void
FUNC_6(struct varent *VAR_1, int VAR_2)
{
    struct varent *VAR_3;
    int VAR_4;

    for (;;) {
 while (VAR_1->v_left)
     VAR_1 = VAR_1->v_left;
x:
 if (VAR_1->v_parent == 0)
     break;
 if ((VAR_1->v_flags & VAR_2) != 0) {
     if (VAR_0) {
  int VAR_5;

  FUNC_3(&VAR_5);
  FUNC_2(&VAR_5);
     }
     VAR_4 = FUNC_0(VAR_1->vec);
     FUNC_4("%S\t", VAR_1->v_name);
     if (VAR_4 != 1)
  FUNC_5('(');
     FUNC_1(VAR_1->vec);
     if (VAR_4 != 1)
  FUNC_5(')');
     FUNC_5('\n');
 }
 if (VAR_1->v_right) {
     VAR_1 = VAR_1->v_right;
     continue;
 }
 do {
     VAR_3 = VAR_1;
     VAR_1 = VAR_1->v_parent;
 } while (VAR_1->v_right == VAR_3);
 goto x;
    }
}
