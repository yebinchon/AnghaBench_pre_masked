
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {unsigned int num_switches; int* num_mst_in_lane; int*** virtual_location; int balance_limit; TYPE_5__** switches; TYPE_3__* p_osm; TYPE_7__**** cdg_vertex_matrix; } ;
typedef TYPE_6__ lash_t ;
struct TYPE_21__ {scalar_t__ seen; scalar_t__ visiting_number; } ;
typedef TYPE_7__ cdg_vertex_t ;
struct TYPE_19__ {TYPE_4__* routing_table; } ;
struct TYPE_18__ {int out_link; int lane; } ;
struct TYPE_15__ {unsigned int lash_start_vl; } ;
struct TYPE_16__ {TYPE_1__ opt; } ;
struct TYPE_17__ {TYPE_2__ subn; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*,int *,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int,int,int) ;
 int FUNC_4 (TYPE_6__*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_6__*,int,int,int) ;
 int FUNC_7 (TYPE_6__*,int,int,int) ;
 int FUNC_8 (TYPE_6__*,int,int,int) ;

__attribute__((used)) static int FUNC_9(lash_t * VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = VAR_1->num_switches;
 cdg_vertex_t ****VAR_4 = VAR_1->cdg_vertex_matrix;
 int *VAR_5 = VAR_1->num_mst_in_lane;
 int ***VAR_6 = VAR_1->virtual_location;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12,
     VAR_13;
 unsigned int VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23 = 0, VAR_24;
 int VAR_25;
 unsigned VAR_26 = VAR_1->p_osm->subn.opt.lash_start_vl;

 VAR_8 = 0;
 VAR_7 = VAR_2 - 1;

 VAR_9 = VAR_5[VAR_8];
 if (VAR_2 == 1)
  VAR_23 = 1;

 while (VAR_23 == 0) {
  VAR_16 = FUNC_1(FUNC_5()) % (VAR_3);
  VAR_17 = FUNC_1(FUNC_5()) % (VAR_3);

  while (VAR_6[VAR_16][VAR_17][VAR_8] != 1) {
   VAR_18 = VAR_17;
   if (VAR_17 == VAR_3 - 1)
    VAR_17 = 0;
   else
    VAR_17++;

   while (VAR_17 != VAR_18
          && VAR_6[VAR_16][VAR_17][VAR_8]
          != 1) {
    if (VAR_17 == VAR_3 - 1)
     VAR_17 = 0;
    else
     VAR_17++;
   }

   if (VAR_6[VAR_16][VAR_17][VAR_8] != 1) {
    if (VAR_16 == VAR_3 - 1)
     VAR_16 = 0;
    else
     VAR_16++;
   }
  }

  if (FUNC_3(VAR_1, VAR_16, VAR_17, VAR_7) ||
      FUNC_3(VAR_1, VAR_17, VAR_16, VAR_7))
   return -1;

  VAR_20 = VAR_1->switches[VAR_16]->routing_table[VAR_17].out_link;
  VAR_19 = FUNC_4(VAR_1, VAR_16, VAR_20);

  VAR_22 = VAR_1->switches[VAR_17]->routing_table[VAR_16].out_link;
  VAR_21 = FUNC_4(VAR_1, VAR_17, VAR_22);

  FUNC_0(VAR_4[VAR_7][VAR_16][VAR_19] != ((void*)0));
  FUNC_0(VAR_4[VAR_7][VAR_17][VAR_21] != ((void*)0));

  VAR_24 =
      FUNC_2(VAR_4[VAR_7][VAR_16][VAR_19], ((void*)0), ((void*)0),
     1);
  VAR_25 =
      FUNC_2(VAR_4[VAR_7][VAR_17][VAR_21], ((void*)0), ((void*)0),
     1);

  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
   for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
    if (VAR_4[VAR_7][VAR_14][VAR_15] != ((void*)0)) {
     VAR_4[VAR_7][VAR_14][VAR_15]->visiting_number =
         0;
     VAR_4[VAR_7][VAR_14][VAR_15]->seen = 0;
    }

  if (VAR_24 == 1 || VAR_25 == 1) {
   FUNC_7(VAR_1, VAR_16, VAR_17, VAR_7);
   FUNC_7(VAR_1, VAR_17, VAR_16, VAR_7);

   VAR_6[VAR_16][VAR_17][VAR_8] = 2;
   VAR_6[VAR_17][VAR_16][VAR_8] = 2;
   VAR_9--;
   VAR_9--;
  } else {
   FUNC_8(VAR_1, VAR_16, VAR_17, VAR_7);
   FUNC_8(VAR_1, VAR_17, VAR_16, VAR_7);

   VAR_5[VAR_8]--;
   VAR_5[VAR_8]--;
   VAR_5[VAR_7]++;
   VAR_5[VAR_7]++;

   FUNC_6(VAR_1, VAR_16, VAR_17, VAR_8);
   FUNC_6(VAR_1, VAR_17, VAR_16, VAR_8);
   VAR_6[VAR_16][VAR_17][VAR_8] = 0;
   VAR_6[VAR_17][VAR_16][VAR_8] = 0;
   VAR_6[VAR_16][VAR_17][VAR_7] = 1;
   VAR_6[VAR_17][VAR_16][VAR_7] = 1;
   VAR_1->switches[VAR_16]->routing_table[VAR_17].lane = VAR_7 + VAR_26;
   VAR_1->switches[VAR_17]->routing_table[VAR_16].lane = VAR_7 + VAR_26;
  }

  if (VAR_9 == 0)
   VAR_23 = 1;
  else {
   if (VAR_5[VAR_8] - VAR_5[VAR_7] <
       VAR_1->balance_limit)
    VAR_23 = 1;
  }

  VAR_10 = VAR_7;
  VAR_11 = VAR_8;

  VAR_12 = VAR_0;
  VAR_13 = 0;

  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {

   if (VAR_5[VAR_14] < VAR_12) {
    VAR_12 = VAR_5[VAR_14];
    VAR_7 = VAR_14;
   }

   if (VAR_5[VAR_14] > VAR_13) {
    VAR_13 = VAR_5[VAR_14];
    VAR_8 = VAR_14;
   }
  }

  if (VAR_10 != VAR_7) {
   VAR_9 = VAR_5[VAR_8];
   for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
    for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
     if (VAR_6[VAR_14][VAR_15][VAR_8] == 2)
      VAR_6[VAR_14][VAR_15][VAR_8] = 1;
  }

  if (VAR_11 != VAR_8) {
   VAR_9 = VAR_5[VAR_8];
   for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
    for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
     if (VAR_6[VAR_14][VAR_15][VAR_11] == 2)
      VAR_6[VAR_14][VAR_15][VAR_11] = 1;
  }
 }
 return 0;
}
