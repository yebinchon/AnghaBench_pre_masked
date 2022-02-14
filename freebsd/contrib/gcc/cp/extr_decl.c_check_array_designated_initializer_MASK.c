
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ index; } ;
typedef TYPE_1__ constructor_elt ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool
FUNC_3 (const constructor_elt *VAR_1)
{

  if (VAR_1->index)
    {


      FUNC_2 (FUNC_0 (VAR_1->index) == VAR_0);
      FUNC_1 ("name %qD used in a GNU-style designated "
      "initializer for an array", VAR_1->index);
      return 0;
    }

  return 1;
}
