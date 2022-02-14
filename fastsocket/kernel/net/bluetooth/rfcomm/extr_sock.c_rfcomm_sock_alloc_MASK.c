
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock {int sk_sndbuf; int sk_rcvbuf; int sk_protocol; int sk_state; int sk_sndtimeo; int sk_destruct; } ;
struct rfcomm_dlc {struct sock* owner; int state_change; int data_ready; } ;
struct net {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int accept_q; } ;
struct TYPE_3__ {struct rfcomm_dlc* dlc; } ;


 int FUNC_0 (char*,struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,struct sock*) ;
 struct rfcomm_dlc* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sock* FUNC_6 (struct net*,int ,int ,int *) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct socket*,struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;

__attribute__((used)) static struct sock *FUNC_10(struct net *VAR_11, struct socket *VAR_12, int VAR_13, gfp_t VAR_14)
{
 struct rfcomm_dlc *VAR_15;
 struct sock *VAR_16;

 VAR_16 = FUNC_6(VAR_11, VAR_1, VAR_14, &VAR_6);
 if (!VAR_16)
  return ((void*)0);

 FUNC_8(VAR_12, VAR_16);
 FUNC_1(&FUNC_2(VAR_16)->accept_q);

 VAR_15 = FUNC_4(VAR_14);
 if (!VAR_15) {
  FUNC_7(VAR_16);
  return ((void*)0);
 }

 VAR_15->data_ready = VAR_7;
 VAR_15->state_change = VAR_9;

 FUNC_5(VAR_16)->dlc = VAR_15;
 VAR_15->owner = VAR_16;

 VAR_16->sk_destruct = VAR_10;
 VAR_16->sk_sndtimeo = VAR_2;

 VAR_16->sk_sndbuf = VAR_4 * VAR_3 * 10;
 VAR_16->sk_rcvbuf = VAR_4 * VAR_3 * 10;

 FUNC_9(VAR_16, VAR_5);

 VAR_16->sk_protocol = VAR_13;
 VAR_16->sk_state = VAR_0;

 FUNC_3(&VAR_8, VAR_16);

 FUNC_0("sk %p", VAR_16);
 return VAR_16;
}
