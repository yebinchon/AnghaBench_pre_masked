
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* routing_table; } ;
typedef TYPE_3__ switch_t ;
struct TYPE_12__ {unsigned int num_switches; TYPE_5__**** cdg_vertex_matrix; TYPE_3__** switches; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_13__ {int from; int to; int temp; int num_deps; int num_temp_depend; TYPE_1__* deps; int num_using_vertex; } ;
typedef TYPE_5__ cdg_vertex_t ;
struct TYPE_10__ {int out_link; } ;
struct TYPE_9__ {int num_used; TYPE_5__* v; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_5__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*,int,int) ;

__attribute__((used)) static int FUNC_3(lash_t * VAR_1, int VAR_2, int VAR_3,
          int VAR_4)
{
 unsigned VAR_5 = VAR_1->num_switches;
 switch_t **VAR_6 = VAR_1->switches;
 cdg_vertex_t ****VAR_7 = VAR_1->cdg_vertex_matrix;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 cdg_vertex_t *VAR_12, *VAR_13 = ((void*)0);

 VAR_9 = VAR_6[VAR_2]->routing_table[VAR_3].out_link;
 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_9);

 while (VAR_2 != VAR_3) {

  if (VAR_7[VAR_4][VAR_2][VAR_8] == ((void*)0)) {
   VAR_12 = FUNC_1(1, sizeof(*VAR_12) + (VAR_5 - 1) * sizeof(VAR_12->deps[0]));
   if (!VAR_12)
    return -1;
   VAR_12->from = VAR_2;
   VAR_12->to = VAR_8;
   VAR_12->temp = 1;
   VAR_7[VAR_4][VAR_2][VAR_8] = VAR_12;
  } else
   VAR_12 = VAR_7[VAR_4][VAR_2][VAR_8];

  VAR_12->num_using_vertex++;

  if (VAR_13 != ((void*)0)) {
   VAR_11 = 0;

   for (VAR_10 = 0; VAR_10 < VAR_13->num_deps; VAR_10++)
    if (VAR_13->deps[VAR_10].v == VAR_12) {
     VAR_11 = 1;
     VAR_13->deps[VAR_10].num_used++;
    }

   if (VAR_11 == 0) {
    VAR_13->deps[VAR_13->num_deps].v = VAR_12;
    VAR_13->deps[VAR_13->num_deps].num_used++;
    VAR_13->num_deps++;

    FUNC_0(VAR_13->num_deps < (int)VAR_5);

    if (VAR_13->temp == 0)
     VAR_13->num_temp_depend++;

   }
  }

  VAR_2 = VAR_8;
  VAR_9 = VAR_6[VAR_2]->routing_table[VAR_3].out_link;

  if (VAR_2 != VAR_3) {
   FUNC_0(VAR_9 != VAR_0);
   VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_9);
  }

  VAR_13 = VAR_12;
 }
 return 0;
}
