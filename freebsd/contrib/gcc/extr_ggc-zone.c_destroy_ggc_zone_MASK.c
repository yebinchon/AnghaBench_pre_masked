
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alloc_zone {int dead; struct alloc_zone* next_zone; } ;
struct TYPE_2__ {struct alloc_zone* zones; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct alloc_zone*) ;

void
FUNC_1 (struct alloc_zone * VAR_1)
{
  struct alloc_zone *VAR_2;

  for (VAR_2 = VAR_0.zones; VAR_2 && VAR_2->next_zone != VAR_1; VAR_2 = VAR_2->next_zone)

    continue;


  FUNC_0 (VAR_2);


  VAR_2->dead = 1;
}
