
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
typedef int u8 ;
typedef int u32 ;
struct xfrm_userpolicy_id {int dir; scalar_t__ index; int sel; } ;
struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_sec_ctx {int dummy; } ;
struct xfrm_policy {int dummy; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;
struct TYPE_5__ {scalar_t__ byid; } ;
struct km_event {scalar_t__ event; int pid; int seq; TYPE_2__ data; } ;
struct TYPE_6__ {int sid; int sessionid; int loginuid; int pid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_3__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,struct nlattr**) ;
 int FUNC_4 (struct xfrm_policy*,int ,struct km_event*) ;
 struct xfrm_user_sec_ctx* FUNC_5 (struct nlattr*) ;
 struct xfrm_userpolicy_id* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (int ,struct sk_buff*,int ) ;
 int FUNC_8 (struct xfrm_sec_ctx**,struct xfrm_user_sec_ctx*) ;
 int FUNC_9 (struct xfrm_sec_ctx*) ;
 struct net* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct nlattr**) ;
 int FUNC_13 (struct xfrm_policy*,int,int ,int ,int ) ;
 int FUNC_14 (struct nlattr**,struct xfrm_mark*) ;
 int FUNC_15 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_16 (struct net*,int ,int ,int ,scalar_t__,int,int*) ;
 struct xfrm_policy* FUNC_17 (struct net*,int ,int ,int ,int *,struct xfrm_sec_ctx*,int,int*) ;
 struct sk_buff* FUNC_18 (struct sk_buff*,struct xfrm_policy*,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5,
  struct nlattr **VAR_6)
{
 struct net *VAR_7 = FUNC_10(VAR_4->sk);
 struct xfrm_policy *VAR_8;
 struct xfrm_userpolicy_id *VAR_9;
 u8 VAR_10 = VAR_3;
 int VAR_11;
 struct km_event VAR_12;
 int VAR_13;
 struct xfrm_mark VAR_14;
 u32 VAR_15 = FUNC_14(VAR_6, &VAR_14);

 VAR_9 = FUNC_6(VAR_5);
 VAR_13 = VAR_5->nlmsg_type == VAR_2;

 VAR_11 = FUNC_3(&VAR_10, VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_11(VAR_9->dir);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->index)
  VAR_8 = FUNC_16(VAR_7, VAR_15, VAR_10, VAR_9->dir, VAR_9->index, VAR_13, &VAR_11);
 else {
  struct nlattr *VAR_16 = VAR_6[VAR_1];
  struct xfrm_sec_ctx *VAR_17;

  VAR_11 = FUNC_12(VAR_6);
  if (VAR_11)
   return VAR_11;

  VAR_17 = ((void*)0);
  if (VAR_16) {
   struct xfrm_user_sec_ctx *VAR_18 = FUNC_5(VAR_16);

   VAR_11 = FUNC_8(&VAR_17, VAR_18);
   if (VAR_11)
    return VAR_11;
  }
  VAR_8 = FUNC_17(VAR_7, VAR_15, VAR_10, VAR_9->dir, &VAR_9->sel,
        VAR_17, VAR_13, &VAR_11);
  FUNC_9(VAR_17);
 }
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (!VAR_13) {
  struct sk_buff *VAR_19;

  VAR_19 = FUNC_18(VAR_4, VAR_8, VAR_9->dir, VAR_5->nlmsg_seq);
  if (FUNC_0(VAR_19)) {
   VAR_11 = FUNC_2(VAR_19);
  } else {
   VAR_11 = FUNC_7(VAR_7->xfrm.nlsk, VAR_19,
         FUNC_1(VAR_4).pid);
  }
 } else {
  uid_t VAR_20 = FUNC_1(VAR_4).loginuid;
  u32 VAR_21 = FUNC_1(VAR_4).sessionid;
  u32 VAR_22 = FUNC_1(VAR_4).sid;

  FUNC_13(VAR_8, VAR_11 ? 0 : 1, VAR_20, VAR_21,
      VAR_22);

  if (VAR_11 != 0)
   goto out;

  VAR_12.data.byid = VAR_9->index;
  VAR_12.event = VAR_5->nlmsg_type;
  VAR_12.seq = VAR_5->nlmsg_seq;
  VAR_12.pid = VAR_5->nlmsg_pid;
  FUNC_4(VAR_8, VAR_9->dir, &VAR_12);
 }

out:
 FUNC_15(VAR_8);
 return VAR_11;
}
