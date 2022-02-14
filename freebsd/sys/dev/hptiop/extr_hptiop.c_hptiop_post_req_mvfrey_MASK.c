
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int flags; int target_lun; int target_id; } ;
struct TYPE_10__ {int * cdb_bytes; int * cdb_ptr; } ;
struct TYPE_11__ {scalar_t__ dxfer_len; int cdb_len; TYPE_1__ cdb_io; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ csio; } ;
typedef int u_int8_t ;
typedef int u_int64_t ;
struct hpt_iopsg {int pci_address; int eot; int size; } ;
struct hpt_iop_srb {int phy_addr; int index; int timeout; int dma_map; union ccb* ccb; } ;
struct TYPE_16__ {int type; int size; int flags; int context; int result; } ;
struct hpt_iop_request_scsi_command {TYPE_7__ header; int lun; int target; scalar_t__ channel; scalar_t__ dataxfer_length; int cdb; struct hpt_iopsg* sg_list; } ;
struct TYPE_14__ {int inlist_wptr; int list_count; TYPE_4__* inlist; } ;
struct TYPE_15__ {TYPE_5__ mvfrey; } ;
struct hpt_iop_hba {TYPE_6__ u; int io_dmat; } ;
struct TYPE_17__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_8__ bus_dma_segment_t ;
struct TYPE_13__ {int addr; int intrfc_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
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
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int,int ,struct hpt_iop_hba*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_5(struct hpt_iop_hba *VAR_15,
    struct hpt_iop_srb *VAR_16,
    bus_dma_segment_t *VAR_17, int VAR_18)
{
 int VAR_19, VAR_20;
 union ccb *VAR_21 = VAR_16->ccb;
 u_int8_t *VAR_22;
 struct hpt_iop_request_scsi_command *VAR_23;
 u_int64_t VAR_24;

 VAR_23 = (struct hpt_iop_request_scsi_command *)VAR_16;
 VAR_24 = VAR_16->phy_addr;

 if (VAR_21->csio.dxfer_len && VAR_18 > 0) {
  struct hpt_iopsg *VAR_25 = VAR_23->sg_list;
  for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++, VAR_25++) {
   VAR_25->pci_address = (u_int64_t)VAR_17[VAR_19].ds_addr | 1;
   VAR_25->size = VAR_17[VAR_19].ds_len;
   VAR_25->eot = 0;
  }
  VAR_25[-1].eot = 1;
 }
 if (VAR_21->ccb_h.flags & VAR_2)
  VAR_22 = VAR_21->csio.cdb_io.cdb_ptr;
 else
  VAR_22 = VAR_21->csio.cdb_io.cdb_bytes;

 FUNC_2(VAR_22, VAR_23->cdb, VAR_21->csio.cdb_len);
 VAR_23->header.type = VAR_10;
 VAR_23->header.result = VAR_11;
 VAR_23->dataxfer_length = VAR_21->csio.dxfer_len;
 VAR_23->channel = 0;
 VAR_23->target = VAR_21->ccb_h.target_id;
 VAR_23->lun = VAR_21->ccb_h.target_lun;
 VAR_23->header.size = sizeof(struct hpt_iop_request_scsi_command)
    - sizeof(struct hpt_iopsg)
    + VAR_18 * sizeof(struct hpt_iopsg);
 if ((VAR_21->ccb_h.flags & VAR_4) == VAR_3) {
  FUNC_3(VAR_15->io_dmat,
   VAR_16->dma_map, VAR_0);
 }
 else if ((VAR_21->ccb_h.flags & VAR_4) == VAR_5)
  FUNC_3(VAR_15->io_dmat,
   VAR_16->dma_map, VAR_1);

 VAR_23->header.flags = VAR_9
      | VAR_8
      | ((VAR_24 >> 16) & 0xffff0000);
 VAR_23->header.context = ((VAR_24 & 0xffffffff) << 32 )
      | VAR_16->index << 4
      | VAR_7 | VAR_23->header.type;

 VAR_15->u.mvfrey.inlist_wptr++;
 VAR_20 = VAR_15->u.mvfrey.inlist_wptr & 0x3fff;

 if (VAR_20 == VAR_15->u.mvfrey.list_count) {
  VAR_20 = 0;
  VAR_15->u.mvfrey.inlist_wptr &= ~0x3fff;
  VAR_15->u.mvfrey.inlist_wptr ^= VAR_6;
 }

 VAR_15->u.mvfrey.inlist[VAR_20].addr = VAR_24;
 VAR_15->u.mvfrey.inlist[VAR_20].intrfc_len = (VAR_23->header.size + 3) / 4;

 FUNC_1(VAR_14, VAR_15->u.mvfrey.inlist_wptr);
 FUNC_0(VAR_14);

 if (VAR_23->header.type == VAR_10) {
  FUNC_4(&VAR_16->timeout, 20 * VAR_13, VAR_12, VAR_15);
 }
}
