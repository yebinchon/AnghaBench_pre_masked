
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0, const char *VAR_1, FILE **VAR_2)
{
 char *VAR_3;

 if (!VAR_0 || VAR_1[0] == '/')
  VAR_3 = FUNC_3(VAR_1);
 else
  VAR_3 = FUNC_2(VAR_0, VAR_1);

 *VAR_2 = FUNC_0(VAR_3, "rb");
 if (!*VAR_2) {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }

 return VAR_3;
}
