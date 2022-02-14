
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_type; scalar_t__ sk_state; int (* sk_data_ready ) (struct sock*,int ) ;} ;
struct l2cap_conn_rsp {void* status; void* result; void* dcid; void* scid; int psm; } ;
struct l2cap_conn_req {void* status; void* result; void* dcid; void* scid; int psm; } ;
struct l2cap_chan_list {int lock; struct sock* head; } ;
struct l2cap_conn {struct l2cap_chan_list chan_list; } ;
typedef int rsp ;
typedef int req ;
struct TYPE_4__ {struct sock* parent; scalar_t__ defer_setup; } ;
struct TYPE_3__ {int ident; int scid; int dcid; int psm; struct sock* next_c; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct l2cap_conn*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct l2cap_conn*) ;
 TYPE_1__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct l2cap_conn*,int ,int ,int,struct l2cap_conn_rsp*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_12(struct l2cap_conn *VAR_11)
{
 struct l2cap_chan_list *VAR_12 = &VAR_11->chan_list;
 struct sock *VAR_13;

 FUNC_0("conn %p", VAR_11);

 FUNC_9(&VAR_12->lock);

 for (VAR_13 = VAR_12->head; VAR_13; VAR_13 = FUNC_7(VAR_13)->next_c) {
  FUNC_1(VAR_13);

  if (VAR_13->sk_type != VAR_10) {
   FUNC_2(VAR_13);
   continue;
  }

  if (VAR_13->sk_state == VAR_1) {
   if (FUNC_5(VAR_13)) {
    struct l2cap_conn_req VAR_14;
    VAR_14.scid = FUNC_4(FUNC_7(VAR_13)->scid);
    VAR_14.psm = FUNC_7(VAR_13)->psm;

    FUNC_7(VAR_13)->ident = FUNC_6(VAR_11);

    FUNC_8(VAR_11, FUNC_7(VAR_13)->ident,
     VAR_3, sizeof(VAR_14), &VAR_14);
   }
  } else if (VAR_13->sk_state == VAR_2) {
   struct l2cap_conn_rsp VAR_15;
   VAR_15.scid = FUNC_4(FUNC_7(VAR_13)->dcid);
   VAR_15.dcid = FUNC_4(FUNC_7(VAR_13)->scid);

   if (FUNC_5(VAR_13)) {
    if (FUNC_3(VAR_13)->defer_setup) {
     struct sock *VAR_16 = FUNC_3(VAR_13)->parent;
     VAR_15.result = FUNC_4(VAR_5);
     VAR_15.status = FUNC_4(VAR_8);
     VAR_16->sk_data_ready(VAR_16, 0);

    } else {
     VAR_13->sk_state = VAR_0;
     VAR_15.result = FUNC_4(VAR_6);
     VAR_15.status = FUNC_4(VAR_9);
    }
   } else {
    VAR_15.result = FUNC_4(VAR_5);
    VAR_15.status = FUNC_4(VAR_7);
   }

   FUNC_8(VAR_11, FUNC_7(VAR_13)->ident,
     VAR_4, sizeof(VAR_15), &VAR_15);
  }

  FUNC_2(VAR_13);
 }

 FUNC_10(&VAR_12->lock);
}
