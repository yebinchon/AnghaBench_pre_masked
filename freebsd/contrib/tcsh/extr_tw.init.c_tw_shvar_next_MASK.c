
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {scalar_t__ v_name; struct varent* v_parent; struct varent* v_right; struct varent* v_left; } ;
typedef int Strbuf ;


 int FUNC_0 (int*,scalar_t__) ;
 int FUNC_1 (int*) ;
 struct varent* VAR_0 ;

int
FUNC_2(struct Strbuf *VAR_1, struct Strbuf *VAR_2, int *VAR_3)
{
    struct varent *VAR_4;
    struct varent *VAR_5;

    FUNC_1(VAR_3);
    FUNC_1(VAR_2);
    if ((VAR_4 = VAR_0) == ((void*)0))
 return 0;

    FUNC_0(VAR_1, VAR_4->v_name);


    for (;;) {
 if (VAR_4->v_right) {
     VAR_4 = VAR_4->v_right;
     while (VAR_4->v_left)
  VAR_4 = VAR_4->v_left;
 }
 else {
     do {
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->v_parent;
     } while (VAR_4->v_right == VAR_5);
 }
 if (VAR_4->v_parent == 0) {
     VAR_0 = ((void*)0);
     return 1;
 }
 if (VAR_4->v_name) {
     VAR_0 = VAR_4;
     return 1;
 }
    }
}
