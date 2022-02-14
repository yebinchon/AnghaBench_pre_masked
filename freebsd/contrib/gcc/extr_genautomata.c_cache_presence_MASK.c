
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
struct TYPE_8__ {int query_units_num; int units_num; } ;
struct TYPE_7__ {scalar_t__ query_p; } ;
struct TYPE_6__ {int* presence_signature; } ;


 int VAR_0 ;
 int* FUNC_0 (unsigned int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static void
FUNC_2 (state_t VAR_3)
{
  int VAR_4, VAR_5 = 0;
  unsigned int VAR_6;
  VAR_6 = (VAR_1->query_units_num + sizeof (int) * VAR_0 - 1)
        / (sizeof (int) * VAR_0);

  VAR_3->presence_signature = FUNC_0 (VAR_6 * sizeof (int));
  for (VAR_4 = 0; VAR_4 < VAR_1->units_num; VAR_4++)
    if (VAR_2 [VAR_4]->query_p)
      {
 int VAR_7 = FUNC_1 (VAR_3, VAR_4);
 VAR_3->presence_signature[VAR_5 / (sizeof (int) * VAR_0)]
   |= (!!VAR_7) << (VAR_5 % (sizeof (int) * VAR_0));
 VAR_5++;
      }
}
