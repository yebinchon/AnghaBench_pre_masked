
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {scalar_t__ len; scalar_t__ s; } ;
typedef int Char ;


 int FUNC_0 (struct Strbuf*,int *) ;
 int FUNC_1 (struct Strbuf*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct Strbuf*) ;
 struct Strbuf VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;

void
FUNC_4(Char *VAR_2)
{
    static struct Strbuf VAR_3;

    VAR_3.len = 0;
    FUNC_1(&VAR_3, VAR_0.s + VAR_1, VAR_0.len - VAR_1);
    VAR_0.len = 0;
    FUNC_0(&VAR_0, VAR_2);
    FUNC_2(&VAR_0);
    FUNC_1(&VAR_0, VAR_3.s, VAR_3.len);
    FUNC_3(VAR_2);
    VAR_1 = 0;
}
