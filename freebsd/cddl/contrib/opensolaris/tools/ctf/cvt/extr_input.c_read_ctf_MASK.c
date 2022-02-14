
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int read_cb_f ;


 int FUNC_0 (char*,char*,int *,void*,int) ;

int
FUNC_1(char **VAR_0, int VAR_1, char *VAR_2, read_cb_f *VAR_3, void *VAR_4,
    int VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0, VAR_6 = 0; VAR_7 < VAR_1; VAR_7++) {
  if ((VAR_8 = FUNC_0(VAR_0[VAR_7], VAR_2, VAR_3,
      VAR_4, VAR_5)) < 0)
   return (VAR_8);
  VAR_6 += VAR_8;
 }

 return (VAR_6);
}
