
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_4__ {scalar_t__ length; int s; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1 (dyn_string_t VAR_0, dyn_string_t VAR_1)
{

  if (VAR_0->length != VAR_1->length)
    return 0;
  else
    return !FUNC_0 (VAR_0->s, VAR_1->s);
}
