
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {void* sk_state; int (* sk_data_ready ) (struct sock*,int ) ;int sk_sndtimeo; int sk_ack_backlog; } ;
struct l2cap_info_req {void* type; void* status; void* result; void* dcid; void* scid; } ;
struct l2cap_conn_rsp {void* type; void* status; void* result; void* dcid; void* scid; } ;
struct l2cap_conn_req {void* psm; int scid; } ;
struct l2cap_chan_list {int lock; } ;
struct l2cap_conn {int disc_reason; int info_state; int info_ident; int info_timer; int dst; int src; int hcon; struct l2cap_chan_list chan_list; } ;
struct l2cap_cmd_hdr {int ident; } ;
typedef int rsp ;
typedef int info ;
typedef void* __le16 ;
struct TYPE_4__ {scalar_t__ defer_setup; int dst; int src; } ;
struct TYPE_3__ {int dcid; int scid; int ident; void* psm; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,void*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct l2cap_conn*,struct sock*,struct sock*) ;
 scalar_t__ FUNC_2 (struct l2cap_chan_list*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sock*) ;
 TYPE_2__* FUNC_6 (struct sock*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_10 (struct sock*) ;
 int FUNC_11 (struct l2cap_conn*) ;
 struct sock* FUNC_12 (int ,void*,int ) ;
 TYPE_1__* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct l2cap_conn*,int ,int ,int,struct l2cap_info_req*) ;
 struct sock* FUNC_15 (int ,int *,int ,int ) ;
 int FUNC_16 (struct sock*,struct sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*,int ) ;
 int FUNC_19 (int *,scalar_t__) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*,int ) ;
 int FUNC_24 (struct sock*,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static inline int FUNC_27(struct l2cap_conn *VAR_21, struct l2cap_cmd_hdr *VAR_22, u8 *VAR_23)
{
 struct l2cap_chan_list *VAR_24 = &VAR_21->chan_list;
 struct l2cap_conn_req *VAR_25 = (struct l2cap_conn_req *) VAR_23;
 struct l2cap_conn_rsp VAR_26;
 struct sock *VAR_27, *VAR_28;
 int VAR_29, VAR_30 = VAR_13;

 u16 VAR_31 = 0, VAR_32 = FUNC_3(VAR_25->scid);
 __le16 VAR_33 = VAR_25->psm;

 FUNC_0("psm 0x%2.2x scid 0x%4.4x", VAR_33, VAR_32);


 VAR_28 = FUNC_12(VAR_3, VAR_33, VAR_21->src);
 if (!VAR_28) {
  VAR_29 = VAR_6;
  goto sendresp;
 }


 if (VAR_33 != FUNC_7(0x0001) &&
    !FUNC_8(VAR_21->hcon)) {
  VAR_21->disc_reason = 0x05;
  VAR_29 = VAR_9;
  goto response;
 }

 VAR_29 = VAR_7;


 if (FUNC_21(VAR_28)) {
  FUNC_0("backlog full %d", VAR_28->sk_ack_backlog);
  goto response;
 }

 VAR_27 = FUNC_15(FUNC_22(VAR_28), ((void*)0), VAR_0, VAR_4);
 if (!VAR_27)
  goto response;

 FUNC_25(&VAR_24->lock);


 if (FUNC_2(VAR_24, VAR_32)) {
  FUNC_26(&VAR_24->lock);
  FUNC_23(VAR_27, VAR_19);
  FUNC_17(VAR_27);
  goto response;
 }

 FUNC_9(VAR_21->hcon);

 FUNC_16(VAR_27, VAR_28);
 FUNC_4(&FUNC_6(VAR_27)->src, VAR_21->src);
 FUNC_4(&FUNC_6(VAR_27)->dst, VAR_21->dst);
 FUNC_13(VAR_27)->psm = VAR_33;
 FUNC_13(VAR_27)->dcid = VAR_32;

 FUNC_1(VAR_21, VAR_27, VAR_28);
 VAR_31 = FUNC_13(VAR_27)->scid;

 FUNC_18(VAR_27, VAR_27->sk_sndtimeo);

 FUNC_13(VAR_27)->ident = VAR_22->ident;

 if (VAR_21->info_state & VAR_14) {
  if (FUNC_10(VAR_27)) {
   if (FUNC_6(VAR_27)->defer_setup) {
    VAR_27->sk_state = VAR_2;
    VAR_29 = VAR_8;
    VAR_30 = VAR_12;
    VAR_28->sk_data_ready(VAR_28, 0);
   } else {
    VAR_27->sk_state = VAR_1;
    VAR_29 = VAR_10;
    VAR_30 = VAR_13;
   }
  } else {
   VAR_27->sk_state = VAR_2;
   VAR_29 = VAR_8;
   VAR_30 = VAR_11;
  }
 } else {
  VAR_27->sk_state = VAR_2;
  VAR_29 = VAR_8;
  VAR_30 = VAR_13;
 }

 FUNC_26(&VAR_24->lock);

response:
 FUNC_5(VAR_28);

sendresp:
 VAR_26.scid = FUNC_7(VAR_32);
 VAR_26.dcid = FUNC_7(VAR_31);
 VAR_26.result = FUNC_7(VAR_29);
 VAR_26.status = FUNC_7(VAR_30);
 FUNC_14(VAR_21, VAR_22->ident, VAR_5, sizeof(VAR_26), &VAR_26);

 if (VAR_29 == VAR_8 && VAR_30 == VAR_13) {
  struct l2cap_info_req VAR_34;
  VAR_34.type = FUNC_7(VAR_18);

  VAR_21->info_state |= VAR_15;
  VAR_21->info_ident = FUNC_11(VAR_21);

  FUNC_19(&VAR_21->info_timer, VAR_20 +
     FUNC_20(VAR_17));

  FUNC_14(VAR_21, VAR_21->info_ident,
     VAR_16, sizeof(VAR_34), &VAR_34);
 }

 return 0;
}
