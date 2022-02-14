
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct ttypes_filter {scalar_t__ t; } ;
typedef int hashval_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static hashval_t
FUNC_3 (const void *VAR_0)
{
  const struct ttypes_filter *VAR_1 = (const struct ttypes_filter *) VAR_0;
  hashval_t VAR_2 = 0;
  tree VAR_3;

  for (VAR_3 = VAR_1->t; VAR_3 ; VAR_3 = FUNC_0 (VAR_3))
    VAR_2 = (VAR_2 << 5) + (VAR_2 >> 27) + FUNC_1 (FUNC_2 (VAR_3));
  return VAR_2;
}
