
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; unsigned int suite; } ;


 TYPE_1__* VAR_0 ;

const char *
FUNC_0(unsigned VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2 ++) {
  if (VAR_0[VAR_2].suite == VAR_1) {
   return VAR_0[VAR_2].name;
  }
 }
 return ((void*)0);
}
