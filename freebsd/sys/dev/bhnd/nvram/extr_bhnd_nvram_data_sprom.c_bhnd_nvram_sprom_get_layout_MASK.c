
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ rev; } ;
typedef TYPE_1__ bhnd_sprom_layout ;


 TYPE_1__ const* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static const bhnd_sprom_layout *
FUNC_0(uint8_t VAR_2)
{

 for (size_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].rev == VAR_2)
   return (&VAR_0[VAR_3]);
 }


 return (((void*)0));
}
