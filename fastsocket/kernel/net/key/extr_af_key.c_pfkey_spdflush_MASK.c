
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_audit {scalar_t__ secid; int sessionid; int loginuid; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_seq; int sadb_msg_pid; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct km_event {struct net* net; int seq; int pid; int event; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,struct km_event*) ;
 struct net* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sadb_msg*) ;
 int FUNC_5 (struct net*,int ,struct xfrm_audit*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_4, struct sk_buff *VAR_5, struct sadb_msg *VAR_6, void **VAR_7)
{
 struct net *VAR_8 = FUNC_3(VAR_4);
 struct km_event VAR_9;
 struct xfrm_audit VAR_10;
 int VAR_11, VAR_12;

 VAR_10.loginuid = FUNC_0(VAR_3);
 VAR_10.sessionid = FUNC_1(VAR_3);
 VAR_10.secid = 0;
 VAR_11 = FUNC_5(VAR_8, VAR_2, &VAR_10);
 VAR_12 = FUNC_4(VAR_4, VAR_6);
 if (VAR_11 || VAR_12) {
  if (VAR_11 == -VAR_0)
   return 0;
  return VAR_11;
 }

 VAR_9.data.type = VAR_2;
 VAR_9.event = VAR_1;
 VAR_9.pid = VAR_6->sadb_msg_pid;
 VAR_9.seq = VAR_6->sadb_msg_seq;
 VAR_9.net = VAR_8;
 FUNC_2(((void*)0), 0, &VAR_9);

 return 0;
}
