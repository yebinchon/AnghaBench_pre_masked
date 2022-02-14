
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__*,int *,int*,int*,int*,int) ;

__attribute__((used)) static tree
FUNC_4 (tree VAR_2,
      HOST_WIDE_INT *VAR_3, tree *VAR_4)
{
  tree VAR_5;
  enum machine_mode VAR_6;
  int VAR_7, VAR_8;
  HOST_WIDE_INT VAR_9;

  if (FUNC_0 (VAR_2) == VAR_0)
    {
      VAR_5 = FUNC_3 (FUNC_1 (VAR_2, 0), &VAR_9, VAR_3,
      VAR_4, &VAR_6, &VAR_7, &VAR_8,
      0);
      VAR_5 = FUNC_2 (VAR_5);
    }
  else
    {
      VAR_5 = VAR_2;
      *VAR_3 = 0;
      *VAR_4 = VAR_1;
    }

  return VAR_5;
}
