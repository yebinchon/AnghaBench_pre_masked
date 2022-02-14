
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,size_t*,char*,int,int,char*,int *) ;

char *
FUNC_1(char *VAR_0, size_t VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 char VAR_5[2];
 int VAR_6;

 VAR_5[0] = VAR_2;
 VAR_5[1] = VAR_4;

 VAR_6 = FUNC_0(&VAR_0, &VAR_1, VAR_5, 1, VAR_3, "", ((void*)0));
 if (VAR_6 < 0)
  return ((void*)0);
 return VAR_0 + VAR_6;
}
