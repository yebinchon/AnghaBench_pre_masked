
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_5__ {scalar_t__ length; scalar_t__ s; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

int
FUNC_2 (dyn_string_t VAR_0, dyn_string_t VAR_1)
{
  if (FUNC_0 (VAR_0, VAR_0->length + VAR_1->length) == 0)
    return 0;
  FUNC_1 (VAR_0->s + VAR_0->length, VAR_1->s);
  VAR_0->length += VAR_1->length;
  return 1;
}
