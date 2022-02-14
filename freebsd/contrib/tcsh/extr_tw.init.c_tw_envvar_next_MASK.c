
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Strbuf ;
typedef char Char ;


 int FUNC_0 (int*,char const*,int) ;
 int FUNC_1 (int*) ;
 char const** VAR_0 ;

int
FUNC_2(struct Strbuf *VAR_1, struct Strbuf *VAR_2, int *VAR_3)
{
    const Char *VAR_4;

    FUNC_1(VAR_3);
    FUNC_1(VAR_2);
    if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
 return 0;
    for (VAR_4 = *VAR_0; *VAR_4 && *VAR_4 != '='; VAR_4++)
 continue;
    FUNC_0(VAR_1, *VAR_0, VAR_4 - *VAR_0);
    VAR_0++;
    return 1;
}
