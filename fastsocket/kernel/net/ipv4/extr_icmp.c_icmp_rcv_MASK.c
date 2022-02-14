
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int ip_summed; int csum; } ;
struct sec_path {int len; TYPE_4__** xvec; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_8__ {TYPE_1__ dst; } ;
struct rtable {int rt_flags; TYPE_2__ u; } ;
struct TYPE_11__ {scalar_t__ sysctl_icmp_echo_ignore_broadcasts; } ;
struct net {TYPE_5__ ipv4; } ;
struct iphdr {int dummy; } ;
struct icmphdr {size_t type; } ;
struct TYPE_12__ {int (* handler ) (struct sk_buff*) ;} ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_3__ props; } ;




 int FUNC_0 (struct net*,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 struct net* FUNC_4 (int ) ;
 struct icmphdr* FUNC_5 (struct sk_buff*) ;
 TYPE_6__* VAR_11 ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 struct rtable* FUNC_10 (struct sk_buff*) ;
 struct sec_path* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int *,int ,struct sk_buff*) ;
 int FUNC_15 (int *,int ,struct sk_buff*) ;

int FUNC_16(struct sk_buff *VAR_12)
{
 struct icmphdr *VAR_13;
 struct rtable *VAR_14 = FUNC_10(VAR_12);
 struct net *VAR_15 = FUNC_4(VAR_14->u.dst.dev);

 if (!FUNC_14(((void*)0), VAR_9, VAR_12)) {
  struct sec_path *VAR_16 = FUNC_11(VAR_12);
  int VAR_17;

  if (!(VAR_16 && VAR_16->xvec[VAR_16->len - 1]->props.flags &
     VAR_10))
   goto drop;

  if (!FUNC_7(VAR_12, sizeof(*VAR_13) + sizeof(struct iphdr)))
   goto drop;

  VAR_17 = FUNC_9(VAR_12);
  FUNC_12(VAR_12, sizeof(*VAR_13));

  if (!FUNC_15(((void*)0), VAR_9, VAR_12))
   goto drop;

  FUNC_12(VAR_12, VAR_17);
 }

 FUNC_1(VAR_15, VAR_4);

 switch (VAR_12->ip_summed) {
 case 129:
  if (!FUNC_3(VAR_12->csum))
   break;

 case 128:
  VAR_12->csum = 0;
  if (FUNC_2(VAR_12))
   goto error;
 }

 if (!FUNC_8(VAR_12, sizeof(*VAR_13)))
  goto error;

 VAR_13 = FUNC_5(VAR_12);

 FUNC_0(VAR_15, VAR_13->type);






 if (VAR_13->type > VAR_6)
  goto error;






 if (VAR_14->rt_flags & (VAR_7 | VAR_8)) {






  if ((VAR_13->type == VAR_2 ||
       VAR_13->type == VAR_5) &&
      VAR_15->ipv4.sysctl_icmp_echo_ignore_broadcasts) {
   goto error;
  }
  if (VAR_13->type != VAR_2 &&
      VAR_13->type != VAR_5 &&
      VAR_13->type != VAR_0 &&
      VAR_13->type != VAR_1) {
   goto error;
  }
 }

 VAR_11[VAR_13->type].handler(VAR_12);

drop:
 FUNC_6(VAR_12);
 return 0;
error:
 FUNC_1(VAR_15, VAR_3);
 goto drop;
}
