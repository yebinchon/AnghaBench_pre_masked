
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const*,size_t,char**) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int
FUNC_4(const u_char *VAR_2, size_t VAR_3,
    const char *VAR_4)
{
 const char *VAR_5;
 char *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_4 == ((void*)0))
  return 0;
 if ((VAR_5 = FUNC_2(VAR_4)) == ((void*)0))
  return VAR_0;
 if ((VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_6)) != 0)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_5, VAR_6) == 0;
 FUNC_0(VAR_6);
 return VAR_7 ? 0 : VAR_1;
}
