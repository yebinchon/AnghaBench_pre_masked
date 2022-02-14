
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ protocol; int mark; } ;
struct TYPE_6__ {int obsolete; int input; struct net_device* dev; int tclassid; int flags; int __refcnt; int output; } ;
struct TYPE_7__ {TYPE_2__ dst; } ;
struct TYPE_5__ {scalar_t__ oif; int iif; void* fl4_src; int mark; int fl4_tos; void* fl4_dst; } ;
struct rtable {TYPE_3__ u; int rt_flags; int rt_type; int rt_genid; void* rt_spec_dst; void* rt_gateway; TYPE_1__ fl; void* idev; int rt_iif; void* rt_src; void* rt_dst; } ;
struct net_device {int ifindex; } ;
struct in_device {int dummy; } ;
typedef void* __be32 ;
struct TYPE_8__ {struct net_device* loopback_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct in_device*,int ) ;
 scalar_t__ FUNC_1 (struct in_device*) ;
 int FUNC_2 (struct in_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct rtable* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (void*,int ,int ,int ,struct net_device*,void**,int *,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct in_device*) ;
 int VAR_10 ;
 void* FUNC_12 (struct net_device*,int ,int ) ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 scalar_t__ FUNC_15 (void*) ;
 scalar_t__ FUNC_16 (void*) ;
 scalar_t__ FUNC_17 (void*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 unsigned int FUNC_20 (void*,void*,int ,int ) ;
 int FUNC_21 (unsigned int,struct rtable*,int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_16, __be32 VAR_17, __be32 VAR_18,
    u8 VAR_19, struct net_device *VAR_20, int VAR_21)
{
 unsigned VAR_22;
 struct rtable *VAR_23;
 __be32 VAR_24;
 struct in_device *VAR_25 = FUNC_10(VAR_20);
 u32 VAR_26 = 0;



 if (VAR_25 == ((void*)0))
  return -VAR_2;

 if (FUNC_16(VAR_18) || FUNC_13(VAR_18) ||
     VAR_16->protocol != FUNC_9(VAR_4))
  goto e_inval;

 if (FUNC_18(!FUNC_2(VAR_25)))
  if (FUNC_15(VAR_18))
   goto e_inval;

 if (FUNC_17(VAR_18)) {
  if (!FUNC_14(VAR_17))
   goto e_inval;
  VAR_24 = FUNC_12(VAR_20, 0, VAR_9);
 } else if (FUNC_8(VAR_18, 0, VAR_19, 0,
     VAR_20, &VAR_24, &VAR_26, 0) < 0)
  goto e_inval;

 VAR_23 = FUNC_7(&VAR_15);
 if (!VAR_23)
  goto e_nobufs;

 VAR_23->u.dst.output = VAR_14;
 VAR_23->u.dst.obsolete = -1;

 FUNC_4(&VAR_23->u.dst.__refcnt, 1);
 VAR_23->u.dst.flags= VAR_0;
 if (FUNC_0(VAR_25, VAR_5))
  VAR_23->u.dst.flags |= VAR_1;
 VAR_23->fl.fl4_dst = VAR_17;
 VAR_23->rt_dst = VAR_17;
 VAR_23->fl.fl4_tos = VAR_19;
 VAR_23->fl.mark = VAR_16->mark;
 VAR_23->fl.fl4_src = VAR_18;
 VAR_23->rt_src = VAR_18;



 VAR_23->rt_iif =
 VAR_23->fl.iif = VAR_20->ifindex;
 VAR_23->u.dst.dev = VAR_11.loopback_dev;
 FUNC_5(VAR_23->u.dst.dev);
 VAR_23->idev = FUNC_10(VAR_23->u.dst.dev);
 VAR_23->fl.oif = 0;
 VAR_23->rt_gateway = VAR_17;
 VAR_23->rt_spec_dst= VAR_24;
 VAR_23->rt_genid = FUNC_19(FUNC_6(VAR_20));
 VAR_23->rt_flags = VAR_7;
 VAR_23->rt_type = VAR_8;
 if (VAR_21) {
  VAR_23->u.dst.input= VAR_12;
  VAR_23->rt_flags |= VAR_6;
 }





 FUNC_3(VAR_10);

 FUNC_11(VAR_25);
 VAR_22 = FUNC_20(VAR_17, VAR_18, VAR_20->ifindex, FUNC_19(FUNC_6(VAR_20)));
 return FUNC_21(VAR_22, VAR_23, ((void*)0), VAR_16);

e_nobufs:
 FUNC_11(VAR_25);
 return -VAR_3;

e_inval:
 FUNC_11(VAR_25);
 return -VAR_2;
}
