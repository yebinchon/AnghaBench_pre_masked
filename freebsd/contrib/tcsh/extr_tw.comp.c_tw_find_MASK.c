
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {char* v_name; int ** vec; struct varent* v_left; struct varent* v_right; } ;
typedef int Char ;


 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static Char **
FUNC_1(Char *VAR_0, struct varent *VAR_1, int VAR_2)
{
    Char **VAR_3;

    for (VAR_1 = VAR_1->v_left; VAR_1; VAR_1 = VAR_1->v_right) {
 if (VAR_1->v_left && (VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2)) != ((void*)0))
     return VAR_3;
 if (VAR_2) {
     if (VAR_1->v_name[0] != '-')
  continue;
     if (FUNC_0(VAR_0, &VAR_1->v_name[1]) && VAR_1->vec != ((void*)0))
  return VAR_1->vec;
 }
 else
     if (FUNC_0(VAR_0, VAR_1->v_name) && VAR_1->vec != ((void*)0))
  return VAR_1->vec;
    }
    return ((void*)0);
}
