
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 unsigned char* VAR_1 ;

void
FUNC_0(char const * VAR_2)
{
    if ((VAR_2 != ((void*)0)) && (*VAR_2 != VAR_0)) {
        unsigned char VAR_3 = (unsigned char)*VAR_2;
        while (*VAR_2 != VAR_0)
            VAR_1[(unsigned char)*(VAR_2++)] = VAR_3;
    }
}
