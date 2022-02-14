
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_3__ {int length; int new_band_op; int old_band_op; scalar_t__ old_band_setup; void* old_band_id; scalar_t__ new_band_setup; void* new_band_id; int session_control; void* fsts_id; int element_id; } ;
struct fst_setup_req {TYPE_1__ stie; void* llt; void* dialog_token; int action; } ;
struct TYPE_4__ {scalar_t__ old_iface; scalar_t__ new_iface; void* pending_setup_req_dlgt; int fsts_id; int llt_ms; int new_peer_addr; int old_peer_addr; } ;
struct fst_session {TYPE_2__ data; int group; int id; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct fst_session* FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (struct fst_session*,int ,char*,...) ;
 int FUNC_10 (struct fst_session*,int ,int ,char*) ;
 int FUNC_11 (struct fst_session*,scalar_t__,int ,char*,int ,int ) ;
 scalar_t__ FUNC_12 (struct fst_session*) ;
 int FUNC_13 (struct fst_session*,int ,struct fst_setup_req*,int,int ) ;
 int FUNC_14 (struct fst_session*,int ,int *) ;
 int FUNC_15 (struct fst_session*) ;
 void* FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct fst_setup_req*,int ,int) ;

int FUNC_19(struct fst_session *VAR_9)
{
 struct fst_setup_req VAR_10;
 int VAR_11;
 u32 VAR_12;
 u8 VAR_13;
 struct fst_session *VAR_14;

 if (FUNC_12(VAR_9)) {
  FUNC_9(VAR_9, VAR_4, "Session in progress");
  return -VAR_0;
 }

 if (FUNC_17(VAR_9->data.old_peer_addr)) {
  FUNC_9(VAR_9, VAR_4, "No old peer MAC address");
  return -VAR_0;
 }

 if (FUNC_17(VAR_9->data.new_peer_addr)) {
  FUNC_9(VAR_9, VAR_4, "No new peer MAC address");
  return -VAR_0;
 }

 if (!VAR_9->data.old_iface) {
  FUNC_9(VAR_9, VAR_4, "No old interface defined");
  return -VAR_0;
 }

 if (!VAR_9->data.new_iface) {
  FUNC_9(VAR_9, VAR_4, "No new interface defined");
  return -VAR_0;
 }

 if (VAR_9->data.new_iface == VAR_9->data.old_iface) {
  FUNC_9(VAR_9, VAR_4,
       "Same interface set as old and new");
  return -VAR_0;
 }

 if (!FUNC_8(VAR_9->data.old_iface, VAR_9->data.old_peer_addr,
        VAR_1)) {
  FUNC_9(VAR_9, VAR_4,
       "The preset old peer address is not connected");
  return -VAR_0;
 }

 if (!FUNC_8(VAR_9->data.new_iface, VAR_9->data.new_peer_addr,
        VAR_1)) {
  FUNC_9(VAR_9, VAR_4,
       "The preset new peer address is not connected");
  return -VAR_0;
 }

 VAR_14 = FUNC_2(VAR_9->data.old_peer_addr, VAR_9->group);
 if (VAR_14) {
  FUNC_9(VAR_9, VAR_4,
       "There is another session in progress (old): %u",
       VAR_14->id);
  return -VAR_0;
 }

 VAR_14 = FUNC_2(VAR_9->data.new_peer_addr, VAR_9->group);
 if (VAR_14) {
  FUNC_9(VAR_9, VAR_4,
       "There is another session in progress (new): %u",
       VAR_14->id);
  return -VAR_0;
 }

 VAR_13 = FUNC_3(VAR_9->group);
 VAR_12 = FUNC_4(VAR_9->group);

 FUNC_18(&VAR_10, 0, sizeof(VAR_10));

 FUNC_11(VAR_9, VAR_9->data.old_iface, VAR_5,
  "initiating FST setup for %s (llt=%u ms)",
  FUNC_7(VAR_9->data.new_iface), VAR_9->data.llt_ms);

 VAR_10.action = VAR_2;
 VAR_10.dialog_token = VAR_13;
 VAR_10.llt = FUNC_16(FUNC_0(VAR_9->data.llt_ms));

 VAR_10.stie.element_id = VAR_8;
 VAR_10.stie.length = sizeof(VAR_10.stie) - 2;
 VAR_10.stie.fsts_id = FUNC_16(VAR_12);
 VAR_10.stie.session_control = FUNC_1(VAR_6, 0);

 VAR_10.stie.new_band_id = FUNC_5(VAR_9->data.new_iface);
 VAR_10.stie.new_band_op = 1;
 VAR_10.stie.new_band_setup = 0;

 VAR_10.stie.old_band_id = FUNC_5(VAR_9->data.old_iface);
 VAR_10.stie.old_band_op = 1;
 VAR_10.stie.old_band_setup = 0;

 VAR_11 = FUNC_13(VAR_9, VAR_7, &VAR_10, sizeof(VAR_10),
          FUNC_6(VAR_9->data.old_iface));
 if (!VAR_11) {
  VAR_9->data.fsts_id = VAR_12;
  VAR_9->data.pending_setup_req_dlgt = VAR_13;
  FUNC_10(VAR_9, VAR_7, VAR_5, "FST Setup Request sent");
  FUNC_14(VAR_9, VAR_3,
          ((void*)0));

  FUNC_15(VAR_9);
 }

 return VAR_11;
}
