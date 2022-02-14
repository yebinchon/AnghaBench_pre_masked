
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int request ;
typedef int pqisrc_softstate_t ;
typedef int pqisrc_raid_req_t ;
typedef int pqisrc_raid_map_t ;
struct TYPE_4__ {int * raid_map; int scsi3addr; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *,int *,int,int ,int ,int ,int *) ;
 int FUNC_6 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(pqisrc_softstate_t *VAR_3,
 pqi_scsi_dev_t *VAR_4)
{
 int VAR_5 = VAR_1;
 pqisrc_raid_req_t VAR_6;
 pqisrc_raid_map_t *VAR_7;

 FUNC_1("IN\n");

 VAR_7 = FUNC_3(VAR_3, sizeof(*VAR_7));
 if (!VAR_7)
  return VAR_0;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_5 = FUNC_5(VAR_3, &VAR_6, VAR_7, sizeof(*VAR_7),
      VAR_2, 0, VAR_4->scsi3addr, ((void*)0));

 if (VAR_5) {
  FUNC_0("error in build send raid req ret=%d\n", VAR_5);
  goto err_out;
 }

 VAR_5 = FUNC_6(VAR_3, VAR_4, VAR_7);
 if (VAR_5) {
  FUNC_0("error in raid map validation ret=%d\n", VAR_5);
  goto err_out;
 }

 VAR_4->raid_map = VAR_7;
 FUNC_1("OUT\n");
 return 0;

err_out:
 FUNC_4(VAR_3, (char*)VAR_7, sizeof(*VAR_7));
 FUNC_1("FAILED \n");
 return VAR_5;
}
