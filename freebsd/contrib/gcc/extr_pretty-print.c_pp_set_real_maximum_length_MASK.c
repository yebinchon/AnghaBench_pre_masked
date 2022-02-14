
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int maximum_length; scalar_t__ prefix; } ;
typedef TYPE_1__ pretty_printer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (pretty_printer *VAR_2)
{



  if (!FUNC_0 (VAR_2)
      || FUNC_2 (VAR_2) == VAR_1
      || FUNC_2 (VAR_2) == VAR_0)
    VAR_2->maximum_length = FUNC_1 (VAR_2);
  else
    {
      int VAR_3 = VAR_2->prefix ? FUNC_3 (VAR_2->prefix) : 0;


      if (FUNC_1 (VAR_2) - VAR_3 < 32)
 VAR_2->maximum_length = FUNC_1 (VAR_2) + 32;
      else
 VAR_2->maximum_length = FUNC_1 (VAR_2);
    }
}
