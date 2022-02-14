
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int a_access_mask; int a_type; int a_flags; } ;
typedef TYPE_1__ ace_t ;



uint64_t
FUNC_0(void *VAR_0, uint64_t VAR_1, int VAR_2, uint16_t *VAR_3,
    uint16_t *VAR_4, uint32_t *VAR_5)
{
 ace_t *VAR_6 = VAR_0;

 if (VAR_1 >= VAR_2)
  return (0);

 *VAR_3 = VAR_6[VAR_1].a_flags;
 *VAR_4 = VAR_6[VAR_1].a_type;
 *VAR_5 = VAR_6[VAR_1++].a_access_mask;

 return (VAR_1);
}
