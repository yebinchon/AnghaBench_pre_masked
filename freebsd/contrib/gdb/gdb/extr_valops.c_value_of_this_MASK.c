
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct TYPE_2__ {scalar_t__ la_language; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct value* FUNC_0 (char*,int) ;

struct value *
FUNC_1 (int VAR_2)
{
  if (VAR_0->la_language == VAR_1)
    return FUNC_0 ("self", VAR_2);
  else
    return FUNC_0 ("this", VAR_2);
}
