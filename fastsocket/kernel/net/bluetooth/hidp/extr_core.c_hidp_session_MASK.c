
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wait_queue_t ;
struct sock {scalar_t__ sk_state; int * sk_sleep; void* sk_err; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct hidp_session {TYPE_3__* ctrl_sock; TYPE_2__* intr_sock; TYPE_5__* hid; TYPE_4__* input; int terminate; } ;
struct TYPE_10__ {int vendor; int product; } ;
struct TYPE_6__ {int vendor; int product; } ;
struct TYPE_9__ {TYPE_1__ id; } ;
struct TYPE_8__ {int file; struct sock* sk; } ;
struct TYPE_7__ {int file; struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct hidp_session*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hidp_session*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct hidp_session*) ;
 int FUNC_9 (struct hidp_session*) ;
 int FUNC_10 (struct hidp_session*,struct sk_buff*) ;
 int FUNC_11 (struct hidp_session*,struct sk_buff*) ;
 int FUNC_12 (struct hidp_session*) ;
 int VAR_6 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (struct hidp_session*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int) ;
 struct sk_buff* FUNC_21 (int *) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int,int ) ;

__attribute__((used)) static int FUNC_25(void *VAR_7)
{
 struct hidp_session *VAR_8 = VAR_7;
 struct sock *VAR_9 = VAR_8->ctrl_sock->sk;
 struct sock *VAR_10 = VAR_8->intr_sock->sk;
 struct sk_buff *VAR_11;
 int VAR_12 = 0x0000, VAR_13 = 0x0000;
 wait_queue_t VAR_14, VAR_15;

 FUNC_0("session %p", VAR_8);

 if (VAR_8->input) {
  VAR_12 = VAR_8->input->id.vendor;
  VAR_13 = VAR_8->input->id.product;
 }

 if (VAR_8->hid) {
  VAR_12 = VAR_8->hid->vendor;
  VAR_13 = VAR_8->hid->product;
 }

 FUNC_4("khidpd_%04x%04x", VAR_12, VAR_13);
 FUNC_20(VAR_5, -15);

 FUNC_13(&VAR_14, VAR_5);
 FUNC_13(&VAR_15, VAR_5);
 FUNC_2(VAR_9->sk_sleep, &VAR_14);
 FUNC_2(VAR_10->sk_sleep, &VAR_15);
 while (!FUNC_3(&VAR_8->terminate)) {
  FUNC_19(VAR_3);

  if (VAR_9->sk_state != VAR_1 || VAR_10->sk_state != VAR_1)
   break;

  while ((VAR_11 = FUNC_21(&VAR_9->sk_receive_queue))) {
   FUNC_22(VAR_11);
   FUNC_10(VAR_8, VAR_11);
  }

  while ((VAR_11 = FUNC_21(&VAR_10->sk_receive_queue))) {
   FUNC_22(VAR_11);
   FUNC_11(VAR_8, VAR_11);
  }

  FUNC_9(VAR_8);

  FUNC_18();
 }
 FUNC_19(VAR_4);
 FUNC_17(VAR_10->sk_sleep, &VAR_15);
 FUNC_17(VAR_9->sk_sleep, &VAR_14);

 FUNC_5(&VAR_6);

 FUNC_8(VAR_8);

 if (VAR_8->input) {
  FUNC_14(VAR_8->input);
  VAR_8->input = ((void*)0);
 }

 if (VAR_8->hid) {
  FUNC_7(VAR_8->hid);
  VAR_8->hid = ((void*)0);
 }


 VAR_8->intr_sock->sk->sk_err = VAR_2;
 VAR_8->ctrl_sock->sk->sk_err = VAR_2;

 FUNC_12(VAR_8);

 FUNC_6(VAR_8->intr_sock->file);

 FUNC_24(*(VAR_9->sk_sleep),
  (VAR_9->sk_state == VAR_0), FUNC_16(500));

 FUNC_6(VAR_8->ctrl_sock->file);

 FUNC_1(VAR_8);

 FUNC_23(&VAR_6);

 FUNC_15(VAR_8);
 return 0;
}
