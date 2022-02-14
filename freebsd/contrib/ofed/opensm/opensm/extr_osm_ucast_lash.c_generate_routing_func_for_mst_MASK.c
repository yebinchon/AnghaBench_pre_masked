
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int used_channels; int* dij_channels; size_t id; TYPE_1__* routing_table; } ;
typedef TYPE_2__ switch_t ;
struct TYPE_10__ {size_t switch_id; struct TYPE_10__* next; } ;
typedef TYPE_3__ reachable_dest_t ;
struct TYPE_11__ {TYPE_2__** switches; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_8__ {scalar_t__ out_link; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(lash_t * VAR_1, int VAR_2,
      reachable_dest_t ** VAR_3)
{
 int VAR_4, VAR_5;
 switch_t *VAR_6 = VAR_1->switches[VAR_2];
 int VAR_7 = VAR_6->used_channels;
 reachable_dest_t *VAR_8, *VAR_9, *VAR_10 = ((void*)0), *VAR_11;

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  VAR_5 = VAR_6->dij_channels[VAR_4];
  if (FUNC_3(VAR_1, VAR_5, &VAR_8))
   return -1;

  VAR_9 = VAR_8;
  VAR_11 = VAR_9;

  while (VAR_9 != ((void*)0)) {
   if (VAR_6->routing_table[VAR_9->switch_id].out_link ==
       VAR_0)
    VAR_6->routing_table[VAR_9->switch_id].out_link =
        FUNC_1(VAR_6, VAR_5);

   VAR_11 = VAR_9;
   VAR_9 = VAR_9->next;
  }

  FUNC_0(VAR_11->next == ((void*)0));
  VAR_11->next = VAR_10;
  VAR_10 = VAR_8;
 }

 VAR_9 = (reachable_dest_t *) FUNC_2(sizeof(reachable_dest_t));
 if (!VAR_9)
  return -1;
 VAR_9->switch_id = VAR_6->id;
 VAR_9->next = VAR_10;
 *VAR_3 = VAR_9;
 return 0;
}
