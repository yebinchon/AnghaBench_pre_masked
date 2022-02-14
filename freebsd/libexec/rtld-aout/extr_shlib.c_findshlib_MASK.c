
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 char* FUNC_0 (int ,char*,int*,int*,int) ;

char *
FUNC_1(char *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  char *VAR_7;

  VAR_7 = FUNC_0(VAR_1[VAR_6], VAR_2, VAR_3, VAR_4,
   VAR_5);
  if(VAR_7 != ((void*)0))
   return VAR_7;
 }

 return ((void*)0);
}
