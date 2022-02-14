
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pqisrc_softstate_t ;
typedef int pqisrc_raid_map_t ;
struct TYPE_3__ {scalar_t__ raid_map; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;

void FUNC_2(pqisrc_softstate_t *VAR_0, pqi_scsi_dev_t *VAR_1)
{
 FUNC_0("IN\n");
 if (!VAR_1)
  return;
 if (VAR_1->raid_map) {
   FUNC_1(VAR_0, (char *)VAR_1->raid_map, sizeof(pqisrc_raid_map_t));
 }
 FUNC_1(VAR_0, (char *)VAR_1,sizeof(*VAR_1));
 FUNC_0("OUT\n");

}
