
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum cast_type { ____Placeholder_cast_type } cast_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static enum cast_type
FUNC_2 (tree VAR_4, tree VAR_5)
{
  int VAR_6 = FUNC_0 (&VAR_4);
  int VAR_7 = FUNC_0 (&VAR_5);
  if (VAR_6 != VAR_7)
    return VAR_1;

  if (VAR_4 == VAR_5)
    return VAR_3;

  if (FUNC_1 (VAR_4, VAR_5)) return VAR_2;
  if (FUNC_1 (VAR_5, VAR_4)) return VAR_0;
  return VAR_1;
}
