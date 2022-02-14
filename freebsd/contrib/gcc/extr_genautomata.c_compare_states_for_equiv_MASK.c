
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
struct TYPE_4__ {int query_units_num; } ;
struct TYPE_3__ {scalar_t__ num_out_arcs; scalar_t__* presence_signature; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int
FUNC_0 (const void *VAR_2,
     const void *VAR_3)
{
  state_t VAR_4 = *(state_t *)VAR_2;
  state_t VAR_5 = *(state_t *)VAR_3;
  unsigned int VAR_6, VAR_7;
  if (VAR_4->num_out_arcs < VAR_5->num_out_arcs)
    return -1;
  else if (VAR_4->num_out_arcs > VAR_5->num_out_arcs)
    return 1;

  VAR_6 = (VAR_1->query_units_num + sizeof (int) * VAR_0 - 1)
 / (sizeof (int) * VAR_0);

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    if (VAR_4->presence_signature[VAR_7] < VAR_5->presence_signature[VAR_7])
      return -1;
    else if (VAR_4->presence_signature[VAR_7] > VAR_5->presence_signature[VAR_7])
      return 1;
  return 0;
}
