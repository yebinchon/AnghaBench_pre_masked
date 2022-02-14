
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;

int FUNC_1(const char *VAR_1, char *VAR_2, size_t VAR_3,
        char **VAR_4)
{
 size_t VAR_5;
 char *VAR_6;

 *VAR_4 = (char *) VAR_1;
 while (FUNC_0(**VAR_4))
  (*VAR_4)++;
 if (!**VAR_4 || VAR_3 <= 1)
  return -VAR_0;

 VAR_5 = VAR_3 - 1;

 VAR_6 = VAR_2;
 while (**VAR_4 && !FUNC_0(**VAR_4) && VAR_5 > 0) {
  *VAR_6 = **VAR_4;
  (*VAR_4)++;
  VAR_6++;
  VAR_5--;
 }
 *VAR_6 = 0;

 return 0;
}
