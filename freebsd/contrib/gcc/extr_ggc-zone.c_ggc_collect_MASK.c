
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alloc_zone {int was_collected; char* name; struct alloc_zone* next_zone; scalar_t__ allocated; scalar_t__ dead; scalar_t__ allocated_last_gc; } ;
struct TYPE_2__ {struct alloc_zone* zones; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_0 (float,size_t) ;
 float FUNC_1 (int ) ;
 int VAR_4 ;
 float FUNC_2 (struct alloc_zone*) ;
 int FUNC_3 (struct alloc_zone*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct alloc_zone*,int) ;
 int VAR_5 ;
 struct alloc_zone VAR_6 ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (struct alloc_zone*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;

void
FUNC_11 (void)
{
  struct alloc_zone *VAR_7;
  bool VAR_8 = 0;

  FUNC_9 (VAR_4);

  if (!VAR_5)
    {
      float VAR_9 = 0, VAR_10 = 0, VAR_11;

      for (VAR_7 = VAR_0.zones; VAR_7; VAR_7 = VAR_7->next_zone)
 {
   VAR_9 += VAR_7->allocated_last_gc;
   VAR_10 += VAR_7->allocated;
 }

      VAR_9 =
 FUNC_0 (VAR_9,
      (size_t) FUNC_1 (VAR_3) * 1024);
      VAR_11 = VAR_9 * FUNC_1 (VAR_2) / 100;

      if (VAR_10 < VAR_9 + VAR_11)
 {
   FUNC_8 (VAR_4);
   return;
 }
    }


  VAR_6.was_collected = 0;
  VAR_8 |= FUNC_5 (&VAR_6, 1);
  if (VAR_6.was_collected)
    {
      struct alloc_zone *VAR_12;

      for (VAR_12 = VAR_6.next_zone; VAR_12; VAR_12 = VAR_12->next_zone)
 {
   VAR_12->was_collected = 0;
   VAR_8 |= FUNC_5 (VAR_12, !VAR_8);
 }
    }
  if (VAR_8)
    FUNC_10 ();


  for (VAR_7 = VAR_0.zones; VAR_7 && VAR_7->next_zone; VAR_7 = VAR_7->next_zone)
    {
      if (VAR_7->next_zone->dead)
 {
   struct alloc_zone *VAR_13 = VAR_7->next_zone;

   FUNC_6 ("Zone `%s' is dead and will be freed.\n", VAR_13->name);


   FUNC_4 (!VAR_13->allocated);


   VAR_7->next_zone = VAR_7->next_zone->next_zone;
   FUNC_7 (VAR_13);
   FUNC_3 (VAR_13);
 }
    }

  FUNC_8 (VAR_4);
}
