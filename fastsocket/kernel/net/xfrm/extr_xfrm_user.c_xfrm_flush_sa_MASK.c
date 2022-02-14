
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrm_usersa_flush {int proto; } ;
struct xfrm_audit {int secid; int sessionid; int loginuid; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_pid; int nlmsg_seq; int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int proto; } ;
struct km_event {struct net* net; int pid; int seq; int event; TYPE_1__ data; } ;
struct TYPE_4__ {int sid; int sessionid; int loginuid; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct km_event*) ;
 struct xfrm_usersa_flush* FUNC_2 (struct nlmsghdr*) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (struct net*,int ,struct xfrm_audit*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
  struct nlattr **VAR_3)
{
 struct net *VAR_4 = FUNC_3(VAR_1->sk);
 struct km_event VAR_5;
 struct xfrm_usersa_flush *VAR_6 = FUNC_2(VAR_2);
 struct xfrm_audit VAR_7;
 int VAR_8;

 VAR_7.loginuid = FUNC_0(VAR_1).loginuid;
 VAR_7.sessionid = FUNC_0(VAR_1).sessionid;
 VAR_7.secid = FUNC_0(VAR_1).sid;
 VAR_8 = FUNC_4(VAR_4, VAR_6->proto, &VAR_7);
 if (VAR_8) {
  if (VAR_8 == -VAR_0)
   return 0;
  return VAR_8;
 }
 VAR_5.data.proto = VAR_6->proto;
 VAR_5.event = VAR_2->nlmsg_type;
 VAR_5.seq = VAR_2->nlmsg_seq;
 VAR_5.pid = VAR_2->nlmsg_pid;
 VAR_5.net = VAR_4;
 FUNC_1(((void*)0), &VAR_5);

 return 0;
}
