
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_27__ {int flags; int path; int target_lun; int target_id; } ;
struct TYPE_26__ {int cdb_bytes; int cdb_ptr; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; int sglist_cnt; scalar_t__ data_ptr; int sense_len; int sense_data; int cdb_len; TYPE_6__ cdb_io; } ;
union ccb {TYPE_7__ ccb_h; struct ccb_scsiio csio; } ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef int u_int16_t ;
struct TYPE_22__ {scalar_t__ gpa_len; int gpa_ofs; } ;
struct storvsc_gpa_range {void** gpa_page; TYPE_2__ gpa_range; } ;
struct TYPE_29__ {int time_out_value; int srb_flags; } ;
struct TYPE_25__ {int cdb; } ;
struct TYPE_18__ {int data_in; TYPE_9__ win8_extension; TYPE_5__ u; int cdb_len; int lun; int target_id; int path_id; int port; } ;
struct TYPE_17__ {TYPE_11__ vm_srb; } ;
struct TYPE_28__ {TYPE_10__ u; } ;
struct hv_storvsc_request {int bounce_sgl_count; int not_aligned_seg_bits; int prp_cnt; TYPE_4__* softc; TYPE_13__* bounce_sgl; TYPE_8__ vstor_packet; struct storvsc_gpa_range prp_list; int data_dmap; union ccb* ccb; int sense_info_len; int * sense_data; } ;
struct TYPE_19__ {scalar_t__ ds_addr; } ;
typedef TYPE_12__ bus_dma_segment_t ;
struct TYPE_23__ {int data_sg_cnt; int data_vaddr_cnt; int data_bio_cnt; } ;
struct TYPE_24__ {TYPE_3__ sysctl_data; int storvsc_req_dtag; } ;
struct TYPE_21__ {scalar_t__ ss_paddr; } ;
struct TYPE_20__ {TYPE_1__* sg_segs; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;



 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,union ccb*,int ,struct hv_storvsc_request*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_12__*,int,int*) ;
 int FUNC_6 (TYPE_13__*,TYPE_12__*,int,int) ;
 TYPE_13__* FUNC_7 (int,int) ;
 int VAR_18 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_11(union ccb *VAR_19, struct hv_storvsc_request *VAR_20)
{
 struct ccb_scsiio *VAR_21 = &VAR_19->csio;
 uint64_t VAR_22;
 uint32_t VAR_23;
 uint64_t VAR_24 = 0;
 int VAR_25;


 VAR_20->vstor_packet.u.vm_srb.port =
  FUNC_2(FUNC_9(VAR_19->ccb_h.path));
 VAR_20->vstor_packet.u.vm_srb.path_id =
  FUNC_1(FUNC_9(VAR_19->ccb_h.path));

 VAR_20->vstor_packet.u.vm_srb.target_id = VAR_19->ccb_h.target_id;
 VAR_20->vstor_packet.u.vm_srb.lun = VAR_19->ccb_h.target_lun;

 VAR_20->vstor_packet.u.vm_srb.cdb_len = VAR_21->cdb_len;
 if(VAR_19->ccb_h.flags & VAR_1) {
  FUNC_3(&VAR_20->vstor_packet.u.vm_srb.u.cdb, VAR_21->cdb_io.cdb_ptr,
   VAR_21->cdb_len);
 } else {
  FUNC_3(&VAR_20->vstor_packet.u.vm_srb.u.cdb, VAR_21->cdb_io.cdb_bytes,
   VAR_21->cdb_len);
 }

 if (VAR_17) {
  VAR_20->vstor_packet.u.vm_srb.win8_extension.time_out_value = 60;
  VAR_20->vstor_packet.u.vm_srb.win8_extension.srb_flags |=
   VAR_12;
 }
 switch (VAR_19->ccb_h.flags & VAR_3) {
 case 128:
  VAR_20->vstor_packet.u.vm_srb.data_in = VAR_16;
  if (VAR_17) {
   VAR_20->vstor_packet.u.vm_srb.win8_extension.srb_flags |=
    VAR_11;
  }
  break;
 case 130:
  VAR_20->vstor_packet.u.vm_srb.data_in = VAR_9;
  if (VAR_17) {
   VAR_20->vstor_packet.u.vm_srb.win8_extension.srb_flags |=
    VAR_10;
  }
  break;
 case 129:
  VAR_20->vstor_packet.u.vm_srb.data_in = VAR_15;
  if (VAR_17) {
   VAR_20->vstor_packet.u.vm_srb.win8_extension.srb_flags |=
    VAR_13;
  }
  break;
 default:
  FUNC_4("Error: unexpected data direction: 0x%x\n",
   VAR_19->ccb_h.flags & VAR_3);
  return (VAR_4);
 }

 VAR_20->sense_data = &VAR_21->sense_data;
 VAR_20->sense_info_len = VAR_21->sense_len;

 VAR_20->ccb = VAR_19;

 if (0 == VAR_21->dxfer_len) {
  return (0);
 }

 switch (VAR_19->ccb_h.flags & VAR_2) {
 case 133:
 case 131:
  VAR_25 = FUNC_0(VAR_20->softc->storvsc_req_dtag,
      VAR_20->data_dmap, VAR_19, VAR_18, VAR_20,
      VAR_0);
  if (VAR_25) {
   FUNC_10(VAR_19->ccb_h.path,
       "bus_dmamap_load_ccb failed: %d\n", VAR_25);
   return (VAR_25);
  }
  if ((VAR_19->ccb_h.flags & VAR_2) == 133)
   VAR_20->softc->sysctl_data.data_bio_cnt++;
  else
   VAR_20->softc->sysctl_data.data_vaddr_cnt++;
  break;

 case 132:
 {
  struct storvsc_gpa_range *VAR_26;
  int VAR_27 = 0;
  int VAR_28 = 0;
  int VAR_29;

  bus_dma_segment_t *VAR_30 =
      (bus_dma_segment_t *)VAR_19->csio.data_ptr;
  u_int16_t VAR_31 = VAR_19->csio.sglist_cnt;

  VAR_26 = &VAR_20->prp_list;
  VAR_26->gpa_range.gpa_len = VAR_21->dxfer_len;

  FUNC_4("Storvsc: get SG I/O operation, %d\n",
      VAR_20->vstor_packet.u.vm_srb.data_in);

  if (VAR_31 > VAR_14){
   FUNC_4("Storvsc: %d segments is too much, "
       "only support %d segments\n",
       VAR_31, VAR_14);
   return (VAR_4);
  }
  VAR_29 = FUNC_5(VAR_30,
      VAR_31, &VAR_24);
  if (VAR_29 != -1) {
   VAR_20->bounce_sgl =
       FUNC_7(VAR_31,
       VAR_20->vstor_packet.u.vm_srb.data_in);
   if (((void*)0) == VAR_20->bounce_sgl) {
    FUNC_4("Storvsc_error: "
        "create bounce buffer failed.\n");
    return (VAR_5);
   }

   VAR_20->bounce_sgl_count = VAR_31;
   VAR_20->not_aligned_seg_bits = VAR_24;





   if (VAR_16 == VAR_20->vstor_packet.u.vm_srb.data_in) {
    FUNC_6(
        VAR_20->bounce_sgl,
        VAR_30,
        VAR_31,
        VAR_20->not_aligned_seg_bits);
   }


   if (VAR_20->not_aligned_seg_bits & 0x1){
     VAR_22 =
        FUNC_8(VAR_20->bounce_sgl->sg_segs[0].ss_paddr);
   }else{
     VAR_22 =
     FUNC_8(VAR_30[0].ds_addr);
   }
   VAR_26->gpa_range.gpa_ofs = VAR_22 & VAR_6;

   VAR_23 = VAR_22 >> VAR_7;
   VAR_26->gpa_page[0] = VAR_23;

   for (VAR_27 = 1; VAR_27 < VAR_31; VAR_27++) {
    if (VAR_20->not_aligned_seg_bits & (1 << VAR_27)) {
     VAR_22 =
         FUNC_8(VAR_20->bounce_sgl->sg_segs[VAR_27].ss_paddr);
    } else {
     VAR_22 =
         FUNC_8(VAR_30[VAR_27].ds_addr);
    }

    VAR_23 = VAR_22 >> VAR_7;
    VAR_26->gpa_page[VAR_27] = VAR_23;
   }
   VAR_20->prp_cnt = VAR_27;
  } else {
   VAR_22 = FUNC_8(VAR_30[0].ds_addr);

   VAR_26->gpa_range.gpa_ofs = VAR_22 & VAR_6;

   for (VAR_27 = 0; VAR_27 < VAR_31; VAR_27++) {
    VAR_22 = FUNC_8(VAR_30[VAR_27].ds_addr);
    VAR_23 = VAR_22 >> VAR_7;
    VAR_26->gpa_page[VAR_27] = VAR_23;
   }
   VAR_20->prp_cnt = VAR_27;


   VAR_28 = VAR_22 & VAR_6;
   if (VAR_28) {

    VAR_22 =
        FUNC_8(VAR_30[VAR_27-1].ds_addr +
        VAR_8 - VAR_28);
    VAR_23 = VAR_22 >> VAR_7;
    VAR_26->gpa_page[VAR_27] = VAR_23;
    VAR_20->prp_cnt++;
   }

   VAR_20->bounce_sgl_count = 0;
  }
  VAR_20->softc->sysctl_data.data_sg_cnt++;
  break;
 }
 default:
  FUNC_4("Unknow flags: %d\n", VAR_19->ccb_h.flags);
  return(VAR_4);
 }

 return(0);
}
