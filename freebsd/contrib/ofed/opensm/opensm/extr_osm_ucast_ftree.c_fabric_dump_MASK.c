
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {scalar_t__ rank; int map_item; } ;
typedef TYPE_2__ ftree_sw_t ;
struct TYPE_12__ {int map_item; } ;
typedef TYPE_3__ ftree_hca_t ;
struct TYPE_13__ {scalar_t__ max_switch_rank; TYPE_1__* p_osm; int sw_tbl; int hca_tbl; } ;
typedef TYPE_4__ ftree_fabric_t ;
struct TYPE_10__ {int log; } ;


 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(ftree_fabric_t * VAR_1)
{
 uint32_t VAR_2;
 ftree_hca_t *VAR_3;
 ftree_sw_t *VAR_4;

 if (!FUNC_1(&VAR_1->p_osm->log, VAR_0))
  return;

 FUNC_0(&VAR_1->p_osm->log, VAR_0, "\n"
  "                       |-------------------------------|\n"
  "                       |-  Full fabric topology dump  -|\n"
  "                       |-------------------------------|\n\n");

 FUNC_0(&VAR_1->p_osm->log, VAR_0, "-- CAs:\n");

 for (VAR_3 = (ftree_hca_t *) FUNC_3(&VAR_1->hca_tbl);
      VAR_3 != (ftree_hca_t *) FUNC_2(&VAR_1->hca_tbl);
      VAR_3 = (ftree_hca_t *) FUNC_4(&VAR_3->map_item)) {
  FUNC_5(VAR_1, VAR_3);
 }

 for (VAR_2 = 0; VAR_2 <= VAR_1->max_switch_rank; VAR_2++) {
  FUNC_0(&VAR_1->p_osm->log, VAR_0,
   "-- Rank %u switches\n", VAR_2);
  for (VAR_4 = (ftree_sw_t *) FUNC_3(&VAR_1->sw_tbl);
       VAR_4 != (ftree_sw_t *) FUNC_2(&VAR_1->sw_tbl);
       VAR_4 = (ftree_sw_t *) FUNC_4(&VAR_4->map_item)) {
   if (VAR_4->rank == VAR_2)
    FUNC_6(VAR_1, VAR_4);
  }
 }

 FUNC_0(&VAR_1->p_osm->log, VAR_0, "\n"
  "                       |---------------------------------------|\n"
  "                       |- Full fabric topology dump completed -|\n"
  "                       |---------------------------------------|\n\n");
}
