
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct scev_info_str {int chrec; int var; } ;
typedef scalar_t__ PTR ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ,struct scev_info_str*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static tree *
FUNC_2 (tree VAR_2)
{
  struct scev_info_str *VAR_3;
  struct scev_info_str VAR_4;
  PTR *VAR_5;

  VAR_4.var = VAR_2;
  VAR_5 = FUNC_0 (VAR_1, &VAR_4, VAR_0);

  if (!*VAR_5)
    *VAR_5 = FUNC_1 (VAR_2);
  VAR_3 = (struct scev_info_str *) *VAR_5;

  return &VAR_3->chrec;
}
