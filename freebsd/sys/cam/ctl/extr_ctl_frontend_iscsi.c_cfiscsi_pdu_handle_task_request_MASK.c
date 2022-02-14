
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


struct TYPE_12__ {void* task_action; int tag_num; int tag_type; } ;
struct TYPE_10__ {int targ_lun; int targ_port; int initid; } ;
struct TYPE_11__ {TYPE_4__ nexus; int io_type; TYPE_1__* ctl_private; } ;
union ctl_io {TYPE_6__ taskio; TYPE_5__ io_hdr; } ;
struct iscsi_bhs_task_management_response {int bhstmr_flags; int bhstmr_initiator_task_tag; int bhstmr_response; int bhstmr_opcode; } ;
struct iscsi_bhs_task_management_request {int bhstmr_function; int bhstmr_initiator_task_tag; int bhstmr_referenced_task_tag; int bhstmr_lun; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;
struct cfiscsi_session {int cs_outstanding_ctl_pdus; TYPE_3__* cs_target; int cs_ctl_initid; } ;
struct TYPE_8__ {int targ_port; int ctl_pool_ref; } ;
struct TYPE_9__ {TYPE_2__ ct_port; } ;
struct TYPE_7__ {struct icl_pdu* ptr; } ;
 int VAR_0 ;
 int FUNC_0 (struct cfiscsi_session*,char*,...) ;
 int FUNC_1 (struct cfiscsi_session*,char*,...) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct cfiscsi_session* FUNC_2 (struct icl_pdu*) ;
 int FUNC_3 (int ) ;
 struct icl_pdu* FUNC_4 (struct icl_pdu*,int ) ;
 int FUNC_5 (struct icl_pdu*) ;
 int FUNC_6 (struct cfiscsi_session*) ;
 union ctl_io* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (union ctl_io*) ;
 int FUNC_10 (union ctl_io*) ;
 int FUNC_11 (union ctl_io*) ;
 int FUNC_12 (struct icl_pdu*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(struct icl_pdu *VAR_16)
{
 struct iscsi_bhs_task_management_request *VAR_17;
 struct iscsi_bhs_task_management_response *VAR_18;
 struct icl_pdu *VAR_19;
 struct cfiscsi_session *VAR_20;
 union ctl_io *VAR_21;
 int VAR_22;

 VAR_20 = FUNC_2(VAR_16);
 VAR_17 = (struct iscsi_bhs_task_management_request *)VAR_16->ip_bhs;
 VAR_21 = FUNC_7(VAR_20->cs_target->ct_port.ctl_pool_ref);
 FUNC_11(VAR_21);
 VAR_21->io_hdr.ctl_private[VAR_2].ptr = VAR_16;
 VAR_21->io_hdr.io_type = VAR_1;
 VAR_21->io_hdr.nexus.initid = VAR_20->cs_ctl_initid;
 VAR_21->io_hdr.nexus.targ_port = VAR_20->cs_target->ct_port.targ_port;
 VAR_21->io_hdr.nexus.targ_lun = FUNC_8(FUNC_3(VAR_17->bhstmr_lun));
 VAR_21->taskio.tag_type = VAR_4;

 switch (VAR_17->bhstmr_function & ~0x80) {
 case 137:



  VAR_21->taskio.task_action = VAR_5;
  VAR_21->taskio.tag_num = VAR_17->bhstmr_referenced_task_tag;
  break;
 case 136:



  VAR_21->taskio.task_action = VAR_6;
  break;
 case 135:



  VAR_21->taskio.task_action = VAR_7;
  break;
 case 133:



  VAR_21->taskio.task_action = VAR_9;
  break;
 case 128:



  VAR_21->taskio.task_action = VAR_13;
  break;
 case 129:



  VAR_21->taskio.task_action = VAR_13;
  break;
 case 131:



  VAR_21->taskio.task_action = VAR_11;
  VAR_21->taskio.tag_num = VAR_17->bhstmr_referenced_task_tag;
  break;
 case 130:



  VAR_21->taskio.task_action = VAR_12;
  break;
 case 134:



  VAR_21->taskio.task_action = VAR_8;
  break;
 case 132:



  VAR_21->taskio.task_action = VAR_10;
  break;
 default:
  FUNC_0(VAR_20, "unsupported function 0x%x",
      VAR_17->bhstmr_function & ~0x80);
  FUNC_9(VAR_21);

  VAR_19 = FUNC_4(VAR_16, VAR_15);
  if (VAR_19 == ((void*)0)) {
   FUNC_1(VAR_20, "failed to allocate memory; "
       "dropping connection");
   FUNC_12(VAR_16);
   FUNC_6(VAR_20);
   return;
  }
  VAR_18 = (struct iscsi_bhs_task_management_response *)
      VAR_19->ip_bhs;
  VAR_18->bhstmr_opcode = VAR_14;
  VAR_18->bhstmr_flags = 0x80;
  VAR_18->bhstmr_response =
      VAR_0;
  VAR_18->bhstmr_initiator_task_tag =
      VAR_17->bhstmr_initiator_task_tag;
  FUNC_12(VAR_16);
  FUNC_5(VAR_19);
  return;
 }

 FUNC_13(&VAR_20->cs_outstanding_ctl_pdus);
 VAR_22 = FUNC_10(VAR_21);
 if (VAR_22 != VAR_3) {
  FUNC_1(VAR_20, "ctl_queue() failed; error %d; "
      "dropping connection", VAR_22);
  FUNC_9(VAR_21);
  FUNC_14(&VAR_20->cs_outstanding_ctl_pdus);
  FUNC_12(VAR_16);
  FUNC_6(VAR_20);
 }
}
