
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
struct TYPE_12__ {TYPE_5__**** cdg_vertex_matrix; TYPE_3__** switches; } ;
typedef TYPE_4__ lash_t ;
struct TYPE_13__ {int num_using_vertex; int num_deps; TYPE_1__* deps; } ;
typedef TYPE_5__ cdg_vertex_t ;
struct TYPE_10__ {int out_link; } ;
struct TYPE_9__ {int num_used; TYPE_5__* v; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*,int,int) ;

__attribute__((used)) static void FUNC_3(lash_t * VAR_0, int VAR_1,
            int VAR_2, int VAR_3)
{
 switch_t **VAR_4 = VAR_0->switches;
 cdg_vertex_t ****VAR_5 = VAR_0->cdg_vertex_matrix;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
     VAR_11 = 0;
 cdg_vertex_t *VAR_12;
 int __attribute__((unused)) VAR_13;

 VAR_7 = VAR_4[VAR_1]->routing_table[VAR_2].out_link;
 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_7);

 while (VAR_1 != VAR_2) {
  VAR_12 = VAR_5[VAR_3][VAR_1][VAR_6];
  FUNC_0(VAR_12 != ((void*)0));

  if (VAR_12->num_using_vertex == 1) {

   VAR_5[VAR_3][VAR_1][VAR_6] = ((void*)0);

   FUNC_1(VAR_12);
  } else {
   VAR_12->num_using_vertex--;
   if (VAR_6 != VAR_2) {
    VAR_9 =
        VAR_4[VAR_6]->routing_table[VAR_2].out_link;
    VAR_10 = FUNC_2(VAR_0, VAR_6, VAR_9);
    VAR_13 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_12->num_deps; VAR_8++)
     if (VAR_12->deps[VAR_8].v ==
         VAR_5[VAR_3][VAR_6]
         [VAR_10]) {
      VAR_13 = 1;
      VAR_11 = VAR_8;
     }

    FUNC_0(VAR_13);

    if (VAR_12->deps[VAR_11].num_used == 1) {
     for (VAR_8 = VAR_11;
          VAR_8 < VAR_12->num_deps - 1; VAR_8++) {
      VAR_12->deps[VAR_8].v = VAR_12->deps[VAR_8 + 1].v;
      VAR_12->deps[VAR_8].num_used =
          VAR_12->deps[VAR_8 + 1].num_used;
     }

     VAR_12->num_deps--;
    } else
     VAR_12->deps[VAR_11].num_used--;
   }
  }

  VAR_1 = VAR_6;
  VAR_7 = VAR_4[VAR_1]->routing_table[VAR_2].out_link;

  if (VAR_1 != VAR_2)
   VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_7);
 }
}
