
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sw_guid_tbl; } ;
struct TYPE_7__ {TYPE_1__ subn; int log; } ;
typedef TYPE_2__ osm_opensm_t ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int *,int ,TYPE_2__*) ;

void FUNC_2(osm_opensm_t * VAR_2)
{
 if (FUNC_0(&VAR_2->log, VAR_0))

  FUNC_1(VAR_2, "opensm.mcfdbs",
          &VAR_2->subn.sw_guid_tbl,
          VAR_1, VAR_2);
}
