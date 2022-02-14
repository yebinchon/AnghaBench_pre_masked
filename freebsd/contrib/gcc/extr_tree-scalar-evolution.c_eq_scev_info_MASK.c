
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scev_info_str {scalar_t__ var; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct scev_info_str *VAR_2 = (const struct scev_info_str *) VAR_0;
  const struct scev_info_str *VAR_3 = (const struct scev_info_str *) VAR_1;

  return VAR_2->var == VAR_3->var;
}
