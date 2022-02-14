
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {size_t channels; int id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_0(uint32_t VAR_5)
{

 if (VAR_5 < VAR_4[VAR_0].channels ||
     VAR_5 > VAR_4[VAR_1].channels)
  return (VAR_2);

 return (VAR_4[VAR_3[VAR_5]].id);
}
