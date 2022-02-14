
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ freq_start; scalar_t__ freq_end; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(uint16_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_0[VAR_2].freq_start != 0; VAR_2++) {
  if (VAR_1 >= VAR_0[VAR_2].freq_start &&
      VAR_1 < VAR_0[VAR_2].freq_end)
   return (1);
 }
 return (0);
}
