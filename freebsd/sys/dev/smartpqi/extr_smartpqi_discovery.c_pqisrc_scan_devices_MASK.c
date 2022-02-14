
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_21__ {int* lunid; scalar_t__ device_type; scalar_t__ ioaccel_handle; int device_flags; int wwid; } ;
typedef TYPE_2__ reportlun_ext_entry_t ;
struct TYPE_20__ {int list_length; } ;
struct TYPE_22__ {TYPE_2__* lun_entries; TYPE_1__ header; } ;
typedef TYPE_3__ reportlun_data_ext_t ;
struct TYPE_23__ {void** target_sas_addr; } ;
typedef TYPE_4__ pqisrc_softstate_t ;
typedef int pqisrc_raid_map_t ;
struct TYPE_24__ {int is_physical_device; int expose_device; int aio_enabled; int devtype; scalar_t__ ioaccel_handle; scalar_t__ raid_map; void* sas_address; int is_obdr_device; int * scsi3addr; int is_external_raid_device; int wwid; } ;
typedef TYPE_5__ pqi_scsi_dev_t ;
typedef int boolean_t ;
typedef int bmic_ident_physdev_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,unsigned long long) ;


 scalar_t__ FUNC_6 (int*) ;

 int VAR_0 ;

 int VAR_1 ;




 int FUNC_7 (int *,int*,int) ;
 int FUNC_8 (TYPE_5__*,int ,int) ;
 void* FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*,char*,int) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_4__*,TYPE_3__**,TYPE_3__**,size_t*,size_t*) ;
 int FUNC_14 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_15 (int*) ;
 int FUNC_16 (int*) ;
 int FUNC_17 (TYPE_4__*,TYPE_5__**,int) ;

int FUNC_18(pqisrc_softstate_t *VAR_2)
{
 boolean_t VAR_3;
 int VAR_4 = VAR_0;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 uint8_t *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11 = 0;
 size_t VAR_12, VAR_13;
 reportlun_data_ext_t *VAR_14 = ((void*)0);
 reportlun_data_ext_t *VAR_15 = ((void*)0);
 reportlun_ext_entry_t *VAR_16 = ((void*)0);
 bmic_ident_physdev_t *VAR_17 = ((void*)0);
 pqi_scsi_dev_t **VAR_18 = ((void*)0);
 pqi_scsi_dev_t *VAR_19 = ((void*)0);


 FUNC_4("IN\n");

 VAR_4 = FUNC_13(VAR_2, &VAR_14, &VAR_15,
          &VAR_12, &VAR_13);

 if (VAR_4)
  goto err_out;

 VAR_9 = FUNC_0(VAR_14->header.list_length)
  / sizeof(VAR_14->lun_entries[0]);

 VAR_10 = FUNC_0(VAR_15->header.list_length)
  / sizeof(VAR_15->lun_entries[0]);

 FUNC_2("physical_cnt %d logical_cnt %d\n", VAR_9, VAR_10);

 if (VAR_9) {
  VAR_17 = FUNC_9(VAR_2, sizeof(*VAR_17));
  if (VAR_17 == ((void*)0)) {
   VAR_4 = VAR_0;
   FUNC_3("failed to allocate memory for BMIC ID PHYS Device : %d\n", VAR_4);
   goto err_out;
  }
 }
 VAR_7 = VAR_9 + VAR_10;
 VAR_18 = FUNC_9(VAR_2,
    sizeof(*VAR_18) * VAR_7);

 if (VAR_18 == ((void*)0)) {
  VAR_4 = VAR_0;
  FUNC_3("failed to allocate memory for device list : %d\n", VAR_4);
  goto err_out;
 }

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  VAR_18[VAR_5] = FUNC_9(VAR_2,
      sizeof(*VAR_18[VAR_5]));
  if (VAR_18[VAR_5] == ((void*)0)) {
   VAR_4 = VAR_0;
   FUNC_3("failed to allocate memory for device list : %d\n", VAR_4);
   VAR_11 = VAR_5;
   goto err_out;
  }
 }

 VAR_11 = VAR_7;
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {

  if (VAR_5 < VAR_9) {
   VAR_3 = 1;
   VAR_16 = &VAR_14->lun_entries[VAR_5];
  } else {
   VAR_3 = 0;
   VAR_16 =
    &VAR_15->lun_entries[VAR_5 - VAR_9];
  }

  VAR_8 = VAR_16->lunid;

  if(VAR_16->device_type == 136) {
   int VAR_20 = VAR_16->lunid[3] & 0x3f;
   VAR_2->target_sas_addr[VAR_20] = FUNC_1(VAR_16->wwid);
  }


  if (FUNC_6(VAR_8) && VAR_3
    && (VAR_16->ioaccel_handle == 0))
   continue;

  VAR_19 = VAR_18[VAR_6];
  FUNC_8(VAR_19, 0, sizeof(*VAR_19));
  FUNC_7(VAR_19->scsi3addr, VAR_8, sizeof(VAR_19->scsi3addr));
  VAR_19->wwid = VAR_16->wwid;
  VAR_19->is_physical_device = VAR_3;
  if (!VAR_3)
   VAR_19->is_external_raid_device =
    FUNC_15(VAR_8);



  VAR_4 = FUNC_12(VAR_2, VAR_19);
  if (VAR_4) {
   FUNC_5("Inquiry failed, skipping device %016llx\n",
     (unsigned long long)FUNC_1(VAR_19->scsi3addr[0]));
   FUNC_2("INQUIRY FAILED \n");
   continue;
  }
  FUNC_11(VAR_19);





  if (VAR_19->is_physical_device &&
   FUNC_6(VAR_8))
   VAR_19->expose_device = 0;
  else
   VAR_19->expose_device = 1;

  if (VAR_19->is_physical_device &&
      (VAR_16->device_flags &
       VAR_1) &&
       VAR_16->ioaccel_handle) {
   VAR_19->aio_enabled = 1;
  }
  switch (VAR_19->devtype) {
  case 131:






   if (VAR_19->is_obdr_device)
    VAR_6++;
   break;
  case 135:
  case 128:
   if (VAR_19->is_physical_device) {
    VAR_19->ioaccel_handle =
     VAR_16->ioaccel_handle;
    VAR_19->sas_address = FUNC_1(VAR_16->wwid);
    FUNC_14(VAR_2, VAR_19,
     VAR_17);
   }
   VAR_6++;
   break;
  case 134:
   if (VAR_19->is_physical_device) {
    VAR_19->sas_address = FUNC_1(VAR_16->wwid);
   }
   VAR_6++;
   break;
  case 129:
  case 133:
   VAR_6++;
   break;
  case 132:






   if (FUNC_16(VAR_8))
    VAR_6++;
   break;
  case 130:
  case 136:
   break;
  }
 }
 FUNC_2("new_dev_cnt %d\n", VAR_6);

 FUNC_17(VAR_2, VAR_18, VAR_6);

err_out:
 if (VAR_18) {
  for (VAR_5 = 0; VAR_5 < VAR_11; VAR_5++) {
   if (VAR_18[VAR_5]) {
    if(VAR_18[VAR_5]->raid_map)
     FUNC_10(VAR_2, (char *)VAR_18[VAR_5]->raid_map,
              sizeof(pqisrc_raid_map_t));
    FUNC_10(VAR_2, (char*)VAR_18[VAR_5],
            sizeof(*VAR_18[VAR_5]));
   }
  }
  FUNC_10(VAR_2, (char *)VAR_18,
         sizeof(*VAR_18) * VAR_11);
 }
 if(VAR_14)
  FUNC_10(VAR_2, (char *)VAR_14, VAR_12);
     if(VAR_15)
  FUNC_10(VAR_2, (char *)VAR_15, VAR_13);
 if (VAR_17)
  FUNC_10(VAR_2, (char *)VAR_17, sizeof(*VAR_17));

 FUNC_4("OUT \n");

 return VAR_4;
}
