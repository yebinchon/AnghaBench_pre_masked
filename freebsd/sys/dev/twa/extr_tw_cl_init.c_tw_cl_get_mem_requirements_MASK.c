
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {int dummy; } ;
struct tw_cli_ctlr_context {int dummy; } ;
struct tw_cl_event_packet {int dummy; } ;
struct tw_cl_ctlr_handle {int dummy; } ;
struct tw_cl_command_packet {int dummy; } ;
typedef int TW_UINT32 ;
typedef scalar_t__ TW_INT32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct tw_cl_ctlr_handle*,int ,int ,int,int,int ,char*,char*,scalar_t__,scalar_t__,scalar_t__) ;

TW_INT32
FUNC_3(struct tw_cl_ctlr_handle *VAR_7,
 TW_UINT32 VAR_8, TW_INT32 VAR_9, TW_INT32 VAR_10,
 TW_INT32 VAR_11, TW_UINT32 *VAR_12, TW_UINT32 *VAR_13,
 TW_UINT32 *VAR_14, TW_UINT32 *VAR_15
 )
{
 if (VAR_9 == 0)
  VAR_9 = VAR_1;

 if (VAR_10 > VAR_3) {
  FUNC_2(VAR_7, VAR_2,
   VAR_4,
   0x1000, 0x1, VAR_5,
   "Too many simultaneous requests to support!",
   "requested = %d, supported = %d, error = %d\n",
   VAR_10, VAR_3,
   VAR_6);
  return(VAR_6);
 }

 *VAR_12 = FUNC_0(VAR_9);
 *VAR_13 = FUNC_1(VAR_9);







 *VAR_14 = sizeof(struct tw_cli_ctlr_context) +
  (sizeof(struct tw_cli_req_context) * VAR_10) +
  (sizeof(struct tw_cl_event_packet) * VAR_11);
 *VAR_15 = (sizeof(struct tw_cl_command_packet) *
  (VAR_10)) + (VAR_0);

 return(0);
}
