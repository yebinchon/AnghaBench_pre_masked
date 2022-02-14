
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
struct xfrm_userpolicy_info {int dir; int sel; scalar_t__ index; } ;
struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_user_polexpire {scalar_t__ hard; struct xfrm_userpolicy_info pol; } ;
struct xfrm_sec_ctx {int dummy; } ;
struct TYPE_4__ {int dead; } ;
struct xfrm_policy {TYPE_1__ walk; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int sid; int sessionid; int loginuid; } ;
struct TYPE_5__ {int pid; } ;


 int VAR_0 ;
 TYPE_3__ FUNC_0 (struct sk_buff*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nlattr**) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct xfrm_policy*,int ,scalar_t__,int ) ;
 struct xfrm_user_sec_ctx* FUNC_3 (struct nlattr*) ;
 struct xfrm_user_polexpire* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct xfrm_sec_ctx**,struct xfrm_user_sec_ctx*) ;
 int FUNC_7 (struct xfrm_sec_ctx*) ;
 struct net* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct nlattr**) ;
 int FUNC_12 (struct xfrm_policy*,int,int ,int ,int ) ;
 int FUNC_13 (struct nlattr**,struct xfrm_mark*) ;
 int FUNC_14 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_15 (struct net*,int ,int ,int ,scalar_t__,int ,int*) ;
 struct xfrm_policy* FUNC_16 (struct net*,int ,int ,int ,int *,struct xfrm_sec_ctx*,int ,int*) ;
 int FUNC_17 (struct xfrm_policy*,int ) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5,
  struct nlattr **VAR_6)
{
 struct net *VAR_7 = FUNC_8(VAR_4->sk);
 struct xfrm_policy *VAR_8;
 struct xfrm_user_polexpire *VAR_9 = FUNC_4(VAR_5);
 struct xfrm_userpolicy_info *VAR_10 = &VAR_9->pol;
 u8 VAR_11 = VAR_2;
 int VAR_12 = -VAR_0;
 struct xfrm_mark VAR_13;
 u32 VAR_14 = FUNC_13(VAR_6, &VAR_13);

 VAR_12 = FUNC_1(&VAR_11, VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_10(VAR_10->dir);
 if (VAR_12)
  return VAR_12;

 if (VAR_10->index)
  VAR_8 = FUNC_15(VAR_7, VAR_14, VAR_11, VAR_10->dir, VAR_10->index, 0, &VAR_12);
 else {
  struct nlattr *VAR_15 = VAR_6[VAR_1];
  struct xfrm_sec_ctx *VAR_16;

  VAR_12 = FUNC_11(VAR_6);
  if (VAR_12)
   return VAR_12;

  VAR_16 = ((void*)0);
  if (VAR_15) {
   struct xfrm_user_sec_ctx *VAR_17 = FUNC_3(VAR_15);

   VAR_12 = FUNC_6(&VAR_16, VAR_17);
   if (VAR_12)
    return VAR_12;
  }
  VAR_8 = FUNC_16(VAR_7, VAR_14, VAR_11, VAR_10->dir,
        &VAR_10->sel, VAR_16, 0, &VAR_12);
  FUNC_7(VAR_16);
 }
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (FUNC_9(VAR_8->walk.dead))
  goto out;

 VAR_12 = 0;
 if (VAR_9->hard) {
  uid_t VAR_18 = FUNC_0(VAR_4).loginuid;
  uid_t VAR_19 = FUNC_0(VAR_4).sessionid;
  u32 VAR_20 = FUNC_0(VAR_4).sid;
  FUNC_17(VAR_8, VAR_10->dir);
  FUNC_12(VAR_8, 1, VAR_18, VAR_19, VAR_20);

 } else {

  FUNC_5("Dont know what to do with soft policy expire\n");
 }
 FUNC_2(VAR_8, VAR_10->dir, VAR_9->hard, VAR_3->pid);

out:
 FUNC_14(VAR_8);
 return VAR_12;
}
