
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

char *
FUNC_2(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 char *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1 && VAR_0[VAR_2]; VAR_2++)
  continue;
 if ((VAR_3 = FUNC_0(VAR_2 + 1)) == ((void*)0))
  return ((void*)0);
 (void)FUNC_1(VAR_3, VAR_0, VAR_2);
 VAR_3[VAR_2] = '\0';
 return VAR_3;
}
