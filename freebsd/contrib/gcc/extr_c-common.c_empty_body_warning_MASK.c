
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {scalar_t__ stmt; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,char*,int ) ;

void
FUNC_5 (tree VAR_3, tree VAR_4)
{
  if (VAR_2)
    {
      if (FUNC_3 (VAR_3) == VAR_1
   && FUNC_2 (VAR_3))
 VAR_3 = FUNC_2 (VAR_3)->stmt;

      if (VAR_4 && FUNC_3 (VAR_4) == VAR_1
   && FUNC_2 (VAR_4))
 VAR_4 = FUNC_2 (VAR_4)->stmt;

      if (FUNC_1 (VAR_3) && !VAR_4)
 FUNC_4 (VAR_0, "%Hempty body in an if-statement",
   FUNC_0 (VAR_3));

      if (VAR_4 && FUNC_1 (VAR_4))
 FUNC_4 (VAR_0, "%Hempty body in an else-statement",
   FUNC_0 (VAR_4));
   }
}
