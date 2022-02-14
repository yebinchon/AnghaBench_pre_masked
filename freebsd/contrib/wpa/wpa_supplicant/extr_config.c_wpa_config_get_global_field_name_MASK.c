
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int param1; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

const char * FUNC_0(unsigned int VAR_2, int *VAR_3)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);

 if (VAR_3)
  *VAR_3 = !VAR_1[VAR_2].param1;
 return VAR_1[VAR_2].name;
}
