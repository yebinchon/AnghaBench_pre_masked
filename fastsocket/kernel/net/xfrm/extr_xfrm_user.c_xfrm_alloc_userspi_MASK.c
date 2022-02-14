
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u32 ;
struct TYPE_7__ {int proto; int daddr; } ;
struct TYPE_8__ {int family; int saddr; TYPE_2__ id; int reqid; int mode; scalar_t__ seq; } ;
struct xfrm_userspi_info {int max; int min; TYPE_3__ info; } ;
struct TYPE_6__ {int daddr; } ;
struct xfrm_state {TYPE_1__ id; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_9__ {int nlsk; } ;
struct net {TYPE_4__ xfrm; } ;
struct TYPE_10__ {int pid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_5__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct xfrm_userspi_info* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (int ,struct sk_buff*,int ) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct xfrm_userspi_info*) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 int FUNC_8 (struct xfrm_state*,int ,int ) ;
 struct xfrm_state* FUNC_9 (struct net*,struct xfrm_mark*,int ,int ,int ,int *,int *,int,int) ;
 struct xfrm_state* FUNC_10 (struct net*,int ,scalar_t__) ;
 int FUNC_11 (struct nlattr**,struct xfrm_mark*) ;
 struct sk_buff* FUNC_12 (struct sk_buff*,struct xfrm_state*,int ) ;
 int FUNC_13 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
  struct nlattr **VAR_3)
{
 struct net *VAR_4 = FUNC_5(VAR_1->sk);
 struct xfrm_state *VAR_5;
 struct xfrm_userspi_info *VAR_6;
 struct sk_buff *VAR_7;
 xfrm_address_t *VAR_8;
 int VAR_9;
 int VAR_10;
 u32 VAR_11;
 struct xfrm_mark VAR_12;

 VAR_6 = FUNC_3(VAR_2);
 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10)
  goto out_noput;

 VAR_9 = VAR_6->info.family;
 VAR_8 = &VAR_6->info.id.daddr;

 VAR_5 = ((void*)0);

 VAR_11 = FUNC_11(VAR_3, &VAR_12);
 if (VAR_6->info.seq) {
  VAR_5 = FUNC_10(VAR_4, VAR_11, VAR_6->info.seq);
  if (VAR_5 && FUNC_7(&VAR_5->id.daddr, VAR_8, VAR_9)) {
   FUNC_13(VAR_5);
   VAR_5 = ((void*)0);
  }
 }

 if (!VAR_5)
  VAR_5 = FUNC_9(VAR_4, &VAR_12, VAR_6->info.mode, VAR_6->info.reqid,
      VAR_6->info.id.proto, VAR_8,
      &VAR_6->info.saddr, 1,
      VAR_9);
 VAR_10 = -VAR_0;
 if (VAR_5 == ((void*)0))
  goto out_noput;

 VAR_10 = FUNC_8(VAR_5, VAR_6->min, VAR_6->max);
 if (VAR_10)
  goto out;

 VAR_7 = FUNC_12(VAR_1, VAR_5, VAR_2->nlmsg_seq);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7);
  goto out;
 }

 VAR_10 = FUNC_4(VAR_4->xfrm.nlsk, VAR_7, FUNC_1(VAR_1).pid);

out:
 FUNC_13(VAR_5);
out_noput:
 return VAR_10;
}
