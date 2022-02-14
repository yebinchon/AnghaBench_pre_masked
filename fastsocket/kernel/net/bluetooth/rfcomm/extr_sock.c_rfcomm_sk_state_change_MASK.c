
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_err; scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;int (* sk_data_ready ) (struct sock*,int ) ;} ;
struct rfcomm_dlc {scalar_t__ state; int session; struct sock* owner; } ;
struct TYPE_2__ {int src; struct sock* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct rfcomm_dlc*,scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (struct rfcomm_dlc*) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (struct sock*) ;

__attribute__((used)) static void FUNC_13(struct rfcomm_dlc *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_3->owner, *VAR_6;
 if (!VAR_5)
  return;

 FUNC_0("dlc %p state %ld err %d", VAR_3, VAR_3->state, VAR_4);

 FUNC_1(VAR_5);

 if (VAR_4)
  VAR_5->sk_err = VAR_4;

 VAR_5->sk_state = VAR_3->state;

 VAR_6 = FUNC_4(VAR_5)->parent;
 if (VAR_6) {
  if (VAR_3->state == VAR_0) {
   FUNC_10(VAR_5, VAR_2);
   FUNC_3(VAR_5);
  }
  VAR_6->sk_data_ready(VAR_6, 0);
 } else {
  if (VAR_3->state == VAR_1)
   FUNC_7(VAR_3->session, &FUNC_4(VAR_5)->src, ((void*)0));
  VAR_5->sk_state_change(VAR_5);
 }

 FUNC_2(VAR_5);

 if (VAR_6 && FUNC_9(VAR_5, VAR_2)) {


  FUNC_6(VAR_3);
  FUNC_8(VAR_5);
  FUNC_5(VAR_3);
 }
}
