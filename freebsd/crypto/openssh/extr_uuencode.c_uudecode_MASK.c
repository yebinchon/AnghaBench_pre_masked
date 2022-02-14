
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,int *,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 char *VAR_4, *VAR_5;


 VAR_4 = FUNC_2(VAR_0);

 for (VAR_5 = VAR_4; *VAR_5 == ' ' || *VAR_5 == '\t'; VAR_5++)
  ;
 for (; *VAR_5 != '\0' && *VAR_5 != ' ' && *VAR_5 != '\t'; VAR_5++)
  ;

 *VAR_5 = '\0';
 VAR_3 = FUNC_0(VAR_4, VAR_1, VAR_2);
 FUNC_1(VAR_4);
 return VAR_3;
}
