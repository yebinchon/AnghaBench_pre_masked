
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* eh_region ;
struct TYPE_3__ {int region_number; struct TYPE_3__* next_peer; struct TYPE_3__* inner; } ;



__attribute__((used)) static void
FUNC_0 (eh_region VAR_0, int *VAR_1, int *VAR_2)
{
  if (VAR_0->region_number < *VAR_1)
    *VAR_1 = VAR_0->region_number;
  if (VAR_0->region_number > *VAR_2)
    *VAR_2 = VAR_0->region_number;

  if (VAR_0->inner)
    {
      VAR_0 = VAR_0->inner;
      FUNC_0 (VAR_0, VAR_1, VAR_2);
      while (VAR_0->next_peer)
 {
   VAR_0 = VAR_0->next_peer;
   FUNC_0 (VAR_0, VAR_1, VAR_2);
 }
    }
}
