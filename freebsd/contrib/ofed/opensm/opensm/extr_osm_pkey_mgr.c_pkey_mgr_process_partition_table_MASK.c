
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int osm_sm_t ;
struct TYPE_3__ {int pkey; int part_guid_tbl; int full_guid_tbl; } ;
typedef TYPE_1__ osm_prtn_t ;
typedef int osm_physp_t ;
typedef int osm_log_t ;
typedef int ib_net16_t ;
typedef int cl_map_t ;
typedef scalar_t__ cl_map_iterator_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_6(osm_log_t * VAR_0, osm_sm_t * VAR_1,
     const osm_prtn_t * VAR_2,
     const boolean_t VAR_3)
{
 const cl_map_t *VAR_4 =
     VAR_3 ? &VAR_2->full_guid_tbl : &VAR_2->part_guid_tbl;
 cl_map_iterator_t VAR_5, VAR_6;
 ib_net16_t VAR_7 = VAR_2->pkey;
 osm_physp_t *VAR_8;

 if (VAR_3)
  VAR_7 |= FUNC_0(0x8000);

 VAR_6 = FUNC_2(VAR_4);
 while (VAR_6 != FUNC_1(VAR_4)) {
  VAR_5 = VAR_6;
  VAR_6 = FUNC_3(VAR_5);
  VAR_8 = FUNC_4(VAR_5);
  if (VAR_8)
   FUNC_5(VAR_0, VAR_1, VAR_7,
             VAR_8);
 }
}
