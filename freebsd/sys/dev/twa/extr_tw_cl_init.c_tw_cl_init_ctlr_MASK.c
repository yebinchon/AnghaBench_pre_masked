
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {int request_id; struct tw_cli_ctlr_context* ctlr; scalar_t__ cmd_pkt_phys; struct tw_cl_command_packet* cmd_pkt; } ;
struct tw_cli_ctlr_context {int device_id; int flags; int max_simult_reqs; int max_aens_supported; int active; struct tw_cl_event_packet* aen_queue; scalar_t__ cmd_pkt_phys; struct tw_cl_command_packet* cmd_pkt_buf; struct tw_cli_req_context* req_ctxt_buf; scalar_t__ internal_req_data_phys; int * internal_req_data; int * io_lock; int io_lock_handle; int * gen_lock; int gen_lock_handle; int sg_size_factor; int arch_id; struct tw_cl_ctlr_handle* ctlr_handle; } ;
struct tw_cl_event_packet {int dummy; } ;
struct tw_cl_ctlr_handle {struct tw_cli_ctlr_context* cl_ctlr_ctxt; } ;
struct tw_cl_command_packet {int dummy; } ;
typedef int TW_VOID ;
typedef int TW_UINT8 ;
typedef scalar_t__ TW_UINT64 ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct tw_cl_ctlr_handle*,int ,int ,int,int,int ,char*,char*,int,...) ;
 int FUNC_3 (int,struct tw_cl_ctlr_handle*,int ,char*) ;
 int FUNC_4 (struct tw_cli_ctlr_context*) ;
 int FUNC_5 (struct tw_cli_ctlr_context*) ;
 int FUNC_6 (struct tw_cli_ctlr_context*,int ) ;
 int FUNC_7 (struct tw_cli_req_context*,int ) ;
 int FUNC_8 (struct tw_cli_ctlr_context*) ;
 int FUNC_9 (struct tw_cli_ctlr_context*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct tw_cl_ctlr_handle*,char*,int *) ;
 int FUNC_12 (int *,int) ;

TW_INT32
FUNC_13(struct tw_cl_ctlr_handle *VAR_16, TW_UINT32 VAR_17,
 TW_INT32 VAR_18, TW_INT32 VAR_19, TW_INT32 VAR_20,
 TW_VOID *VAR_21, TW_VOID *VAR_22, TW_UINT64 VAR_23
 )
{
 struct tw_cli_ctlr_context *VAR_24;
 struct tw_cli_req_context *VAR_25;
 TW_UINT8 *VAR_26;
 TW_INT32 VAR_27 = VAR_15;
 TW_INT32 VAR_28;

 FUNC_3(3, VAR_16, FUNC_10(), "entered");

 if (VAR_17 & VAR_11) {
  VAR_24 = (struct tw_cli_ctlr_context *)
   (VAR_16->cl_ctlr_ctxt);
  goto start_ctlr;
 }

 if (VAR_19 > VAR_7) {
  FUNC_2(VAR_16, VAR_6,
   VAR_8,
   0x1000, 0x1, VAR_10,
   "Too many simultaneous requests to support!",
   "requested = %d, supported = %d, error = %d\n",
   VAR_19, VAR_7,
   VAR_13);
  return(VAR_13);
 }

 if ((VAR_21 == VAR_9) || (VAR_22 == VAR_9)
  ) {
  FUNC_2(VAR_16, VAR_6,
   VAR_8,
   0x1001, 0x1, VAR_10,
   "Insufficient memory for Common Layer's internal usage",
   "error = %d\n", VAR_14);
  return(VAR_14);
 }

 FUNC_12(VAR_21, sizeof(struct tw_cli_ctlr_context) +
  (sizeof(struct tw_cli_req_context) * VAR_19) +
  (sizeof(struct tw_cl_event_packet) * VAR_20));

 FUNC_12(VAR_22,
  (sizeof(struct tw_cl_command_packet) *
  VAR_19) +
  VAR_5);

 VAR_26 = (TW_UINT8 *)VAR_21;

 VAR_24 = (struct tw_cli_ctlr_context *)VAR_26;
 VAR_26 += sizeof(struct tw_cli_ctlr_context);

 VAR_16->cl_ctlr_ctxt = VAR_24;
 VAR_24->ctlr_handle = VAR_16;

 VAR_24->device_id = (TW_UINT32)VAR_18;
 VAR_24->arch_id = FUNC_0(VAR_18);
 VAR_24->flags = VAR_17;
 VAR_24->sg_size_factor = FUNC_1(VAR_18);
 VAR_24->max_simult_reqs = VAR_19;
 VAR_24->max_aens_supported = VAR_20;


 FUNC_6(VAR_24, VAR_2);
 FUNC_6(VAR_24, VAR_0);
 FUNC_6(VAR_24, VAR_3);
 FUNC_6(VAR_24, VAR_1);
 FUNC_6(VAR_24, VAR_4);


 VAR_24->gen_lock = &(VAR_24->gen_lock_handle);
 FUNC_11(VAR_16, "tw_cl_gen_lock", VAR_24->gen_lock);
 VAR_24->io_lock = &(VAR_24->io_lock_handle);
 FUNC_11(VAR_16, "tw_cl_io_lock", VAR_24->io_lock);


 VAR_24->req_ctxt_buf = (struct tw_cli_req_context *)VAR_26;
 VAR_26 += (sizeof(struct tw_cli_req_context) *
  VAR_19);

 VAR_24->cmd_pkt_buf = (struct tw_cl_command_packet *)VAR_22;
 VAR_24->cmd_pkt_phys = VAR_23;

 VAR_24->internal_req_data = (TW_UINT8 *)
  (VAR_24->cmd_pkt_buf +
  VAR_19);
 VAR_24->internal_req_data_phys = VAR_24->cmd_pkt_phys +
  (sizeof(struct tw_cl_command_packet) *
  VAR_19);

 for (VAR_28 = 0; VAR_28 < VAR_19; VAR_28++) {
  VAR_25 = &(VAR_24->req_ctxt_buf[VAR_28]);

  VAR_25->cmd_pkt = &(VAR_24->cmd_pkt_buf[VAR_28]);
  VAR_25->cmd_pkt_phys = VAR_24->cmd_pkt_phys +
   (VAR_28 * sizeof(struct tw_cl_command_packet));

  VAR_25->request_id = VAR_28;
  VAR_25->ctlr = VAR_24;


  FUNC_7(VAR_25, VAR_2);
 }


 VAR_24->aen_queue = (struct tw_cl_event_packet *)VAR_26;


start_ctlr:




 FUNC_4(VAR_24);


 if ((VAR_27 = FUNC_9(VAR_24))) {

  FUNC_2(VAR_16, VAR_6,
   VAR_8,
   0x1002, 0x1, VAR_10,
   "Controller initialization failed. Retrying...",
   "error = %d\n", VAR_27);
  if ((VAR_27 = FUNC_8(VAR_24))) {
   FUNC_2(VAR_16, VAR_6,
    VAR_8,
    0x1003, 0x1, VAR_10,
    "Controller soft reset failed",
    "error = %d\n", VAR_27);
   return(VAR_27);
  } else if ((VAR_27 = FUNC_9(VAR_24))) {
   FUNC_2(VAR_16, VAR_6,
    VAR_8,
    0x1004, 0x1, VAR_10,
    "Controller initialization retry failed",
    "error = %d\n", VAR_27);
   return(VAR_27);
  }
 }

 FUNC_5(VAR_24);


 VAR_24->active = VAR_12;
 return(VAR_27);
}
