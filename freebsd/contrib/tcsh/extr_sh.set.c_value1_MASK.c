
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int ** vec; } ;
typedef int Char ;


 int * VAR_0 ;
 struct varent* FUNC_0 (int *,struct varent*) ;

Char *
FUNC_1(Char *VAR_1, struct varent *VAR_2)
{
    struct varent *VAR_3;

    if (!VAR_1 || !VAR_2)
 return (VAR_0);

    VAR_3 = FUNC_0(VAR_1, VAR_2);
    return ((VAR_3 == ((void*)0) || VAR_3->vec == ((void*)0) || VAR_3->vec[0] == ((void*)0)) ?
 VAR_0 : VAR_3->vec[0]);
}
