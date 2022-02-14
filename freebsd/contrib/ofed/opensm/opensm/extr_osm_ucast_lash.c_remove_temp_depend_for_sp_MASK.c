
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
struct TYPE_12__ {int num_switches; TYPE_5__**** cdg_vertex_matrix; TYPE_3__** switches; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_13__ {int temp; int num_temp_depend; int num_deps; TYPE_1__* deps; int num_using_vertex; } ;
typedef TYPE_5__ cdg_vertex_t ;
struct TYPE_10__ {int out_link; } ;
struct TYPE_9__ {scalar_t__ num_used; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*,int,int) ;

__attribute__((used)) static void FUNC_3(lash_t * VAR_0, int VAR_1, int VAR_2,
          int VAR_3)
{
 switch_t **VAR_4 = VAR_0->switches;
 cdg_vertex_t ****VAR_5 = VAR_0->cdg_vertex_matrix;
 int VAR_6, VAR_7, VAR_8;
 cdg_vertex_t *VAR_9;

 VAR_7 = VAR_4[VAR_1]->routing_table[VAR_2].out_link;
 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_7);

 while (VAR_1 != VAR_2) {
  VAR_9 = VAR_5[VAR_3][VAR_1][VAR_6];
  FUNC_0(VAR_9 != ((void*)0));

  if (VAR_9->temp == 1) {
   VAR_5[VAR_3][VAR_1][VAR_6] = ((void*)0);
   FUNC_1(VAR_9);
  } else {
   FUNC_0(VAR_9->num_temp_depend <= VAR_9->num_deps);
   VAR_9->num_deps = VAR_9->num_deps - VAR_9->num_temp_depend;
   VAR_9->num_temp_depend = 0;
   VAR_9->num_using_vertex--;

   for (VAR_8 = VAR_9->num_deps; VAR_8 < VAR_0->num_switches - 1; VAR_8++)
    VAR_9->deps[VAR_8].num_used = 0;
  }

  VAR_1 = VAR_6;
  VAR_7 = VAR_4[VAR_1]->routing_table[VAR_2].out_link;

  if (VAR_1 != VAR_2)
   VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_7);

 }
}
