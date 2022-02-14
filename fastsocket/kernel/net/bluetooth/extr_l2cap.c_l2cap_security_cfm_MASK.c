
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {scalar_t__ sk_state; } ;
struct l2cap_conn_rsp {void* status; void* result; void* dcid; void* scid; int psm; } ;
struct l2cap_conn_req {void* status; void* result; void* dcid; void* scid; int psm; } ;
struct l2cap_chan_list {int lock; struct sock* head; } ;
struct l2cap_conn {struct l2cap_chan_list chan_list; } ;
struct hci_conn {struct l2cap_conn* l2cap_data; } ;
typedef int rsp ;
typedef int req ;
typedef int __u16 ;
struct TYPE_2__ {int conf_state; int ident; int scid; int dcid; int psm; struct sock* next_c; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct l2cap_conn*) ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct l2cap_conn*,int ,int ,int,struct l2cap_conn_rsp*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct hci_conn *VAR_12, u8 VAR_13, u8 VAR_14)
{
 struct l2cap_chan_list *VAR_15;
 struct l2cap_conn *VAR_16 = VAR_12->l2cap_data;
 struct sock *VAR_17;

 if (!VAR_16)
  return 0;

 VAR_15 = &VAR_16->chan_list;

 FUNC_0("conn %p", VAR_16);

 FUNC_10(&VAR_15->lock);

 for (VAR_17 = VAR_15->head; VAR_17; VAR_17 = FUNC_6(VAR_17)->next_c) {
  FUNC_1(VAR_17);

  if (FUNC_6(VAR_17)->conf_state & VAR_6) {
   FUNC_2(VAR_17);
   continue;
  }

  if (!VAR_13 && (VAR_17->sk_state == VAR_3 ||
      VAR_17->sk_state == VAR_0)) {
   FUNC_4(VAR_17, VAR_14);
   FUNC_2(VAR_17);
   continue;
  }

  if (VAR_17->sk_state == VAR_1) {
   if (!VAR_13) {
    struct l2cap_conn_req VAR_18;
    VAR_18.scid = FUNC_3(FUNC_6(VAR_17)->scid);
    VAR_18.psm = FUNC_6(VAR_17)->psm;

    FUNC_6(VAR_17)->ident = FUNC_5(VAR_16);

    FUNC_7(VAR_16, FUNC_6(VAR_17)->ident,
     VAR_7, sizeof(VAR_18), &VAR_18);
   } else {
    FUNC_8(VAR_17);
    FUNC_9(VAR_17, VAR_5 / 10);
   }
  } else if (VAR_17->sk_state == VAR_2) {
   struct l2cap_conn_rsp VAR_19;
   __u16 VAR_20;

   if (!VAR_13) {
    VAR_17->sk_state = VAR_0;
    VAR_20 = VAR_10;
   } else {
    VAR_17->sk_state = VAR_4;
    FUNC_9(VAR_17, VAR_5 / 10);
    VAR_20 = VAR_9;
   }

   VAR_19.scid = FUNC_3(FUNC_6(VAR_17)->dcid);
   VAR_19.dcid = FUNC_3(FUNC_6(VAR_17)->scid);
   VAR_19.result = FUNC_3(VAR_20);
   VAR_19.status = FUNC_3(VAR_11);
   FUNC_7(VAR_16, FUNC_6(VAR_17)->ident,
     VAR_8, sizeof(VAR_19), &VAR_19);
  }

  FUNC_2(VAR_17);
 }

 FUNC_11(&VAR_15->lock);

 return 0;
}
