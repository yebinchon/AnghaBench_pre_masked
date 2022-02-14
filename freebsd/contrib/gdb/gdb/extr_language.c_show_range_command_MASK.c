
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ la_range_check; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (char *VAR_2, int VAR_3)
{

  if (VAR_1 != VAR_0->la_range_check)
    FUNC_0 (
   "Warning: the current range check setting does not match the language.\n");
}
