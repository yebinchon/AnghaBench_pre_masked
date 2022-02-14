
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md4_ctx {int dummy; } ;


 int FUNC_0 (char const,struct md4_ctx*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, unsigned long VAR_1,
   struct md4_ctx *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(VAR_0[0], VAR_2);
 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
  FUNC_0(VAR_0[VAR_3], VAR_2);
  if (VAR_0[VAR_3] == '"' && VAR_0[VAR_3-1] != '\\')
   break;
 }
 return VAR_3;
}
