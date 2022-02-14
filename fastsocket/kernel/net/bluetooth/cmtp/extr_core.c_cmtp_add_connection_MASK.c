
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int sk; } ;
struct cmtp_session {scalar_t__ state; int flags; int ** reassembly; int transmit; int applications; int msgnum; int wait; struct socket* sock; int name; int mtu; int bdaddr; } ;
struct cmtp_connadd_req {int flags; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_3__ {int imtu; int omtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 struct cmtp_session* FUNC_2 (int *) ;
 int FUNC_3 (struct cmtp_session*) ;
 int FUNC_4 (struct cmtp_session*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (struct cmtp_session*) ;
 int FUNC_10 (struct cmtp_session*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,struct cmtp_session*,int ) ;
 int FUNC_14 (struct cmtp_session*) ;
 struct cmtp_session* FUNC_15 (int,int ) ;
 TYPE_1__* FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,char*,char*) ;
 int VAR_10 ;
 int FUNC_20 (int *) ;

int FUNC_21(struct cmtp_connadd_req *VAR_11, struct socket *VAR_12)
{
 struct cmtp_session *VAR_13, *VAR_14;
 bdaddr_t VAR_15, VAR_16;
 int VAR_17, VAR_18;

 FUNC_0("");

 FUNC_6(&VAR_15, &FUNC_8(VAR_12->sk)->src);
 FUNC_6(&VAR_16, &FUNC_8(VAR_12->sk)->dst);

 VAR_13 = FUNC_15(sizeof(struct cmtp_session), VAR_7);
 if (!VAR_13)
  return -VAR_6;

 FUNC_11(&VAR_9);

 VAR_14 = FUNC_2(&FUNC_8(VAR_12->sk)->dst);
 if (VAR_14 && VAR_14->state == VAR_1) {
  VAR_18 = -VAR_5;
  goto failed;
 }

 FUNC_5(&VAR_13->bdaddr, &FUNC_8(VAR_12->sk)->dst);

 VAR_13->mtu = FUNC_17(VAR_10, FUNC_16(VAR_12->sk)->omtu, FUNC_16(VAR_12->sk)->imtu);

 FUNC_0("mtu %d", VAR_13->mtu);

 FUNC_19(VAR_13->name, "%s", FUNC_7(&VAR_16));

 VAR_13->sock = VAR_12;
 VAR_13->state = VAR_0;

 FUNC_12(&VAR_13->wait);

 VAR_13->msgnum = VAR_3;

 FUNC_1(&VAR_13->applications);

 FUNC_18(&VAR_13->transmit);

 for (VAR_17 = 0; VAR_17 < 16; VAR_17++)
  VAR_13->reassembly[VAR_17] = ((void*)0);

 VAR_13->flags = VAR_11->flags;

 FUNC_3(VAR_13);

 VAR_18 = FUNC_13(VAR_8, VAR_13, VAR_2);
 if (VAR_18 < 0)
  goto unlink;

 if (!(VAR_13->flags & (1 << VAR_4))) {
  VAR_18 = FUNC_9(VAR_13);
  if (VAR_18 < 0)
   goto detach;
 }

 FUNC_20(&VAR_9);
 return 0;

detach:
 FUNC_10(VAR_13);

unlink:
 FUNC_4(VAR_13);

failed:
 FUNC_20(&VAR_9);
 FUNC_14(VAR_13);
 return VAR_18;
}
