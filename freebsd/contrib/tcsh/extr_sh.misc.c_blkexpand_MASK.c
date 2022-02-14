
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;
typedef int Char ;


 struct Strbuf VAR_0 ;
 int FUNC_0 (struct Strbuf*,int * const) ;
 int FUNC_1 (struct Strbuf*,char) ;
 int * FUNC_2 (struct Strbuf*) ;

Char *
FUNC_3(Char *const *VAR_1)
{
    struct Strbuf VAR_2 = VAR_0;

    for (; *VAR_1; VAR_1++) {
 FUNC_0(&VAR_2, *VAR_1);
 if (VAR_1[1])
     FUNC_1(&VAR_2, ' ');
    }
    return FUNC_2(&VAR_2);
}
