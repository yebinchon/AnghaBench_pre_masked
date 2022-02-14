
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,size_t*,char*,int,int,char const*,int *) ;

char *
FUNC_1(char *VAR_0, size_t VAR_1, int VAR_2, int VAR_3, int VAR_4, const char *VAR_5)
{
 char VAR_6[2];
 int VAR_7;

 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_4;

 VAR_7 = FUNC_0(&VAR_0, &VAR_1, VAR_6, 1, VAR_3, VAR_5, ((void*)0));
 if (VAR_7 < 0)
  return ((void*)0);
 return VAR_0 + VAR_7;
}
