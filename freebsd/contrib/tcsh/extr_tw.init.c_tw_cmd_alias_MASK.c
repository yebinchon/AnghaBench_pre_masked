
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {struct varent* v_parent; struct varent* v_right; scalar_t__ v_name; struct varent* v_left; } ;


 struct varent VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(void)
{
    struct varent *VAR_1;
    struct varent *VAR_2;

    VAR_1 = &VAR_0;
    for (;;) {
 while (VAR_1->v_left)
     VAR_1 = VAR_1->v_left;
x:
 if (VAR_1->v_parent == 0)
     return;
 if (VAR_1->v_name)
     FUNC_0(VAR_1->v_name);
 if (VAR_1->v_right) {
     VAR_1 = VAR_1->v_right;
     continue;
 }
 do {
     VAR_2 = VAR_1;
     VAR_1 = VAR_1->v_parent;
 } while (VAR_1->v_right == VAR_2);
 goto x;
    }
}
