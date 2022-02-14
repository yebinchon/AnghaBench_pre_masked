
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int sense_data; } ;
struct vmscsi_req {int scsi_status; int srb_status; scalar_t__ sense_info_len; TYPE_5__ u; int transfer_len; } ;
struct TYPE_6__ {struct vmscsi_req vm_srb; } ;
struct vstor_packet {TYPE_1__ u; } ;
struct storvsc_softc {scalar_t__ hs_num_out_reqs; int hs_drain_sema; scalar_t__ hs_drain_notify; } ;
struct TYPE_7__ {int scsi_status; int srb_status; int transfer_len; } ;
struct TYPE_8__ {TYPE_2__ vm_srb; } ;
struct TYPE_9__ {TYPE_3__ u; } ;
struct hv_storvsc_request {scalar_t__ sense_info_len; int sense_data; TYPE_4__ vstor_packet; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hv_storvsc_request*) ;

__attribute__((used)) static void
FUNC_5(struct storvsc_softc *VAR_2,
      struct vstor_packet *VAR_3,
      struct hv_storvsc_request *VAR_4)
{
 struct vmscsi_req *VAR_5;

 VAR_5 = &VAR_3->u.vm_srb;





 VAR_4->vstor_packet.u.vm_srb.scsi_status = VAR_5->scsi_status;
 VAR_4->vstor_packet.u.vm_srb.srb_status = VAR_5->srb_status;
 VAR_4->vstor_packet.u.vm_srb.transfer_len = VAR_5->transfer_len;

 if (((VAR_5->scsi_status & 0xFF) == VAR_0) &&
   (VAR_5->srb_status & VAR_1)) {


  FUNC_0(VAR_5->sense_info_len <= VAR_4->sense_info_len,
    ("vm_srb->sense_info_len <= "
     "request->sense_info_len"));

  FUNC_2(VAR_4->sense_data, VAR_5->u.sense_data,
   VAR_5->sense_info_len);

  VAR_4->sense_info_len = VAR_5->sense_info_len;
 }


 FUNC_4(VAR_4);
 FUNC_1(&VAR_2->hs_num_out_reqs, 1);
 if (VAR_2->hs_drain_notify && (VAR_2->hs_num_out_reqs == 0)) {
  FUNC_3(&VAR_2->hs_drain_sema);
 }
}
