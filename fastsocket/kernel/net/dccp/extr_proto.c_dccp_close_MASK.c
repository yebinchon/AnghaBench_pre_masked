
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int sk_state; TYPE_1__* sk_prot; int sk_lingertime; int sk_receive_queue; int sk_shutdown; } ;
struct sk_buff {scalar_t__ len; } ;
struct dccp_sock {int dccps_xmit_timer; } ;
struct TYPE_2__ {int orphan_count; int (* disconnect ) (struct sock*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*,int) ;
 struct dccp_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*,int *) ;
 int FUNC_18 (struct sock*,long) ;
 scalar_t__ FUNC_19 (struct sock*,int ) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*,int ) ;

void FUNC_25(struct sock *VAR_5, long VAR_6)
{
 struct dccp_sock *VAR_7 = FUNC_8(VAR_5);
 struct sk_buff *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 FUNC_14(VAR_5);

 VAR_5->sk_shutdown = VAR_3;

 if (VAR_5->sk_state == VAR_1) {
  FUNC_7(VAR_5, VAR_0);


  FUNC_11(VAR_5);

  goto adjudge_to_death;
 }

 FUNC_17(VAR_5, &VAR_7->dccps_xmit_timer);






 while ((VAR_8 = FUNC_3(&VAR_5->sk_receive_queue)) != ((void*)0)) {
  VAR_9 += VAR_8->len;
  FUNC_2(VAR_8);
 }

 if (VAR_9) {

  FUNC_0("DCCP: ABORT -- %u bytes unread\n", VAR_9);
  FUNC_6(VAR_5, VAR_2);
  FUNC_7(VAR_5, VAR_0);
 } else if (FUNC_19(VAR_5, VAR_4) && !VAR_5->sk_lingertime) {

  VAR_5->sk_prot->disconnect(VAR_5, 0);
 } else if (VAR_5->sk_state != VAR_0) {
  FUNC_9(VAR_5);
 }

 FUNC_18(VAR_5, VAR_6);

adjudge_to_death:
 VAR_10 = VAR_5->sk_state;
 FUNC_20(VAR_5);
 FUNC_21(VAR_5);




 FUNC_16(VAR_5);




 FUNC_12();
 FUNC_4(VAR_5);
 FUNC_1(FUNC_22(VAR_5));

 FUNC_15(VAR_5->sk_prot->orphan_count);


 if (VAR_10 != VAR_0 && VAR_5->sk_state == VAR_0)
  goto out;

 if (VAR_5->sk_state == VAR_0)
  FUNC_10(VAR_5);



out:
 FUNC_5(VAR_5);
 FUNC_13();
 FUNC_23(VAR_5);
}
