
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int osm_subn_t ;
struct TYPE_10__ {int nmgrps; TYPE_2__** mgrps; } ;
typedef TYPE_1__ osm_prtn_t ;
struct TYPE_11__ {int well_known; } ;
typedef TYPE_2__ osm_mgrp_t ;
typedef int osm_log_t ;
typedef int ib_net16_t ;
struct TYPE_12__ {int raw; } ;
typedef TYPE_3__ ib_gid_t ;
typedef int ib_api_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 TYPE_2__** FUNC_4 (TYPE_2__**,int) ;

__attribute__((used)) static ib_api_status_t
FUNC_5(osm_log_t *VAR_7, osm_prtn_t *VAR_8, osm_mgrp_t *VAR_9,
   osm_subn_t *VAR_10, const ib_gid_t *VAR_11,
   ib_net16_t VAR_12)
{
 char VAR_13[VAR_4];
 osm_mgrp_t **VAR_14;
 int VAR_15 = 0;


 for (VAR_15 = 0; VAR_15 < VAR_8->nmgrps; VAR_15++)
  if (VAR_8->mgrps[VAR_15] == VAR_9)
   return (VAR_3);


 VAR_14 = FUNC_4(VAR_8->mgrps, (VAR_8->nmgrps +1) * sizeof(*VAR_8->mgrps));
 if (VAR_14) {
  VAR_8->mgrps = VAR_14;
  VAR_8->mgrps[VAR_8->nmgrps] = VAR_9;
  VAR_8->nmgrps++;
 } else {
  FUNC_0(VAR_7, VAR_5,
   "realloc error to create MC group (%s) in "
   "partition (pkey 0x%04x)\n",
   FUNC_2(VAR_0, VAR_11->raw,
      VAR_13, sizeof VAR_13),
   FUNC_1(VAR_12));
  VAR_9->well_known = VAR_1;
  FUNC_3(VAR_10, VAR_9);
  return (VAR_2);
 }
 VAR_9->well_known = VAR_6;
 return (VAR_3);
}
