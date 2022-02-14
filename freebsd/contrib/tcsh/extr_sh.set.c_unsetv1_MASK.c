
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {struct varent* v_parent; struct varent** v_link; struct varent* v_right; struct varent* v_left; int vec; int v_flags; struct varent* v_name; } ;


 int FUNC_0 (struct varent*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct varent*) ;

__attribute__((used)) static void
FUNC_3(struct varent *VAR_0)
{
    struct varent *VAR_1, *VAR_2;
    int VAR_3;




    FUNC_1(VAR_0->vec);
    FUNC_2(VAR_0->v_name);





    if (VAR_0->v_right == 0)
 VAR_1 = VAR_0->v_left;
    else if (VAR_0->v_left == 0)
 VAR_1 = VAR_0->v_right;
    else {
 for (VAR_1 = VAR_0->v_left; VAR_1->v_right; VAR_1 = VAR_1->v_right)
     continue;
 VAR_0->v_name = VAR_1->v_name;
 VAR_0->v_flags = VAR_1->v_flags;
 VAR_0->vec = VAR_1->vec;
 VAR_0 = VAR_1;
 VAR_1 = VAR_0->v_left;
    }




    VAR_2 = VAR_0->v_parent;
    VAR_3 = VAR_2->v_right == VAR_0;
    if ((VAR_2->v_link[VAR_3] = VAR_1) != 0)
 VAR_1->v_parent = VAR_2;



    FUNC_2(VAR_0);
    FUNC_0(VAR_2, VAR_3, 1);
}
