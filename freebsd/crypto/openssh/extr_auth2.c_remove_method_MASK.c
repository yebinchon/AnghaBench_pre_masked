
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char **VAR_2, const char *VAR_3, const char *VAR_4)
{
 char *VAR_5 = *VAR_2, *VAR_6;
 size_t VAR_7 = FUNC_2(VAR_3);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_3, VAR_4);
 if (VAR_8 != VAR_1 && VAR_8 != VAR_0)
  return 0;
 VAR_6 = VAR_5 + VAR_7;
 if (VAR_4 && VAR_8 == VAR_0)
  VAR_6 += 1 + FUNC_2(VAR_4);
 if (*VAR_6 == ',')
  VAR_6++;
 *VAR_2 = FUNC_3(VAR_6);
 FUNC_0(VAR_5);
 return 1;
}
