
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

int FUNC_3(char *VAR_0, size_t VAR_1, const char *VAR_2, int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6;
 char *VAR_7, *VAR_8;

 VAR_7 = VAR_0;
 VAR_8 = VAR_0 + VAR_1;

 VAR_6 = FUNC_0(VAR_7, VAR_8 - VAR_7, "%s", VAR_2);
 if (FUNC_1(VAR_8 - VAR_7, VAR_6))
  goto fail;
 VAR_7 += VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_0(VAR_7, VAR_8 - VAR_7, " %s", VAR_4[VAR_5]);
  if (FUNC_1(VAR_8 - VAR_7, VAR_6))
   goto fail;
  VAR_7 += VAR_6;
 }

 VAR_0[VAR_1 - 1] = '\0';
 return 0;

fail:
 FUNC_2("Too long command\n");
 return -1;
}
