
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int dst; } ;
struct rt6_info {TYPE_3__ u; } ;
struct TYPE_5__ {struct rt6_info* ip6_null_entry; struct rt6_info* ip6_prohibit_entry; struct rt6_info* ip6_blk_hole_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct flowi {int fl6_src; int fl6_dst; } ;
struct fib_rule {int action; int flags; int table; struct net* fr_net; } ;
struct fib_lookup_arg {struct rt6_info* result; struct rt6_info* (* lookup_ptr ) (struct net*,struct fib6_table*,struct flowi*,int) ;} ;
struct fib6_table {int dummy; } ;
struct TYPE_6__ {scalar_t__ plen; int addr; } ;
struct fib6_rule {TYPE_2__ src; } ;
typedef struct rt6_info* (* pol_lookup_t ) (struct net*,struct fib6_table*,struct flowi*,int) ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;




 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct fib6_table* FUNC_2 (struct net*,int ) ;
 TYPE_4__* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct in6_addr*) ;
 scalar_t__ FUNC_5 (struct net*,int ,int *,unsigned int,struct in6_addr*) ;
 int FUNC_6 (struct in6_addr*,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct fib_rule *VAR_9, struct flowi *VAR_10,
       int VAR_11, struct fib_lookup_arg *VAR_12)
{
 struct rt6_info *VAR_13 = ((void*)0);
 struct fib6_table *VAR_14;
 struct net *VAR_15 = VAR_9->fr_net;
 pol_lookup_t VAR_16 = VAR_12->lookup_ptr;

 switch (VAR_9->action) {
 case 129:
  break;
 case 128:
  VAR_13 = VAR_15->ipv6.ip6_null_entry;
  goto discard_pkt;
 default:
 case 131:
  VAR_13 = VAR_15->ipv6.ip6_blk_hole_entry;
  goto discard_pkt;
 case 130:
  VAR_13 = VAR_15->ipv6.ip6_prohibit_entry;
  goto discard_pkt;
 }

 VAR_14 = FUNC_2(VAR_15, VAR_9->table);
 if (VAR_14)
  VAR_13 = VAR_16(VAR_15, VAR_14, VAR_10, VAR_11);

 if (VAR_13 != VAR_15->ipv6.ip6_null_entry) {
  struct fib6_rule *VAR_17 = (struct fib6_rule *)VAR_9;





  if ((VAR_9->flags & VAR_1) &&
      VAR_17->src.plen && !(VAR_11 & VAR_5)) {
   struct in6_addr VAR_18;
   unsigned int VAR_19 = 0;

   if (VAR_11 & VAR_8)
    VAR_19 |= VAR_4;
   if (VAR_11 & VAR_7)
    VAR_19 |= VAR_3;
   if (VAR_11 & VAR_6)
    VAR_19 |= VAR_2;

   if (FUNC_5(VAR_15,
            FUNC_3(&VAR_13->u.dst)->dev,
            &VAR_10->fl6_dst, VAR_19,
            &VAR_18))
    goto again;
   if (!FUNC_6(&VAR_18, &VAR_17->src.addr,
            VAR_17->src.plen))
    goto again;
   FUNC_4(&VAR_10->fl6_src, &VAR_18);
  }
  goto out;
 }
again:
 FUNC_1(&VAR_13->u.dst);
 VAR_13 = ((void*)0);
 goto out;

discard_pkt:
 FUNC_0(&VAR_13->u.dst);
out:
 VAR_12->result = VAR_13;
 return VAR_13 == ((void*)0) ? -VAR_0 : 0;
}
