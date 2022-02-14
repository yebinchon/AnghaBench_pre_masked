
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int min; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static inline bool
FUNC_5 (value_range_t *VAR_2)
{
  tree VAR_3;

  FUNC_2 (VAR_2->type != VAR_0
              && VAR_2->type != VAR_1
       && !FUNC_3 (VAR_2));

  VAR_3 = FUNC_1 (FUNC_0 (VAR_2->min), 0);
  return (FUNC_4 (VAR_3, VAR_2) == 1);
}
