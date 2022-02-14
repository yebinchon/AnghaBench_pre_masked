
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int const* v_name; struct varent* v_right; struct varent* v_left; } ;
typedef int Char ;


 int FUNC_0 (int const*,int const*) ;

struct varent *
FUNC_1(const Char *VAR_0, struct varent *VAR_1)
{
    int VAR_2;

    VAR_1 = VAR_1->v_left;
    while (VAR_1 && ((VAR_2 = *VAR_0 - *VAR_1->v_name) != 0 ||
   (VAR_2 = FUNC_0(VAR_0, VAR_1->v_name)) != 0))
 if (VAR_2 < 0)
     VAR_1 = VAR_1->v_left;
 else
     VAR_1 = VAR_1->v_right;
    return VAR_1;
}
