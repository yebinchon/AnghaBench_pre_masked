
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {struct varent* v_parent; struct varent* v_right; scalar_t__ v_name; struct varent* v_left; } ;


 struct varent* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct varent *VAR_1)
{
    VAR_0 = VAR_1;

    for (;;) {
 while (VAR_0->v_left)
     VAR_0 = VAR_0->v_left;
x:
 if (VAR_0->v_parent == 0) {
     VAR_0 = ((void*)0);
     return;
 }
 if (VAR_0->v_name)
     return;
 if (VAR_0->v_right) {
     VAR_0 = VAR_0->v_right;
     continue;
 }
 do {
     VAR_1 = VAR_0;
     VAR_0 = VAR_0->v_parent;
 } while (VAR_0->v_right == VAR_1);
 goto x;
    }
}
