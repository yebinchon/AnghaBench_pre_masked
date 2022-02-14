
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* bitmap_set_t ;
struct TYPE_3__ {int expressions; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5 (bitmap_set_t VAR_1, tree VAR_2)
{

  if (FUNC_4 (FUNC_3 (VAR_2)))
    return 1;


  if (FUNC_1 (VAR_2) != VAR_0)
    return 0;
  return FUNC_2 (VAR_1->expressions, FUNC_0 (VAR_2));
}
