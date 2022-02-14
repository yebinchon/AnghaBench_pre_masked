
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char * __restrict VAR_0, const char * __restrict VAR_1)
{
 char *VAR_2 = VAR_0;

 for (; *VAR_0; ++VAR_0);
 while ((*VAR_0++ = *VAR_1++) != 0);
 return(VAR_2);
}
