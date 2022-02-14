
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathbuf ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char const*,size_t const) ;
 char* FUNC_3 (size_t const) ;

char *
FUNC_4(const char *VAR_0, const char *VAR_1, const size_t VAR_2)
{
 char VAR_3[64], *VAR_4, *VAR_5;

 if (VAR_2 < sizeof(VAR_3) - 1)
  VAR_4 = VAR_3;
 else
  VAR_4 = FUNC_3(VAR_2 + 1);
 FUNC_2(VAR_4, VAR_1, VAR_2);
 VAR_4[VAR_2] = '\0';
 VAR_5 = FUNC_1(VAR_0, VAR_4);
 if (VAR_4 != VAR_3)
  FUNC_0(VAR_4);
 return (VAR_5);
}
