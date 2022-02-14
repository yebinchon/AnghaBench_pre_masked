
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parentdirbuf ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char*) ;

int
FUNC_7(const char *VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0+1], *VAR_4;
 char VAR_5[VAR_0+1];
 size_t VAR_6;


 (void)FUNC_3(VAR_3, VAR_1, sizeof(VAR_3));
 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_2(VAR_4, ".") == 0)
  return 1;


 if (FUNC_1(VAR_4, VAR_5) == ((void*)0)) {
  FUNC_6("Unable to determine real path of `%s'", VAR_4);
  return 0;
 }
 if (VAR_5[0] != '/')
  return 1;
 VAR_6 = FUNC_4(VAR_2);
 if (FUNC_5(VAR_5, VAR_2, VAR_6) == 0 &&
     (VAR_5[VAR_6] == '/' || VAR_5[VAR_6] == '\0'))
  return 1;
 return 0;
}
