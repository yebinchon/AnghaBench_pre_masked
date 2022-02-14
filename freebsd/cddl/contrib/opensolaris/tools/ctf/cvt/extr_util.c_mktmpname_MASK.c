
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (scalar_t__) ;

char *
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_3(FUNC_2(VAR_0) + FUNC_2(VAR_1) + 1);
 (void) FUNC_1(VAR_2, VAR_0);
 (void) FUNC_0(VAR_2, VAR_1);
 return (VAR_2);
}
