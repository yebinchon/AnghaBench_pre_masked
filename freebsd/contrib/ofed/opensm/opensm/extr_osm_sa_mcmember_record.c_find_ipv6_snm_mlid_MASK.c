
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mgrp_mgid_tbl; } ;
typedef TYPE_1__ osm_subn_t ;
struct TYPE_5__ {int mlid; } ;
typedef TYPE_2__ osm_mgrp_t ;
typedef int ib_net16_t ;
typedef int ib_gid_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static ib_net16_t FUNC_2(osm_subn_t *VAR_1, ib_gid_t *VAR_2)
{
 osm_mgrp_t *VAR_3 = (osm_mgrp_t *)FUNC_1(&VAR_1->mgrp_mgid_tbl, VAR_2,
          VAR_0);
 if (VAR_3 != (osm_mgrp_t *)FUNC_0(&VAR_1->mgrp_mgid_tbl))
  return VAR_3->mlid;
 return 0;
}
