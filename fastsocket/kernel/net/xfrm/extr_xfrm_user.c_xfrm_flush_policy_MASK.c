
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xfrm_audit {int secid; int sessionid; int loginuid; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_pid; int nlmsg_seq; int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int type; } ;
struct km_event {struct net* net; int pid; int seq; int event; TYPE_1__ data; } ;
struct TYPE_4__ {int sid; int sessionid; int loginuid; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct nlattr**) ;
 int FUNC_2 (int *,int ,struct km_event*) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct net*,int ,struct xfrm_audit*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
  struct nlattr **VAR_4)
{
 struct net *VAR_5 = FUNC_3(VAR_2->sk);
 struct km_event VAR_6;
 u8 VAR_7 = VAR_1;
 int VAR_8;
 struct xfrm_audit VAR_9;

 VAR_8 = FUNC_1(&VAR_7, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_9.loginuid = FUNC_0(VAR_2).loginuid;
 VAR_9.sessionid = FUNC_0(VAR_2).sessionid;
 VAR_9.secid = FUNC_0(VAR_2).sid;
 VAR_8 = FUNC_4(VAR_5, VAR_7, &VAR_9);
 if (VAR_8) {
  if (VAR_8 == -VAR_0)
   return 0;
  return VAR_8;
 }

 VAR_6.data.type = VAR_7;
 VAR_6.event = VAR_3->nlmsg_type;
 VAR_6.seq = VAR_3->nlmsg_seq;
 VAR_6.pid = VAR_3->nlmsg_pid;
 VAR_6.net = VAR_5;
 FUNC_2(((void*)0), 0, &VAR_6);
 return 0;
}
