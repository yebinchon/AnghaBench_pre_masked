
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,size_t) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,size_t,char*,char const*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(char **VAR_0, const char *VAR_1)
{
 char *VAR_2;
 size_t VAR_3, VAR_4;

 VAR_2 = *VAR_0;
 if (VAR_2) {
  VAR_3 = FUNC_3(VAR_2);
  VAR_4 = VAR_3 + 1 + FUNC_3(VAR_1) + 1;
  VAR_2 = FUNC_0(VAR_2, VAR_4);
  (void)FUNC_2(VAR_2 + VAR_3, VAR_4, ",%s", VAR_1);
 } else
  VAR_2 = FUNC_1(VAR_1);
 *VAR_0 = VAR_2;
}
