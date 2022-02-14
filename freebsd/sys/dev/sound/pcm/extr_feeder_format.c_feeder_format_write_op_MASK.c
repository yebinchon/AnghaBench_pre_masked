
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int intpcm_write_t ;
struct TYPE_2__ {scalar_t__ format; int * write; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

intpcm_write_t *
FUNC_1(uint32_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(VAR_2) == VAR_1[VAR_3].format)
   return (VAR_1[VAR_3].write);
 }

 return (((void*)0));
}
