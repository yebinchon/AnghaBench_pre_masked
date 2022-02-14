
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {struct varent* v_parent; struct varent* v_right; scalar_t__ vec; int v_name; struct varent* v_left; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char) ;

__attribute__((used)) static void
FUNC_6(struct varent *VAR_1)
{
    struct varent *VAR_2;

    for (;;) {
 while (VAR_1->v_left)
     VAR_1 = VAR_1->v_left;
x:
 if (VAR_1->v_parent == 0)
     break;
 if (VAR_0) {
     int VAR_3;

     FUNC_1(&VAR_3);
     FUNC_0(&VAR_3);
 }
 FUNC_4("%s\t", FUNC_2(VAR_1->v_name));
 if (VAR_1->vec)
     FUNC_3(VAR_1->vec);
 FUNC_5('\n');
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
