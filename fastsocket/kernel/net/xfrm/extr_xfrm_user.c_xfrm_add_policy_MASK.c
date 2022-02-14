
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
typedef int u32 ;
struct xfrm_userpolicy_info {int dir; } ;
struct xfrm_policy {int security; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct km_event {scalar_t__ event; int pid; int seq; } ;
struct TYPE_2__ {int sid; int sessionid; int loginuid; } ;


 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct xfrm_policy*) ;
 int FUNC_2 (struct xfrm_policy*,int ,struct km_event*) ;
 struct xfrm_userpolicy_info* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (int ) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct xfrm_userpolicy_info*) ;
 int FUNC_7 (struct nlattr**) ;
 int FUNC_8 (struct xfrm_policy*,int,int ,int ,int ) ;
 int FUNC_9 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_10 (struct net*,struct xfrm_userpolicy_info*,struct nlattr**,int*) ;
 int FUNC_11 (int ,struct xfrm_policy*,int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
  struct nlattr **VAR_3)
{
 struct net *VAR_4 = FUNC_5(VAR_1->sk);
 struct xfrm_userpolicy_info *VAR_5 = FUNC_3(VAR_2);
 struct xfrm_policy *VAR_6;
 struct km_event VAR_7;
 int VAR_8;
 int VAR_9;
 uid_t VAR_10 = FUNC_0(VAR_1).loginuid;
 u32 VAR_11 = FUNC_0(VAR_1).sessionid;
 u32 VAR_12 = FUNC_0(VAR_1).sid;

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_7(VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_10(VAR_4, VAR_5, VAR_3, &VAR_8);
 if (!VAR_6)
  return VAR_8;





 VAR_9 = VAR_2->nlmsg_type == VAR_0;
 VAR_8 = FUNC_11(VAR_5->dir, VAR_6, VAR_9);
 FUNC_8(VAR_6, VAR_8 ? 0 : 1, VAR_10, VAR_11, VAR_12);

 if (VAR_8) {
  FUNC_4(VAR_6->security);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 VAR_7.event = VAR_2->nlmsg_type;
 VAR_7.seq = VAR_2->nlmsg_seq;
 VAR_7.pid = VAR_2->nlmsg_pid;
 FUNC_2(VAR_6, VAR_5->dir, &VAR_7);

 FUNC_9(VAR_6);

 return 0;
}
