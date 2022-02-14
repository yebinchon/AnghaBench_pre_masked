
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int MsgVersion; int HeaderVersion; int MaxChainDepth; int RequestFrameSize; int NumberOfPorts; int Flags; int FWImageSize; int BlockSize; int GlobalCredits; int IOCNumber; int MsgLength; } ;
struct mpt_softc {int max_seg_cnt; scalar_t__ fw_uploaded; int is_fc; int is_sas; int is_spi; scalar_t__ mpt_ini_id; int role; TYPE_2__* port_facts; TYPE_4__ ioc_facts; int * fw_image; int fw_dmat; int fw_dmap; int fw_phys; int fw_image_size; int parent_dmat; int max_cam_seg_cnt; TYPE_1__* request_pool; } ;
struct mpt_map_info {int phys; scalar_t__ error; struct mpt_softc* mpt; } ;
struct TYPE_10__ {int callout; int state; } ;
typedef TYPE_1__ request_t ;
struct TYPE_11__ {int ProtocolFlags; scalar_t__ PortSCSIID; int PortType; int MaxDevices; } ;
typedef TYPE_2__* PTR_MSG_PORT_FACTS_REPLY ;
typedef int MSG_PORT_FACTS_REPLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_19 ;
 int FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (struct mpt_softc*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mpt_softc*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int ,int ,struct mpt_map_info*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,void**,int,int *) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_12 (size_t,int ,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (struct mpt_softc*,int *) ;
 int FUNC_17 (struct mpt_softc*) ;
 int FUNC_18 (struct mpt_softc*,int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *) ;
 int FUNC_19 (struct mpt_softc*,int) ;
 int FUNC_20 (struct mpt_softc*,TYPE_1__*) ;
 int FUNC_21 (struct mpt_softc*,TYPE_4__*) ;
 int FUNC_22 (struct mpt_softc*,int ,TYPE_2__*) ;
 int FUNC_23 (struct mpt_softc*,int,char*,int,int,...) ;
 int VAR_31 ;
 int FUNC_24 (struct mpt_softc*,char*,...) ;
 int FUNC_25 (struct mpt_softc*) ;
 int FUNC_26 (struct mpt_softc*) ;
 int FUNC_27 (struct mpt_softc*,int ) ;
 int FUNC_28 (struct mpt_softc*) ;

__attribute__((used)) static int
FUNC_29(struct mpt_softc *VAR_32, int VAR_33, int VAR_34)
{
 PTR_MSG_PORT_FACTS_REPLY VAR_35;
 int VAR_36, VAR_37, VAR_38;
 size_t VAR_39;

 if (VAR_33 == VAR_19) {
  return (-1);
 }
 if (VAR_34 || FUNC_4(FUNC_25(VAR_32)) != VAR_17) {
  if (FUNC_27(VAR_32, VAR_7) != VAR_20) {
   return (FUNC_29(VAR_32, VAR_33++, 1));
  }
  VAR_34 = 0;
 }

 if (FUNC_21(VAR_32, &VAR_32->ioc_facts) != VAR_20) {
  FUNC_24(VAR_32, "mpt_get_iocfacts failed\n");
  return (FUNC_29(VAR_32, VAR_33++, 1));
 }
 FUNC_14(&VAR_32->ioc_facts);

 FUNC_24(VAR_32, "MPI Version=%d.%d.%d.%d\n",
     VAR_32->ioc_facts.MsgVersion >> 8,
     VAR_32->ioc_facts.MsgVersion & 0xFF,
     VAR_32->ioc_facts.HeaderVersion >> 8,
     VAR_32->ioc_facts.HeaderVersion & 0xFF);
 VAR_32->max_seg_cnt = FUNC_1(VAR_32) - 2;


 VAR_32->max_seg_cnt *= FUNC_2(VAR_32);


 if (VAR_32->max_seg_cnt > VAR_32->ioc_facts.MaxChainDepth) {
  FUNC_23(VAR_32, VAR_22,
      "chain depth limited to %u (from %u)\n",
      VAR_32->ioc_facts.MaxChainDepth, VAR_32->max_seg_cnt);
  VAR_32->max_seg_cnt = VAR_32->ioc_facts.MaxChainDepth;
 }


 VAR_32->max_seg_cnt *= (FUNC_3(VAR_32) - 1);




 VAR_32->max_cam_seg_cnt = FUNC_13(VAR_32->max_seg_cnt, (VAR_8 / VAR_29) + 1);


 FUNC_5(VAR_32);
 VAR_36 = FUNC_17(VAR_32);
 FUNC_0(VAR_32);

 if (VAR_36 != 0) {
  FUNC_24(VAR_32, "mpt_dma_buf_alloc() failed!\n");
  return (VAR_4);
 }

 for (VAR_38 = 0; VAR_38 < FUNC_1(VAR_32); VAR_38++) {
  request_t *VAR_40 = &VAR_32->request_pool[VAR_38];
  VAR_40->state = VAR_30;
  FUNC_16(VAR_32, &VAR_40->callout);
  FUNC_20(VAR_32, VAR_40);
 }

 FUNC_23(VAR_32, VAR_22, "Maximum Segment Count: %u, Maximum "
   "CAM Segment Count: %u\n", VAR_32->max_seg_cnt,
   VAR_32->max_cam_seg_cnt);

 FUNC_23(VAR_32, VAR_22, "MsgLength=%u IOCNumber = %d\n",
     VAR_32->ioc_facts.MsgLength, VAR_32->ioc_facts.IOCNumber);
 FUNC_23(VAR_32, VAR_22,
     "IOCFACTS: GlobalCredits=%d BlockSize=%u bytes "
     "Request Frame Size %u bytes Max Chain Depth %u\n",
     VAR_32->ioc_facts.GlobalCredits, VAR_32->ioc_facts.BlockSize,
     VAR_32->ioc_facts.RequestFrameSize << 2,
     VAR_32->ioc_facts.MaxChainDepth);
 FUNC_23(VAR_32, VAR_22, "IOCFACTS: Num Ports %d, FWImageSize %d, "
     "Flags=%#x\n", VAR_32->ioc_facts.NumberOfPorts,
     VAR_32->ioc_facts.FWImageSize, VAR_32->ioc_facts.Flags);

 VAR_39 = VAR_32->ioc_facts.NumberOfPorts * sizeof (MSG_PORT_FACTS_REPLY);
 VAR_32->port_facts = FUNC_12(VAR_39, VAR_26, VAR_27 | VAR_28);
 if (VAR_32->port_facts == ((void*)0)) {
  FUNC_24(VAR_32, "unable to allocate memory for port facts\n");
  return (VAR_5);
 }


 if ((VAR_32->ioc_facts.Flags & VAR_9) &&
     (VAR_32->fw_uploaded == 0)) {
  struct mpt_map_info VAR_41;
  FUNC_5(VAR_32);
  VAR_32->fw_image_size = VAR_32->ioc_facts.FWImageSize;
  VAR_36 = FUNC_18(VAR_32, VAR_32->parent_dmat, 1, 0,
      VAR_3, VAR_2, ((void*)0), ((void*)0),
      VAR_32->fw_image_size, 1, VAR_32->fw_image_size, 0,
      &VAR_32->fw_dmat);
  if (VAR_36 != 0) {
   FUNC_24(VAR_32, "cannot create firmware dma tag\n");
   FUNC_0(VAR_32);
   return (VAR_5);
  }
  VAR_36 = FUNC_9(VAR_32->fw_dmat,
      (void **)&VAR_32->fw_image, VAR_1 |
      VAR_0, &VAR_32->fw_dmap);
  if (VAR_36 != 0) {
   FUNC_24(VAR_32, "cannot allocate firmware memory\n");
   FUNC_6(VAR_32->fw_dmat);
   FUNC_0(VAR_32);
   return (VAR_5);
  }
  VAR_41.mpt = VAR_32;
  VAR_41.error = 0;
  FUNC_7(VAR_32->fw_dmat, VAR_32->fw_dmap,
      VAR_32->fw_image, VAR_32->fw_image_size, VAR_31, &VAR_41, 0);
  VAR_32->fw_phys = VAR_41.phys;

  FUNC_0(VAR_32);
  VAR_36 = FUNC_28(VAR_32);
  if (VAR_36 != 0) {
   FUNC_24(VAR_32, "firmware upload failed.\n");
   FUNC_8(VAR_32->fw_dmat, VAR_32->fw_dmap);
   FUNC_10(VAR_32->fw_dmat, VAR_32->fw_image,
       VAR_32->fw_dmap);
   FUNC_6(VAR_32->fw_dmat);
   VAR_32->fw_image = ((void*)0);
   return (VAR_4);
  }
  VAR_32->fw_uploaded = 1;
 }

 for (VAR_37 = 0; VAR_37 < VAR_32->ioc_facts.NumberOfPorts; VAR_37++) {
  VAR_35 = &VAR_32->port_facts[VAR_37];
  VAR_36 = FUNC_22(VAR_32, 0, VAR_35);
  if (VAR_36 != VAR_20) {
   FUNC_24(VAR_32,
       "mpt_get_portfacts on port %d failed\n", VAR_37);
   FUNC_11(VAR_32->port_facts, VAR_26);
   VAR_32->port_facts = ((void*)0);
   return (FUNC_29(VAR_32, VAR_33++, 1));
  }
  FUNC_15(VAR_35);

  if (VAR_37 > 0) {
   VAR_36 = VAR_22;
  } else {
   VAR_36 = VAR_21;
  }
  FUNC_23(VAR_32, VAR_36,
      "PORTFACTS[%d]: Type %x PFlags %x IID %d MaxDev %d\n",
      VAR_37, VAR_35->PortType, VAR_35->ProtocolFlags, VAR_35->PortSCSIID,
      VAR_35->MaxDevices);

 }




 VAR_35 = &VAR_32->port_facts[0];
 if (VAR_35->PortType == VAR_10) {
  VAR_32->is_fc = 1;
  VAR_32->is_sas = 0;
  VAR_32->is_spi = 0;
 } else if (VAR_35->PortType == VAR_13) {
  VAR_32->is_fc = 0;
  VAR_32->is_sas = 1;
  VAR_32->is_spi = 0;
 } else if (VAR_35->PortType == VAR_14) {
  VAR_32->is_fc = 0;
  VAR_32->is_sas = 0;
  VAR_32->is_spi = 1;
  if (VAR_32->mpt_ini_id == VAR_18)
   VAR_32->mpt_ini_id = VAR_35->PortSCSIID;
 } else if (VAR_35->PortType == VAR_12) {
  FUNC_24(VAR_32, "iSCSI not supported yet\n");
  return (VAR_6);
 } else if (VAR_35->PortType == VAR_11) {
  FUNC_24(VAR_32, "Inactive Port\n");
  return (VAR_6);
 } else {
  FUNC_24(VAR_32, "unknown Port Type %#x\n", VAR_35->PortType);
  return (VAR_6);
 }







 VAR_32->role = VAR_24;
 if (VAR_35->ProtocolFlags & VAR_15) {
  VAR_32->role |= VAR_23;
 }
 if (VAR_35->ProtocolFlags & VAR_16) {
  VAR_32->role |= VAR_25;
 }




 if (FUNC_19(VAR_32, 1) != VAR_20) {
  FUNC_24(VAR_32, "unable to initialize IOC\n");
  return (VAR_6);
 }







 FUNC_26(VAR_32);

 return (0);
}
