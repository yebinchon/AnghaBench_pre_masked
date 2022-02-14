
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Strbuf ;
typedef char Char ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int*,char const*,int) ;
 int FUNC_2 (int*) ;
 char* VAR_0 ;

int
FUNC_3(struct Strbuf *VAR_1, struct Strbuf *VAR_2, int *VAR_3)
{
    const Char *VAR_4;

    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
    if (VAR_0 == ((void*)0) || VAR_0[0] == '\0')
 return 0;

    while (*VAR_0 && FUNC_0(*VAR_0)) VAR_0++;

    for (VAR_4 = VAR_0; *VAR_0 && !FUNC_0(*VAR_0); VAR_0++)
 continue;
    if (VAR_0 == VAR_4)
 return 0;
    FUNC_1(VAR_1, VAR_4, VAR_0 - VAR_4);
    if (*VAR_0)
 VAR_0++;
    return 1;
}
