
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
typedef int request ;
typedef int pqisrc_softstate_t ;
struct TYPE_6__ {void** cdb; } ;
typedef TYPE_1__ pqisrc_raid_req_t ;
struct TYPE_7__ {int scsi3addr; } ;
typedef TYPE_2__ pqi_scsi_dev_t ;
typedef int bmic_ident_physdev_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int,int ,int ,void**,int *) ;

__attribute__((used)) static int FUNC_4(pqisrc_softstate_t *VAR_3,
 pqi_scsi_dev_t *VAR_4,
 bmic_ident_physdev_t *VAR_5,
 int VAR_6)
{
 int VAR_7 = VAR_1;
 uint16_t VAR_8;
 pqisrc_raid_req_t VAR_9;


 FUNC_1("IN\n");

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_8 = FUNC_0(VAR_4->scsi3addr);
 VAR_9.cdb[2] = (uint8_t)VAR_8;
 VAR_9.cdb[9] = (uint8_t)(VAR_8 >> 8);

 VAR_7 = FUNC_3(VAR_3, &VAR_9, VAR_5, VAR_6,
    VAR_0, 0, (uint8_t *)VAR_2, ((void*)0));
 FUNC_1("OUT\n");
 return VAR_7;
}
