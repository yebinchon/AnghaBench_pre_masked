
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct mptsas_devinfo {int device_info; int sas_address; int bus; int target_id; int physical_port; int phy_num; void* slot; void* enclosure_handle; void* parent_dev_handle; void* dev_handle; } ;
struct mpt_softc {int dummy; } ;
struct TYPE_9__ {scalar_t__ ExtPageLength; } ;
struct TYPE_8__ {int DeviceInfo; int SASAddress; int Bus; int TargetID; int PhysicalPort; int PhyNum; int Slot; int EnclosureHandle; int ParentDevHandle; int DevHandle; } ;
typedef TYPE_1__ SasDevicePage0_t ;
typedef TYPE_2__ ConfigExtendedPageHeader_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct mptsas_devinfo*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct mpt_softc*,int ,int ,int ,int ,TYPE_2__*,int ,int) ;
 int FUNC_8 (struct mpt_softc*,int ,scalar_t__,TYPE_2__*,TYPE_1__*,int,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct mpt_softc *VAR_8, struct mptsas_devinfo *VAR_9,
 uint32_t VAR_10, uint32_t VAR_11)
{
 ConfigExtendedPageHeader_t VAR_12;
 SasDevicePage0_t *VAR_13;
 uint64_t VAR_14;
 int VAR_15 = 0;

 FUNC_1(VAR_9, sizeof(*VAR_9));
 VAR_15 = FUNC_7(VAR_8, VAR_4, 0, 0,
           VAR_3,
           &VAR_12, 0, 10000);
 if (VAR_15)
  goto out;
 if (VAR_12.ExtPageLength == 0) {
  VAR_15 = VAR_1;
  goto out;
 }

 VAR_13 = FUNC_6(sizeof(SasDevicePage0_t), VAR_5, VAR_6|VAR_7);
 if (VAR_13 == ((void*)0)) {
  VAR_15 = VAR_0;
  goto out;
 }

 VAR_15 = FUNC_8(VAR_8, VAR_2,
         VAR_10 + VAR_11, &VAR_12, VAR_13,
         sizeof(SasDevicePage0_t), 0, 10000);
 if (VAR_15) {
  FUNC_2(VAR_13, VAR_5);
  goto out;
 }

 VAR_9->dev_handle = FUNC_3(VAR_13->DevHandle);
 VAR_9->parent_dev_handle = FUNC_3(VAR_13->ParentDevHandle);
 VAR_9->enclosure_handle = FUNC_3(VAR_13->EnclosureHandle);
 VAR_9->slot = FUNC_3(VAR_13->Slot);
 VAR_9->phy_num = VAR_13->PhyNum;
 VAR_9->physical_port = VAR_13->PhysicalPort;
 VAR_9->target_id = VAR_13->TargetID;
 VAR_9->bus = VAR_13->Bus;
 FUNC_0(&VAR_13->SASAddress, &VAR_14, sizeof(uint64_t));
 VAR_9->sas_address = FUNC_5(VAR_14);
 VAR_9->device_info = FUNC_4(VAR_13->DeviceInfo);

 FUNC_2(VAR_13, VAR_5);
out:
 return (VAR_15);
}
