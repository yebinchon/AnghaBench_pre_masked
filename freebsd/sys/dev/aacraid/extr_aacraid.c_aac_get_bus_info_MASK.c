
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_vmioctl {int IoctlCmd; scalar_t__ ObjId; int MethId; int ObjType; int Command; scalar_t__ param; int cmd; } ;
struct aac_vmi_businf_resp {scalar_t__ Status; int BusInf; } ;
struct aac_softc {int aac_sim_tqh; int aac_dev; int aac_io_lock; int scsi_method_id; } ;
struct aac_sim {int BusNumber; int InitiatorBusId; int * aac_cam; int * sim_dev; struct aac_softc* aac_sc; int BusType; int TargetsPerBus; } ;
struct aac_getbusinf {int BusCount; scalar_t__* BusValid; int TargetsPerBus; } ;
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
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,struct aac_sim*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct aac_softc*,struct aac_fib**) ;
 int FUNC_2 (struct aac_softc*) ;
 int FUNC_3 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 int FUNC_4 (int *,struct aac_getbusinf*,int) ;
 int FUNC_5 (struct aac_vmioctl*,int) ;
 int * FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,struct aac_sim*) ;
 int FUNC_10 (struct aac_sim*,int ) ;
 scalar_t__ FUNC_11 (int,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_14(struct aac_softc *VAR_13)
{
 struct aac_fib *VAR_14;
 struct aac_ctcfg *VAR_15;
 struct aac_ctcfg_resp *VAR_16;
 struct aac_vmioctl *VAR_17;
 struct aac_vmi_businf_resp *VAR_18;
 struct aac_getbusinf VAR_19;
 struct aac_sim *VAR_20;
 device_t VAR_21;
 int VAR_22, VAR_23;

 FUNC_12(&VAR_13->aac_io_lock);
 FUNC_1(VAR_13, &VAR_14);
 VAR_15 = (struct aac_ctcfg *)&VAR_14->data[0];
 FUNC_5(VAR_15, sizeof(struct aac_ctcfg));

 VAR_15->Command = VAR_10;
 VAR_15->cmd = VAR_1;
 VAR_15->param = 0;

 VAR_23 = FUNC_3(VAR_13, VAR_2, 0, VAR_14,
     sizeof(struct aac_ctcfg));
 if (VAR_23) {
  FUNC_7(VAR_13->aac_dev, "Error %d sending "
      "VM_ContainerConfig command\n", VAR_23);
  FUNC_2(VAR_13);
  FUNC_13(&VAR_13->aac_io_lock);
  return;
 }

 VAR_16 = (struct aac_ctcfg_resp *)&VAR_14->data[0];
 if (VAR_16->Status != VAR_9) {
  FUNC_7(VAR_13->aac_dev, "VM_ContainerConfig returned 0x%x\n",
      VAR_16->Status);
  FUNC_2(VAR_13);
  FUNC_13(&VAR_13->aac_io_lock);
  return;
 }

 VAR_13->scsi_method_id = VAR_16->param;

 VAR_17 = (struct aac_vmioctl *)&VAR_14->data[0];
 FUNC_5(VAR_17, sizeof(struct aac_vmioctl));

 VAR_17->Command = VAR_11;
 VAR_17->ObjType = VAR_3;
 VAR_17->MethId = VAR_13->scsi_method_id;
 VAR_17->ObjId = 0;
 VAR_17->IoctlCmd = VAR_4;

 VAR_23 = FUNC_3(VAR_13, VAR_2, 0, VAR_14,
     sizeof(struct aac_vmi_businf_resp));
 if (VAR_23) {
  FUNC_7(VAR_13->aac_dev, "Error %d sending VMIoctl command\n",
      VAR_23);
  FUNC_2(VAR_13);
  FUNC_13(&VAR_13->aac_io_lock);
  return;
 }

 VAR_18 = (struct aac_vmi_businf_resp *)&VAR_14->data[0];
 if (VAR_18->Status != VAR_9) {
  FUNC_7(VAR_13->aac_dev, "VM_Ioctl returned %d\n",
      VAR_18->Status);
  FUNC_2(VAR_13);
  FUNC_13(&VAR_13->aac_io_lock);
  return;
 }

 FUNC_4(&VAR_18->BusInf, &VAR_19, sizeof(struct aac_getbusinf));
 FUNC_2(VAR_13);
 FUNC_13(&VAR_13->aac_io_lock);

 for (VAR_22 = 0; VAR_22 < VAR_19.BusCount; VAR_22++) {
  if (VAR_19.BusValid[VAR_22] != VAR_0)
   continue;

  VAR_20 = (struct aac_sim *)FUNC_11( sizeof(struct aac_sim),
      VAR_5, VAR_6 | VAR_7);
  if (VAR_20 == ((void*)0)) {
   FUNC_7(VAR_13->aac_dev,
       "No memory to add passthrough bus %d\n", VAR_22);
   break;
  }

  VAR_21 = FUNC_6(VAR_13->aac_dev, "aacraidp", -1);
  if (VAR_21 == ((void*)0)) {
   FUNC_7(VAR_13->aac_dev,
       "device_add_child failed for passthrough bus %d\n",
       VAR_22);
   FUNC_10(VAR_20, VAR_5);
   break;
  }

  VAR_20->TargetsPerBus = VAR_19.TargetsPerBus;
  VAR_20->BusNumber = VAR_22+1;
  VAR_20->BusType = VAR_8;
  VAR_20->InitiatorBusId = -1;
  VAR_20->aac_sc = VAR_13;
  VAR_20->sim_dev = VAR_21;
  VAR_20->aac_cam = ((void*)0);

  FUNC_9(VAR_21, VAR_20);
  FUNC_8(VAR_21, "SCSI Passthrough Bus");
  FUNC_0(&VAR_13->aac_sim_tqh, VAR_20, VAR_12);
 }
}
