
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 char VAR_1 ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static Char *
FUNC_2(Char *VAR_2)
{
    static Char *VAR_3 = ((void*)0);

    if (VAR_2 != ((void*)0))
 VAR_3 = VAR_2;


    for (; *VAR_3 && FUNC_0(*VAR_3); VAR_3++)
 continue;

    for (VAR_2 = VAR_3; *VAR_3 && !FUNC_0(*VAR_3); VAR_3++) {
 if (FUNC_1(*VAR_3))
     return VAR_0;
 *VAR_3 = *VAR_3 & ~VAR_1;
    }
    if (*VAR_3 != '\0')
 *VAR_3++ = '\0';

    return *VAR_2 ? VAR_2 : ((void*)0);
}
