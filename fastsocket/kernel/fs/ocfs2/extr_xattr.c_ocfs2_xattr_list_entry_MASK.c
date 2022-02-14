
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, size_t VAR_2,
      size_t *VAR_3, const char *VAR_4,
      const char *VAR_5, int VAR_6)
{
 char *VAR_7 = VAR_1 + *VAR_3;
 int VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = VAR_8 + VAR_6 + 1;

 *VAR_3 += VAR_9;


 if (!VAR_2)
  return 0;

 if (*VAR_3 > VAR_2)
  return -VAR_0;

 FUNC_0(VAR_7, VAR_4, VAR_8);
 FUNC_0(VAR_7 + VAR_8, VAR_5, VAR_6);
 VAR_7[VAR_8 + VAR_6] = '\0';

 return 0;
}
