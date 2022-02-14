
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vf_sw_info ;
typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef scalar_t__ u8 ;
struct TYPE_11__ {char* eth_fp_hsi_major; int capabilities; void* eth_fp_hsi_minor; int fw_engineering; int fw_revision; int fw_minor; int fw_major; int driver_version; int os_type; int opaque_fid; } ;
struct vf_pf_resc_request {int num_cids; int num_vlan_filters; int num_mac_filters; void* num_sbs; void* num_txqs; void* num_rxqs; } ;
struct vfpf_acquire_tlv {TYPE_3__ vfdev_info; int bulletin_size; int bulletin_addr; struct vf_pf_resc_request resc_request; } ;
struct pf_vf_pfdev_info {int capabilities; char* major_fp_hsi; int minor_fp_hsi; int chip_num; scalar_t__ chip_rev; int dev_type; } ;
struct TYPE_13__ {scalar_t__ num_txqs; scalar_t__ num_rxqs; scalar_t__ num_cids; } ;
struct TYPE_12__ {scalar_t__ status; } ;
struct pfvf_acquire_resp_tlv {struct pf_vf_pfdev_info pfdev_info; int bulletin_size; TYPE_5__ resc; TYPE_4__ hdr; } ;
struct TYPE_10__ {int size; int phys; } ;
struct ecore_vf_iov {int b_pre_fp_hsi; TYPE_2__ bulletin; int acquire_resp; struct ecore_vf_acquire_sw_info* pf2vf_reply; int offset; scalar_t__ b_doorbell_bar; } ;
struct ecore_vf_acquire_sw_info {int driver_version; int os_type; struct pfvf_acquire_resp_tlv acquire_resp; } ;
struct TYPE_9__ {int opaque_fid; } ;
struct ecore_hwfn {TYPE_7__* p_dev; TYPE_1__ hw_info; struct ecore_vf_iov* vf_iov_info; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_14__ {int chip_num; int num_hwfns; scalar_t__ chip_rev; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (struct ecore_hwfn*,char*,scalar_t__) ;
 int FUNC_2 (struct ecore_hwfn*,char*,...) ;
 int FUNC_3 (struct ecore_hwfn*,int,char*,...) ;
 int FUNC_4 (struct ecore_hwfn*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (int *,struct pfvf_acquire_resp_tlv*,int) ;
 int FUNC_8 (struct ecore_vf_acquire_sw_info*,int ,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct vf_pf_resc_request*,struct ecore_vf_acquire_sw_info*) ;
 int FUNC_10 (struct ecore_hwfn*,TYPE_5__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (struct ecore_hwfn*,scalar_t__*,int) ;
 int FUNC_13 (struct ecore_hwfn*,struct vf_pf_resc_request*,TYPE_5__*) ;
 struct vfpf_acquire_tlv* FUNC_14 (struct ecore_hwfn*,int ,int) ;
 int FUNC_15 (struct ecore_hwfn*,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_16(struct ecore_hwfn *VAR_28)
{
 struct ecore_vf_iov *VAR_29 = VAR_28->vf_iov_info;
 struct pfvf_acquire_resp_tlv *VAR_30 = &VAR_29->pf2vf_reply->acquire_resp;
 struct pf_vf_pfdev_info *VAR_31 = &VAR_30->pfdev_info;
 struct ecore_vf_acquire_sw_info VAR_32;
 struct vf_pf_resc_request *VAR_33;
 bool VAR_34 = 0;
 struct vfpf_acquire_tlv *VAR_35;
 int VAR_36 = 0;
 enum _ecore_status_t VAR_37 = VAR_10;
 int VAR_38;


 VAR_35 = FUNC_14(VAR_28, VAR_0, sizeof(*VAR_35));
 VAR_33 = &VAR_35->resc_request;


 VAR_35->vfdev_info.opaque_fid = VAR_28->hw_info.opaque_fid;

 VAR_33->num_rxqs = VAR_8;
 VAR_33->num_txqs = VAR_8;
 VAR_33->num_sbs = VAR_8;
 VAR_33->num_mac_filters = VAR_5;
 VAR_33->num_vlan_filters = VAR_6;
 VAR_33->num_cids = VAR_3;

 FUNC_8(&VAR_32, 0, sizeof(VAR_32));
 FUNC_9(VAR_28, &VAR_35->resc_request, &VAR_32);

 VAR_35->vfdev_info.os_type = VAR_32.os_type;
 VAR_35->vfdev_info.driver_version = VAR_32.driver_version;
 VAR_35->vfdev_info.fw_major = VAR_14;
 VAR_35->vfdev_info.fw_minor = VAR_15;
 VAR_35->vfdev_info.fw_revision = VAR_16;
 VAR_35->vfdev_info.fw_engineering = VAR_13;
 VAR_35->vfdev_info.eth_fp_hsi_major = VAR_11;
 VAR_35->vfdev_info.eth_fp_hsi_minor = VAR_12;


 VAR_35->vfdev_info.capabilities |= VAR_23;


 if (VAR_29->b_doorbell_bar) {
  VAR_35->vfdev_info.capabilities |= VAR_24 |
      VAR_26;
  VAR_33->num_cids = VAR_4;
 }


 VAR_35->bulletin_addr = VAR_29->bulletin.phys;
 VAR_35->bulletin_size = VAR_29->bulletin.size;


 FUNC_11(&VAR_29->offset,
        VAR_1,
        sizeof(struct channel_list_end_tlv));

 while (!VAR_34) {
  FUNC_4(VAR_28, VAR_9, "attempting to acquire resources\n");


  FUNC_8(VAR_29->pf2vf_reply, 0,
       sizeof(union pfvf_tlvs));


  VAR_37 = FUNC_12(VAR_28,
           &VAR_30->hdr.status,
           sizeof(*VAR_30));
  if (VAR_37 != VAR_10)
   goto exit;


  FUNC_7(&VAR_29->acquire_resp,
       VAR_30,
       sizeof(VAR_29->acquire_resp));

  VAR_36++;

  if (VAR_30->hdr.status == VAR_22) {

   if (!(VAR_30->pfdev_info.capabilities &
         VAR_18)) {




    VAR_35->vfdev_info.capabilities |=
     VAR_25;
   }
   FUNC_4(VAR_28, VAR_9, "resources acquired\n");
   VAR_34 = 1;
  }
  else if (VAR_30->hdr.status == VAR_21 &&
    VAR_36 < VAR_27) {
   FUNC_13(VAR_28, VAR_33,
       &VAR_30->resc);

  } else if (VAR_30->hdr.status == VAR_20) {
   if (VAR_31->major_fp_hsi &&
       (VAR_31->major_fp_hsi != VAR_11)) {
    FUNC_3(VAR_28, 0,
       "PF uses an incompatible fastpath HSI %02x.%02x [VF requires %02x.%02x]. Please change to a VF driver using %02x.xx.\n",
       VAR_31->major_fp_hsi,
       VAR_31->minor_fp_hsi,
       VAR_11, VAR_12,
       VAR_31->major_fp_hsi);
    VAR_37 = VAR_7;
    goto exit;
   }

   if (!VAR_31->major_fp_hsi) {
    if (VAR_35->vfdev_info.capabilities &
        VAR_25) {
     FUNC_3(VAR_28, 0,
        "PF uses very old drivers. Please change to a VF driver using no later than 8.8.x.x.\n");
     VAR_37 = VAR_7;
     goto exit;
    } else {
     FUNC_2(VAR_28,
      "PF is old - try re-acquire to see if it supports FW-version override\n");
     VAR_35->vfdev_info.capabilities |=
      VAR_25;
     continue;
    }
   }




   FUNC_3(VAR_28, 0,
      "PF rejected acquisition by VF\n");
   VAR_37 = VAR_7;
   goto exit;
  } else {
   FUNC_1(VAR_28, "PF returned error %d to VF acquisition request\n",
          VAR_30->hdr.status);
   VAR_37 = VAR_2;
   goto exit;
  }
 }


 if (VAR_35->vfdev_info.capabilities &
     VAR_25)
  VAR_29->b_pre_fp_hsi = 1;





 if (!(VAR_30->pfdev_info.capabilities &
       VAR_19))
  VAR_30->resc.num_cids = VAR_30->resc.num_rxqs +
          VAR_30->resc.num_txqs;


 VAR_37 = FUNC_10(VAR_28, &VAR_30->resc);
 if (VAR_37) {
  FUNC_3(VAR_28, 1,
     "VF_UPDATE_ACQUIRE_RESC_RESP Failed: status = 0x%x.\n",
     VAR_37);
  VAR_37 = VAR_2;
  goto exit;
 }



 VAR_29->bulletin.size = VAR_30->bulletin_size;


 VAR_28->p_dev->type = VAR_30->pfdev_info.dev_type;
 VAR_28->p_dev->chip_rev = (u8) VAR_30->pfdev_info.chip_rev;

 FUNC_2(VAR_28, "Chip details - %s%d\n",
  FUNC_5(VAR_28->p_dev) ? "BB" : "AH",
  FUNC_0(VAR_28->p_dev) ? 0 : 1);

 VAR_28->p_dev->chip_num = VAR_31->chip_num & 0xffff;


 if (FUNC_6(VAR_28)) {
  if (VAR_30->pfdev_info.capabilities & VAR_17) {
   FUNC_3(VAR_28, 0, "100g VF\n");
   VAR_28->p_dev->num_hwfns = 2;
  }
 }

 VAR_38 = VAR_12;

 if (!VAR_29->b_pre_fp_hsi &&
     (VAR_38) &&
     (VAR_30->pfdev_info.minor_fp_hsi < VAR_12)) {
  FUNC_2(VAR_28,
   "PF is using older fastpath HSI; %02x.%02x is configured\n",
   VAR_11,
   VAR_30->pfdev_info.minor_fp_hsi);
 }

exit:
 FUNC_15(VAR_28, VAR_37);

 return VAR_37;
}
