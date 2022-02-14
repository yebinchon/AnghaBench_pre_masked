
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {int flags; scalar_t__ state; scalar_t__ cmd_pkt_phys; scalar_t__ orig_req; struct tw_cli_ctlr_context* ctlr; } ;
struct tw_cli_ctlr_context {scalar_t__ device_id; int flags; int io_lock; struct tw_cl_ctlr_handle* ctlr_handle; } ;
struct tw_cl_req_packet {int flags; } ;
struct tw_cl_ctlr_handle {int dummy; } ;
struct tw_cl_command_header {int dummy; } ;
typedef int TW_UINT64 ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tw_cl_ctlr_handle*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct tw_cl_ctlr_handle*,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int,struct tw_cl_ctlr_handle*,int ,char*) ;
 int FUNC_3 (struct tw_cli_req_context*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct tw_cl_ctlr_handle*,int ) ;
 int FUNC_6 (struct tw_cl_ctlr_handle*,int ) ;
 int FUNC_7 (struct tw_cl_ctlr_handle*,int ,int,int) ;

TW_INT32
FUNC_8(struct tw_cli_req_context *VAR_15)
{
 struct tw_cli_ctlr_context *VAR_16 = VAR_15->ctlr;
 struct tw_cl_ctlr_handle *VAR_17 = VAR_16->ctlr_handle;
 TW_UINT32 VAR_18;
 TW_INT32 VAR_19 = 0;

 FUNC_2(10, VAR_17, FUNC_4(), "entered");


 FUNC_6(VAR_17, VAR_16->io_lock);


 if ((VAR_16->device_id == VAR_11) ||
     (VAR_16->device_id == VAR_12))
  FUNC_7(VAR_17,
     VAR_2,
     (TW_UINT32)(VAR_15->cmd_pkt_phys + sizeof(struct tw_cl_command_header)), 4);

 VAR_18 = FUNC_0(VAR_17);
 if (VAR_18 & VAR_4) {
  struct tw_cl_req_packet *VAR_20 =
   (struct tw_cl_req_packet *)(VAR_15->orig_req);

  FUNC_2(7, VAR_17, FUNC_4(),
   "Cmd queue full");

  if ((VAR_15->flags & VAR_7)
   || ((VAR_20) &&
   (VAR_20->flags & VAR_13))
   ) {
   if (VAR_15->state != VAR_9) {
    FUNC_2(2, VAR_17,
     FUNC_4(),
     "pending internal/ioctl request");
    VAR_15->state = VAR_9;
    FUNC_3(VAR_15, VAR_6);

    FUNC_1(VAR_17,
     VAR_3);
   } else
    VAR_19 = VAR_14;
  } else {
   VAR_19 = VAR_14;
  }
 } else {
  FUNC_2(10, VAR_17, FUNC_4(),
   "Submitting command");


  VAR_15->state = VAR_8;
  FUNC_3(VAR_15, VAR_5);

  if ((VAR_16->device_id == VAR_11) ||
      (VAR_16->device_id == VAR_12)) {

   FUNC_7(VAR_17,
      VAR_1,
      (TW_UINT32)(((TW_UINT64)(VAR_15->cmd_pkt_phys + sizeof(struct tw_cl_command_header)))>>32), 4);
  } else {
   if (VAR_16->flags & VAR_10) {

    FUNC_7(VAR_17,
       VAR_2,
       (TW_UINT32)(VAR_15->cmd_pkt_phys + sizeof(struct tw_cl_command_header)), 4);
    FUNC_7(VAR_17,
       VAR_1,
       (TW_UINT32)(((TW_UINT64)(VAR_15->cmd_pkt_phys + sizeof(struct tw_cl_command_header)))>>32), 4);
   } else
    FUNC_7(VAR_17,
       VAR_0,
       (TW_UINT32)(VAR_15->cmd_pkt_phys + sizeof(struct tw_cl_command_header)), 4);
  }
 }

 FUNC_5(VAR_17, VAR_16->io_lock);

 return(VAR_19);
}
