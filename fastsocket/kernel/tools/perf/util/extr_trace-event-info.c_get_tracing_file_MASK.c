
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_0();
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(FUNC_3(VAR_1) + FUNC_3(VAR_0) + 2);

 FUNC_2(VAR_2, "%s/%s", VAR_1, VAR_0);
 return VAR_2;
}
