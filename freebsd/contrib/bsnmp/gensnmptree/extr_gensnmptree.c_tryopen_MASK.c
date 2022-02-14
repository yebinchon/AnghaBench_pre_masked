
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (scalar_t__) ;

__attribute__((used)) static FILE *
FUNC_6(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 FILE *VAR_3;

 if (VAR_0 == ((void*)0))
  VAR_2 = FUNC_2(VAR_1);
 else {
  VAR_2 = FUNC_5(FUNC_4(VAR_0) + FUNC_4(VAR_1) + 2);
  FUNC_3(VAR_2, "%s/%s", VAR_0, VAR_1);
 }
 VAR_3 = FUNC_0(VAR_2, "r");
 FUNC_1(VAR_2);
 return (VAR_3);
}
