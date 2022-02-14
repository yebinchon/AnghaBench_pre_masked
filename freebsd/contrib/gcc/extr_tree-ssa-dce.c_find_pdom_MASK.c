
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ basic_block ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline basic_block
FUNC_2 (basic_block VAR_3)
{
  FUNC_0 (VAR_3 != VAR_1);

  if (VAR_3 == VAR_2)
    return VAR_2;
  else
    {
      basic_block VAR_4 = FUNC_1 (VAR_0, VAR_3);
      if (! VAR_4)
 return VAR_2;
      return VAR_4;
    }
}
