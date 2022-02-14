
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (size_t) ;

char *
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 size_t VAR_3 = FUNC_2(VAR_0) + FUNC_2(VAR_1) + 2;

 VAR_2 = FUNC_3(VAR_3);
 FUNC_1(VAR_2, VAR_0, VAR_3);
 if (VAR_0[0] != '\0' && VAR_0[FUNC_2(VAR_0) - 1] != '/')
  FUNC_0(VAR_2, "/", VAR_3);
 FUNC_0(VAR_2, VAR_1, VAR_3);

 return(VAR_2);
}
