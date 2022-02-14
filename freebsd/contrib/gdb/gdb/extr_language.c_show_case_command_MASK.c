
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ la_case_sensitivity; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1 (char *VAR_2, int VAR_3)
{
   if (VAR_0 != VAR_1->la_case_sensitivity)
      FUNC_0(
"Warning: the current case sensitivity setting does not match the language.\n");
}
