
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* dyn_string_t ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ s; } ;


 int * FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,char const*) ;
 int FUNC_2 (char const*) ;

int
FUNC_3 (dyn_string_t VAR_0, const char *VAR_1)
{
  int VAR_2 = FUNC_2 (VAR_1);



  if (FUNC_0 (VAR_0, VAR_0->length + VAR_2) == ((void*)0))
    return 0;
  FUNC_1 (VAR_0->s + VAR_0->length, VAR_1);
  VAR_0->length += VAR_2;
  return 1;
}
