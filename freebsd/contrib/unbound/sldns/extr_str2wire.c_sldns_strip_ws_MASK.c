
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char* FUNC_1 (char*,int ) ;

char *
FUNC_2(char *VAR_0)
{
        char *VAR_1 = VAR_0, *VAR_2;

        for (VAR_1 = VAR_0; *VAR_1 && FUNC_0((unsigned char)*VAR_1); VAR_1++)
                ;
        for (VAR_2 = FUNC_1(VAR_1, 0); VAR_2 > VAR_1+2 && FUNC_0((unsigned char)VAR_2[-1]) && VAR_2[-2] != '\\'; VAR_2--)
                ;
        *VAR_2 = 0;
        return VAR_1;
}
