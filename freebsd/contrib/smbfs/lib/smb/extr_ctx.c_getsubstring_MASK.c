
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const u_char ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_1, u_char VAR_2, char *VAR_3, int VAR_4, const char **VAR_5)
{
 int VAR_6;

 VAR_4--;
 for (VAR_6 = 0; VAR_6 < VAR_4 && *VAR_1 != VAR_2; VAR_1++, VAR_6++, VAR_3++) {
  if (*VAR_1 == 0)
   return VAR_0;
  *VAR_3 = *VAR_1;
 }
 *VAR_3 = 0;
 *VAR_5 = *VAR_1 ? VAR_1 + 1 : VAR_1;
 return 0;
}
