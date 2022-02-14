
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_audit {scalar_t__ secid; int sessionid; int loginuid; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; int sadb_msg_satype; } ;
struct net {int dummy; } ;
struct TYPE_2__ {unsigned int proto; } ;
struct km_event {struct net* net; int event; int pid; int seq; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct km_event*) ;
 unsigned int FUNC_3 (int ) ;
 struct net* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sadb_msg*) ;
 int FUNC_6 (struct net*,unsigned int,struct xfrm_audit*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, struct sk_buff *VAR_5, struct sadb_msg *VAR_6, void **VAR_7)
{
 struct net *VAR_8 = FUNC_4(VAR_4);
 unsigned VAR_9;
 struct km_event VAR_10;
 struct xfrm_audit VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_3(VAR_6->sadb_msg_satype);
 if (VAR_9 == 0)
  return -VAR_0;

 VAR_11.loginuid = FUNC_0(VAR_3);
 VAR_11.sessionid = FUNC_1(VAR_3);
 VAR_11.secid = 0;
 VAR_12 = FUNC_6(VAR_8, VAR_9, &VAR_11);
 VAR_13 = FUNC_5(VAR_4, VAR_6);
 if (VAR_12 || VAR_13) {
  if (VAR_12 == -VAR_1)
   VAR_12 = 0;
  return VAR_12 ? VAR_12 : VAR_13;
 }

 VAR_10.data.proto = VAR_9;
 VAR_10.seq = VAR_6->sadb_msg_seq;
 VAR_10.pid = VAR_6->sadb_msg_pid;
 VAR_10.event = VAR_2;
 VAR_10.net = VAR_8;
 FUNC_2(((void*)0), &VAR_10);

 return 0;
}
