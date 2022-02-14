
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {scalar_t__ header; } ;
typedef scalar_t__ basic_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct loop*,scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (struct loop *VAR_8, tree VAR_9)
{
  tree VAR_10 = FUNC_2 (VAR_9);
  tree VAR_11;
  basic_block VAR_12 = FUNC_5 (VAR_10);

  if (!VAR_12
      || !FUNC_6 (VAR_8, VAR_12))
    return VAR_2;

  if (FUNC_3 (VAR_10) == VAR_4)
    {
      if (VAR_12 == VAR_8->header)
 return VAR_10;

      return VAR_2;
    }

  if (FUNC_3 (VAR_10) != VAR_0)
    return VAR_2;

  if (!FUNC_4 (VAR_10, VAR_5))
    return VAR_2;
  if (FUNC_0 (VAR_10, VAR_6) == VAR_1)
    return VAR_2;

  VAR_11 = FUNC_1 (VAR_10, VAR_7);
  if (VAR_11 == VAR_3)
    return VAR_2;

  return FUNC_7 (VAR_8, VAR_11);
}
