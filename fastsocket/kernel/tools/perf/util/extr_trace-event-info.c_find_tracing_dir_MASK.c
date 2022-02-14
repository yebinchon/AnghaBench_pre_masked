
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static const char *FUNC_4(void)
{
 static char *VAR_0;
 static int VAR_1;
 const char *VAR_2;

 if (VAR_1)
  return VAR_0;

 VAR_2 = FUNC_0();

 VAR_0 = FUNC_1(FUNC_3(VAR_2) + 9);

 FUNC_2(VAR_0, "%s/tracing", VAR_2);

 VAR_1 = 1;
 return VAR_0;
}
