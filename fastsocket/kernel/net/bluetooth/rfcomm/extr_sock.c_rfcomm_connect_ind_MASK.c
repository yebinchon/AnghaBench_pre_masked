
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; int sk_ack_backlog; } ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_dlc {int dummy; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {scalar_t__ defer_setup; int dst; int src; } ;
struct TYPE_3__ {struct rfcomm_dlc* dlc; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sock*) ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 struct sock* FUNC_5 (int ,int ,int *) ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct rfcomm_session*,int *,int *) ;
 struct sock* FUNC_8 (int ,int *,int ,int ) ;
 int FUNC_9 (struct sock*,struct sock*) ;
 scalar_t__ FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;

int FUNC_13(struct rfcomm_session *VAR_4, u8 VAR_5, struct rfcomm_dlc **VAR_6)
{
 struct sock *VAR_7, *VAR_8;
 bdaddr_t VAR_9, VAR_10;
 int VAR_11 = 0;

 FUNC_0("session %p channel %d", VAR_4, VAR_5);

 FUNC_7(VAR_4, &VAR_9, &VAR_10);


 VAR_8 = FUNC_5(VAR_2, VAR_5, &VAR_9);
 if (!VAR_8)
  return 0;


 if (FUNC_10(VAR_8)) {
  FUNC_0("backlog full %d", VAR_8->sk_ack_backlog);
  goto done;
 }

 VAR_7 = FUNC_8(FUNC_11(VAR_8), ((void*)0), VAR_0, VAR_3);
 if (!VAR_7)
  goto done;

 FUNC_9(VAR_7, VAR_8);
 FUNC_1(&FUNC_4(VAR_7)->src, &VAR_9);
 FUNC_1(&FUNC_4(VAR_7)->dst, &VAR_10);
 FUNC_6(VAR_7)->channel = VAR_5;

 VAR_7->sk_state = VAR_1;
 FUNC_3(VAR_8, VAR_7);


 *VAR_6 = FUNC_6(VAR_7)->dlc;
 VAR_11 = 1;

done:
 FUNC_2(VAR_8);

 if (FUNC_4(VAR_8)->defer_setup)
  VAR_8->sk_state_change(VAR_8);

 return VAR_11;
}
