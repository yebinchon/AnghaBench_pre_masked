
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_vmioctl {int IoctlCmd; scalar_t__ ObjId; int MethId; int ObjType; int Command; scalar_t__ param; int cmd; } ;
struct aac_vmi_businf_resp {scalar_t__ Status; int BusInf; } ;
struct aac_softc {int aac_dev; int aac_sim_tqh; int aac_io_lock; int scsi_method_id; } ;
struct aac_sim {int BusNumber; int * sim_dev; struct aac_softc* aac_sc; int InitiatorBusId; int TargetsPerBus; } ;
struct aac_getbusinf {int BusCount; scalar_t__* BusValid; int * InitiatorBusId; int TargetsPerBus; } ;
struct aac_fib {int * data; } ;
struct aac_ctcfg_resp {scalar_t__ Status; int param; } ;
struct aac_ctcfg {int IoctlCmd; scalar_t__ ObjId; int MethId; int ObjType; int Command; scalar_t__ param; int cmd; } ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,struct aac_sim*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct aac_softc*,struct aac_fib**) ;
 int FUNC_2 (struct aac_softc*) ;
 int FUNC_3 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 int FUNC_4 (int *,struct aac_getbusinf*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct aac_vmioctl*,int) ;
 int * FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,struct aac_sim*) ;
 int FUNC_11 (struct aac_sim*,int ) ;
 scalar_t__ FUNC_12 (int,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_15(struct aac_softc *VAR_12)
{
 struct aac_fib *VAR_13;
 struct aac_ctcfg *VAR_14;
 struct aac_ctcfg_resp *VAR_15;
 struct aac_vmioctl *VAR_16;
 struct aac_vmi_businf_resp *VAR_17;
 struct aac_getbusinf VAR_18;
 struct aac_sim *VAR_19;
 device_t VAR_20;
 int VAR_21, VAR_22, VAR_23;

 FUNC_13(&VAR_12->aac_io_lock);
 FUNC_1(VAR_12, &VAR_13);
 VAR_14 = (struct aac_ctcfg *)&VAR_13->data[0];
 FUNC_6(VAR_14, sizeof(struct aac_ctcfg));

 VAR_14->Command = VAR_9;
 VAR_14->cmd = VAR_1;
 VAR_14->param = 0;

 VAR_23 = FUNC_3(VAR_12, VAR_2, 0, VAR_13,
     sizeof(struct aac_ctcfg));
 if (VAR_23) {
  FUNC_8(VAR_12->aac_dev, "Error %d sending "
      "VM_ContainerConfig command\n", VAR_23);
  FUNC_2(VAR_12);
  FUNC_14(&VAR_12->aac_io_lock);
  return;
 }

 VAR_15 = (struct aac_ctcfg_resp *)&VAR_13->data[0];
 if (VAR_15->Status != VAR_8) {
  FUNC_8(VAR_12->aac_dev, "VM_ContainerConfig returned 0x%x\n",
      VAR_15->Status);
  FUNC_2(VAR_12);
  FUNC_14(&VAR_12->aac_io_lock);
  return;
 }

 VAR_12->scsi_method_id = VAR_15->param;

 VAR_16 = (struct aac_vmioctl *)&VAR_13->data[0];
 FUNC_6(VAR_16, sizeof(struct aac_vmioctl));

 VAR_16->Command = VAR_10;
 VAR_16->ObjType = VAR_3;
 VAR_16->MethId = VAR_12->scsi_method_id;
 VAR_16->ObjId = 0;
 VAR_16->IoctlCmd = VAR_4;

 VAR_23 = FUNC_3(VAR_12, VAR_2, 0, VAR_13,
     sizeof(struct aac_vmi_businf_resp));
 if (VAR_23) {
  FUNC_8(VAR_12->aac_dev, "Error %d sending VMIoctl command\n",
      VAR_23);
  FUNC_2(VAR_12);
  FUNC_14(&VAR_12->aac_io_lock);
  return;
 }

 VAR_17 = (struct aac_vmi_businf_resp *)&VAR_13->data[0];
 if (VAR_17->Status != VAR_8) {
  FUNC_8(VAR_12->aac_dev, "VM_Ioctl returned %d\n",
      VAR_17->Status);
  FUNC_2(VAR_12);
  FUNC_14(&VAR_12->aac_io_lock);
  return;
 }

 FUNC_4(&VAR_17->BusInf, &VAR_18, sizeof(struct aac_getbusinf));
 FUNC_2(VAR_12);
 FUNC_14(&VAR_12->aac_io_lock);

 VAR_22 = 0;
 for (VAR_21 = 0; VAR_21 < VAR_18.BusCount; VAR_21++) {
  if (VAR_18.BusValid[VAR_21] != VAR_0)
   continue;

  VAR_19 = (struct aac_sim *)FUNC_12( sizeof(struct aac_sim),
      VAR_5, VAR_6 | VAR_7);
  if (VAR_19 == ((void*)0)) {
   FUNC_8(VAR_12->aac_dev,
       "No memory to add passthrough bus %d\n", VAR_21);
   break;
  }

  VAR_20 = FUNC_7(VAR_12->aac_dev, "aacp", -1);
  if (VAR_20 == ((void*)0)) {
   FUNC_8(VAR_12->aac_dev,
       "device_add_child failed for passthrough bus %d\n",
       VAR_21);
   FUNC_11(VAR_19, VAR_5);
   break;
  }

  VAR_19->TargetsPerBus = VAR_18.TargetsPerBus;
  VAR_19->BusNumber = VAR_21;
  VAR_19->InitiatorBusId = VAR_18.InitiatorBusId[VAR_21];
  VAR_19->aac_sc = VAR_12;
  VAR_19->sim_dev = VAR_20;

  FUNC_10(VAR_20, VAR_19);
  FUNC_9(VAR_20, "SCSI Passthrough Bus");
  FUNC_0(&VAR_12->aac_sim_tqh, VAR_19, VAR_11);

  VAR_22 = 1;
 }

 if (VAR_22)
  FUNC_5(VAR_12->aac_dev);
}
