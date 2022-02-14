
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int obsolete; void* output; int input; struct net_device* dev; int flags; int __refcnt; } ;
struct TYPE_6__ {TYPE_2__ dst; } ;
struct TYPE_4__ {scalar_t__ fl4_dst; scalar_t__ fl4_src; int mark; scalar_t__ oif; int fl4_tos; } ;
struct rtable {scalar_t__ rt_dst; scalar_t__ rt_src; scalar_t__ rt_gateway; scalar_t__ rt_spec_dst; unsigned int rt_flags; TYPE_3__ u; int rt_genid; void* idev; int rt_iif; TYPE_1__ fl; } ;
struct net_device {int flags; int ifindex; } ;
struct in_device {int dummy; } ;
struct flowi {scalar_t__ fl4_dst; scalar_t__ fl4_src; scalar_t__ oif; int mark; int proto; } ;
struct fib_result {scalar_t__ type; int prefixlen; int * fi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct in_device*,int ) ;
 scalar_t__ FUNC_1 (struct in_device*) ;
 int FUNC_2 (struct in_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct flowi const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 struct rtable* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 void* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct in_device*) ;
 int FUNC_13 (struct in_device*,scalar_t__,scalar_t__,int ) ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct rtable*,struct fib_result*,int ) ;

__attribute__((used)) static int FUNC_22(struct rtable **VAR_20,
       struct fib_result *VAR_21,
       const struct flowi *VAR_22,
       const struct flowi *VAR_23,
       struct net_device *VAR_24,
       unsigned VAR_25)
{
 struct rtable *VAR_26;
 struct in_device *VAR_27;
 u32 VAR_28 = FUNC_4(VAR_23);
 int VAR_29 = 0;

 if (VAR_22->fl4_dst == FUNC_10(0xFFFFFFFF))
  VAR_21->type = VAR_11;
 else if (FUNC_17(VAR_22->fl4_dst))
  VAR_21->type = VAR_12;
 else if (FUNC_14(VAR_22->fl4_dst) || FUNC_18(VAR_22->fl4_dst))
  return -VAR_3;

 if (VAR_24->flags & VAR_5)
  VAR_25 |= VAR_9;


 VAR_27 = FUNC_11(VAR_24);
 if (!VAR_27)
  return -VAR_3;

 if (FUNC_19(!FUNC_2(VAR_27))) {
  if (FUNC_16(VAR_22->fl4_src) && !(VAR_24->flags & VAR_5)) {
   VAR_29 = -VAR_3;
   goto cleanup;
  }
 }

 if (VAR_21->type == VAR_11) {
  VAR_25 |= VAR_8 | VAR_9;
  if (VAR_21->fi) {
   FUNC_9(VAR_21->fi);
   VAR_21->fi = ((void*)0);
  }
 } else if (VAR_21->type == VAR_12) {
  VAR_25 |= VAR_10|VAR_9;
  if (!FUNC_13(VAR_27, VAR_23->fl4_dst, VAR_23->fl4_src,
     VAR_23->proto))
   VAR_25 &= ~VAR_9;




  if (VAR_21->fi && VAR_21->prefixlen < 4) {
   FUNC_9(VAR_21->fi);
   VAR_21->fi = ((void*)0);
  }
 }


 VAR_26 = FUNC_8(&VAR_17);
 if (!VAR_26) {
  VAR_29 = -VAR_4;
  goto cleanup;
 }

 FUNC_5(&VAR_26->u.dst.__refcnt, 1);
 VAR_26->u.dst.flags= VAR_0;
 if (FUNC_0(VAR_27, VAR_7))
  VAR_26->u.dst.flags |= VAR_2;
 if (FUNC_0(VAR_27, VAR_6))
  VAR_26->u.dst.flags |= VAR_1;

 VAR_26->fl.fl4_dst = VAR_23->fl4_dst;
 VAR_26->fl.fl4_tos = VAR_28;
 VAR_26->fl.fl4_src = VAR_23->fl4_src;
 VAR_26->fl.oif = VAR_23->oif;
 VAR_26->fl.mark = VAR_23->mark;
 VAR_26->rt_dst = VAR_22->fl4_dst;
 VAR_26->rt_src = VAR_22->fl4_src;
 VAR_26->rt_iif = VAR_23->oif ? : VAR_24->ifindex;


 VAR_26->u.dst.dev = VAR_24;
 FUNC_6(VAR_24);
 VAR_26->idev = FUNC_11(VAR_24);
 VAR_26->rt_gateway = VAR_22->fl4_dst;
 VAR_26->rt_spec_dst= VAR_22->fl4_src;

 VAR_26->u.dst.output=VAR_16;
 VAR_26->u.dst.obsolete = -1;
 VAR_26->rt_genid = FUNC_20(FUNC_7(VAR_24));

 FUNC_3(VAR_19);

 if (VAR_25 & VAR_9) {
  VAR_26->u.dst.input = VAR_13;
  VAR_26->rt_spec_dst = VAR_22->fl4_dst;
 }
 if (VAR_25 & (VAR_8 | VAR_10)) {
  VAR_26->rt_spec_dst = VAR_22->fl4_src;
  if (VAR_25 & VAR_9 &&
      !(VAR_24->flags & VAR_5)) {
   VAR_26->u.dst.output = VAR_14;
   FUNC_3(VAR_18);
  }
 }

 FUNC_21(VAR_26, VAR_21, 0);

 VAR_26->rt_flags = VAR_25;

 *VAR_20 = VAR_26;
 cleanup:

 FUNC_12(VAR_27);

 return VAR_29;
}
