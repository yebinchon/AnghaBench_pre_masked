
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int32_t ;
struct cam_sim {int dummy; } ;
struct aac_vmioctl {int * IoctlBuf; int IoctlCmd; scalar_t__ ObjId; int MethId; int ObjType; int Command; } ;
struct aac_softc {int aac_dev; int scsi_method_id; } ;
struct aac_resetbus {int BusNumber; } ;
struct aac_fib {int * data; } ;
struct aac_cam {TYPE_1__* inf; } ;
struct TYPE_2__ {int BusNumber; struct aac_softc* aac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aac_softc*,struct aac_fib**) ;
 int FUNC_1 (struct aac_softc*) ;
 int FUNC_2 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 int FUNC_3 (struct aac_vmioctl*,int) ;
 scalar_t__ FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static u_int32_t
FUNC_7(struct cam_sim *VAR_6, union ccb *VAR_7)
{
 struct aac_fib *VAR_8;
 struct aac_softc *VAR_9;
 struct aac_cam *VAR_10;
 struct aac_vmioctl *VAR_11;
 struct aac_resetbus *VAR_12;
 int VAR_13;

 VAR_10 = (struct aac_cam *)FUNC_4(VAR_6);
 VAR_9 = VAR_10->inf->aac_sc;

 if (VAR_9 == ((void*)0)) {
  FUNC_6("aac: Null sc?\n");
  return (VAR_0);
 }

 FUNC_0(VAR_9, &VAR_8);

 VAR_11 = (struct aac_vmioctl *)&VAR_8->data[0];
 FUNC_3(VAR_11, sizeof(struct aac_vmioctl));

 VAR_11->Command = VAR_5;
 VAR_11->ObjType = VAR_3;
 VAR_11->MethId = VAR_9->scsi_method_id;
 VAR_11->ObjId = 0;
 VAR_11->IoctlCmd = VAR_4;

 VAR_12 = (struct aac_resetbus *)&VAR_11->IoctlBuf[0];
 VAR_12->BusNumber = VAR_10->inf->BusNumber;

 VAR_13 = FUNC_2(VAR_9, VAR_2, 0, VAR_8,
     sizeof(struct aac_vmioctl));
 if (VAR_13) {
  FUNC_5(VAR_9->aac_dev,"Error %d sending ResetBus command\n",
      VAR_13);
  FUNC_1(VAR_9);
  return (VAR_0);
 }

 FUNC_1(VAR_9);
 return (VAR_1);
}
