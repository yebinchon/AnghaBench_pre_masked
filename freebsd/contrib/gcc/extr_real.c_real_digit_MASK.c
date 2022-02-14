
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cl; } ;
typedef TYPE_1__ const REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*,int ,int,int ,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const REAL_VALUE_TYPE *
FUNC_2 (int VAR_2)
{
  static REAL_VALUE_TYPE VAR_3[10];

  FUNC_0 (VAR_2 >= 0);
  FUNC_0 (VAR_2 <= 9);

  if (VAR_2 > 0 && VAR_3[VAR_2].cl == VAR_1)
    FUNC_1 (&VAR_3[VAR_2], VAR_0, VAR_2, 0, 1);

  return &VAR_3[VAR_2];
}
