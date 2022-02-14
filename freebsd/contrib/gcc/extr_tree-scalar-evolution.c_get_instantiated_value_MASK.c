
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct scev_info_str {int chrec; int var; } ;
typedef int htab_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct scev_info_str*) ;

__attribute__((used)) static tree
FUNC_1 (htab_t VAR_1, tree VAR_2)
{
  struct scev_info_str *VAR_3, VAR_4;

  VAR_4.var = VAR_2;
  VAR_3 = (struct scev_info_str *) FUNC_0 (VAR_1, &VAR_4);

  if (VAR_3)
    return VAR_3->chrec;
  else
    return VAR_0;
}
