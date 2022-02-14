
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int *) ;

char *
FUNC_1(char *VAR_1)
{
 static char *VAR_2 = ((void*)0);
 static int VAR_3 = 0;

 int VAR_4 = 0;

 FUNC_0(VAR_2, VAR_3, VAR_0, ((void*)0));
 while (VAR_4 < VAR_3 - 1
        && (VAR_2[VAR_4++] = (*VAR_1 == '\\') ? *++VAR_1 : *VAR_1))
  VAR_1++;
 return VAR_2;
}
