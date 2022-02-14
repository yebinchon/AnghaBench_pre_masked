
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int cdb_len; int cdb; void* tag_type; int tag_num; } ;
struct TYPE_10__ {int targ_lun; int targ_port; int initid; } ;
struct TYPE_11__ {TYPE_4__ nexus; int io_type; TYPE_1__* ctl_private; } ;
union ctl_io {TYPE_6__ scsiio; TYPE_5__ io_hdr; } ;
struct iscsi_bhs_scsi_command {int bhssc_flags; int bhssc_cdb; int bhssc_initiator_task_tag; int bhssc_lun; } ;
struct icl_pdu {scalar_t__ ip_data_len; scalar_t__ ip_bhs; } ;
struct cfiscsi_session {int cs_immediate_data; int cs_outstanding_ctl_pdus; TYPE_3__* cs_target; int cs_ctl_initid; } ;
struct TYPE_8__ {int targ_port; int ctl_pool_ref; } ;
struct TYPE_9__ {TYPE_2__ ct_port; } ;
struct TYPE_7__ {struct icl_pdu* ptr; } ;


 int VAR_0 ;





 int FUNC_0 (struct cfiscsi_session*,char*,...) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 struct cfiscsi_session* FUNC_1 (struct icl_pdu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cfiscsi_session*) ;
 union ctl_io* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union ctl_io*) ;
 int FUNC_7 (union ctl_io*) ;
 int FUNC_8 (union ctl_io*) ;
 int FUNC_9 (struct icl_pdu*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct icl_pdu *VAR_9)
{
 struct iscsi_bhs_scsi_command *VAR_10;
 struct cfiscsi_session *VAR_11;
 union ctl_io *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_1(VAR_9);
 VAR_10 = (struct iscsi_bhs_scsi_command *)VAR_9->ip_bhs;



 if (VAR_9->ip_data_len > 0 && VAR_11->cs_immediate_data == 0) {
  FUNC_0(VAR_11, "unsolicited data with "
      "ImmediateData=No; dropping connection");
  FUNC_9(VAR_9);
  FUNC_3(VAR_11);
  return;
 }
 VAR_12 = FUNC_4(VAR_11->cs_target->ct_port.ctl_pool_ref);
 FUNC_8(VAR_12);
 VAR_12->io_hdr.ctl_private[VAR_2].ptr = VAR_9;
 VAR_12->io_hdr.io_type = VAR_1;
 VAR_12->io_hdr.nexus.initid = VAR_11->cs_ctl_initid;
 VAR_12->io_hdr.nexus.targ_port = VAR_11->cs_target->ct_port.targ_port;
 VAR_12->io_hdr.nexus.targ_lun = FUNC_5(FUNC_2(VAR_10->bhssc_lun));
 VAR_12->scsiio.tag_num = VAR_10->bhssc_initiator_task_tag;
 switch ((VAR_10->bhssc_flags & VAR_0)) {
 case 128:
  VAR_12->scsiio.tag_type = VAR_8;
  break;
 case 129:
  VAR_12->scsiio.tag_type = VAR_7;
  break;
 case 130:
         VAR_12->scsiio.tag_type = VAR_6;
  break;
 case 131:
         VAR_12->scsiio.tag_type = VAR_5;
  break;
 case 132:
  VAR_12->scsiio.tag_type = VAR_4;
  break;
 default:
  VAR_12->scsiio.tag_type = VAR_8;
  FUNC_0(VAR_11, "unhandled tag type %d",
      VAR_10->bhssc_flags & VAR_0);
  break;
 }
 VAR_12->scsiio.cdb_len = sizeof(VAR_10->bhssc_cdb);
 FUNC_10(VAR_12->scsiio.cdb, VAR_10->bhssc_cdb, sizeof(VAR_10->bhssc_cdb));
 FUNC_11(&VAR_11->cs_outstanding_ctl_pdus);
 VAR_13 = FUNC_7(VAR_12);
 if (VAR_13 != VAR_3) {
  FUNC_0(VAR_11, "ctl_queue() failed; error %d; "
      "dropping connection", VAR_13);
  FUNC_6(VAR_12);
  FUNC_12(&VAR_11->cs_outstanding_ctl_pdus);
  FUNC_9(VAR_9);
  FUNC_3(VAR_11);
 }
}
