
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; int min; } ;
typedef TYPE_1__ value_range_t ;
typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static inline int
FUNC_3 (tree VAR_4, value_range_t *VAR_5)
{
  tree VAR_6, VAR_7;

  FUNC_1 ();

  VAR_6 = FUNC_0 (VAR_0, VAR_3, VAR_4, VAR_5->min);
  if (!VAR_6)
  {
    FUNC_2 ();
    return -2;
  }

  VAR_7 = FUNC_0 (VAR_1, VAR_3, VAR_4, VAR_5->max);

  FUNC_2 ();

  if (!VAR_7)
    return -2;

  return VAR_6 == VAR_2 && VAR_7 == VAR_2;
}
