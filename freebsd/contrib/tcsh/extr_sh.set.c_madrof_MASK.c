
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int v_name; struct varent* v_left; struct varent* v_right; } ;
typedef int Char ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static struct varent *
FUNC_1(Char *VAR_0, struct varent *VAR_1)
{
    struct varent *VAR_2;

    for (VAR_1 = VAR_1->v_left; VAR_1; VAR_1 = VAR_1->v_right) {
 if (VAR_1->v_left && (VAR_2 = FUNC_1(VAR_0, VAR_1)) != ((void*)0))
     return VAR_2;
 if (FUNC_0(VAR_1->v_name, VAR_0))
     return VAR_1;
    }
    return VAR_1;
}
