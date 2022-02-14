
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,int *,char*,int,int,char*,int *) ;

char *
FUNC_1(char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 char VAR_4[2];
 int VAR_5;

 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_3;

 VAR_5 = FUNC_0(&VAR_0, ((void*)0), VAR_4, 1, VAR_2, "", ((void*)0));
 if (VAR_5 < 0)
  return ((void*)0);
 return VAR_0 + VAR_5;
}
