
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
struct socket {int sk; } ;
struct net_device {int name; int broadcast; int ** dev_addr; } ;
struct TYPE_5__ {int msg_flags; } ;
struct TYPE_4__ {int ** h_dest; int ** h_source; } ;
struct bnep_session {scalar_t__ state; int mc_filter; TYPE_2__ msg; int role; struct socket* sock; struct net_device* dev; TYPE_1__ eh; } ;
struct bnep_connadd_req {char* device; int role; } ;
struct TYPE_6__ {int src; int dst; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int *) ;
 struct bnep_session* FUNC_3 (int *) ;
 int FUNC_4 (struct bnep_session*) ;
 int FUNC_5 (struct bnep_session*) ;
 struct net_device* FUNC_6 (int,char*,int ) ;
 int FUNC_7 (void*,int *) ;
 int FUNC_8 (struct bnep_session*) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct bnep_session*) ;
 int VAR_9 ;
 TYPE_3__* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,struct bnep_session*,int ) ;
 int FUNC_15 (int **,int **,int) ;
 struct bnep_session* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct bnep_connadd_req *VAR_10, struct socket *VAR_11)
{
 struct net_device *VAR_12;
 struct bnep_session *VAR_13, *VAR_14;
 u8 VAR_15[VAR_4], VAR_16[VAR_4];
 int VAR_17;

 FUNC_0("");

 FUNC_7((void *) VAR_15, &FUNC_11(VAR_11->sk)->dst);
 FUNC_7((void *) VAR_16, &FUNC_11(VAR_11->sk)->src);


 VAR_12 = FUNC_6(sizeof(struct bnep_session),
      (*VAR_10->device) ? VAR_10->device : "bnep%d",
      VAR_6);
 if (!VAR_12)
  return -VAR_3;

 FUNC_12(&VAR_8);

 VAR_14 = FUNC_3(VAR_15);
 if (VAR_14 && VAR_14->state == VAR_0) {
  VAR_17 = -VAR_2;
  goto failed;
 }

 VAR_13 = FUNC_16(VAR_12);



 FUNC_15(VAR_13->eh.h_dest, &VAR_16, VAR_4);
 FUNC_15(VAR_13->eh.h_source, &VAR_15, VAR_4);
 FUNC_15(VAR_12->dev_addr, VAR_13->eh.h_dest, VAR_4);

 VAR_13->dev = VAR_12;
 VAR_13->sock = VAR_11;
 VAR_13->role = VAR_10->role;
 VAR_13->state = VAR_0;

 VAR_13->msg.msg_flags = VAR_5;
 FUNC_1(VAR_12, FUNC_8(VAR_13));
 FUNC_2(VAR_12, &VAR_9);

 VAR_17 = FUNC_17(VAR_12);
 if (VAR_17) {
  goto failed;
 }

 FUNC_4(VAR_13);

 VAR_17 = FUNC_14(VAR_7, VAR_13, VAR_1);
 if (VAR_17 < 0) {

  FUNC_20(VAR_12);
  FUNC_5(VAR_13);
  goto failed;
 }

 FUNC_21(&VAR_8);
 FUNC_19(VAR_10->device, VAR_12->name);
 return 0;

failed:
 FUNC_21(&VAR_8);
 FUNC_13(VAR_12);
 return VAR_17;
}
