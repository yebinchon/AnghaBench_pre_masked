
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* routing_table; } ;
typedef TYPE_2__ switch_t ;
struct TYPE_9__ {TYPE_4__**** cdg_vertex_matrix; TYPE_2__** switches; } ;
typedef TYPE_3__ lash_t ;
struct TYPE_10__ {int temp; scalar_t__ num_temp_depend; } ;
typedef TYPE_4__ cdg_vertex_t ;
struct TYPE_7__ {int out_link; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int,int) ;

__attribute__((used)) static void FUNC_2(lash_t * VAR_0, int VAR_1,
      int VAR_2, int VAR_3)
{
 switch_t **VAR_4 = VAR_0->switches;
 cdg_vertex_t ****VAR_5 = VAR_0->cdg_vertex_matrix;
 int VAR_6, VAR_7;
 cdg_vertex_t *VAR_8;

 VAR_7 = VAR_4[VAR_1]->routing_table[VAR_2].out_link;
 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_7);

 while (VAR_1 != VAR_2) {
  VAR_8 = VAR_5[VAR_3][VAR_1][VAR_6];
  FUNC_0(VAR_8 != ((void*)0));

  if (VAR_8->temp == 1)
   VAR_8->temp = 0;
  else
   VAR_8->num_temp_depend = 0;

  VAR_1 = VAR_6;
  VAR_7 = VAR_4[VAR_1]->routing_table[VAR_2].out_link;

  if (VAR_1 != VAR_2)
   VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_7);
 }

}
