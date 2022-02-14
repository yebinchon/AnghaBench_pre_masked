
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int * tll; int * sll; int target; } ;
struct TYPE_7__ {void* src; void* dst; } ;
struct TYPE_9__ {TYPE_3__ nd; TYPE_2__ tp; } ;
struct TYPE_6__ {int proto; } ;
struct sw_flow_key {TYPE_4__ ipv6; TYPE_1__ ip; } ;
struct ovs_key_udp {void* udp_src; void* udp_dst; } ;
struct ovs_key_tcp {void* tcp_src; void* tcp_dst; } ;
struct ovs_key_nd {int nd_tll; int nd_sll; int nd_target; } ;
struct ovs_key_icmpv6 {int icmpv6_code; int icmpv6_type; } ;
struct nlattr {int dummy; } ;
struct TYPE_10__ {int nd; int tp; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 TYPE_5__ VAR_8 ;
 int FUNC_2 (int *,int ,int) ;
 void* FUNC_3 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_4(struct sw_flow_key *VAR_9, int *VAR_10,
      const struct nlattr *VAR_11[], u32 *VAR_12)
{
 const struct ovs_key_icmpv6 *VAR_13;
 const struct ovs_key_tcp *VAR_14;
 const struct ovs_key_udp *VAR_15;

 switch (VAR_9->ip.proto) {
 case 129:
  if (!(*VAR_12 & (1 << VAR_6)))
   return -VAR_0;
  *VAR_12 &= ~(1 << VAR_6);

  *VAR_10 = FUNC_0(VAR_8);
  VAR_14 = FUNC_3(VAR_11[VAR_6]);
  VAR_9->ipv6.tp.src = VAR_14->tcp_src;
  VAR_9->ipv6.tp.dst = VAR_14->tcp_dst;
  break;

 case 128:
  if (!(*VAR_12 & (1 << VAR_7)))
   return -VAR_0;
  *VAR_12 &= ~(1 << VAR_7);

  *VAR_10 = FUNC_0(VAR_8);
  VAR_15 = FUNC_3(VAR_11[VAR_7]);
  VAR_9->ipv6.tp.src = VAR_15->udp_src;
  VAR_9->ipv6.tp.dst = VAR_15->udp_dst;
  break;

 case 130:
  if (!(*VAR_12 & (1 << VAR_4)))
   return -VAR_0;
  *VAR_12 &= ~(1 << VAR_4);

  *VAR_10 = FUNC_0(VAR_8);
  VAR_13 = FUNC_3(VAR_11[VAR_4]);
  VAR_9->ipv6.tp.src = FUNC_1(VAR_13->icmpv6_type);
  VAR_9->ipv6.tp.dst = FUNC_1(VAR_13->icmpv6_code);

  if (VAR_9->ipv6.tp.src == FUNC_1(VAR_3) ||
      VAR_9->ipv6.tp.src == FUNC_1(VAR_2)) {
   const struct ovs_key_nd *VAR_16;

   if (!(*VAR_12 & (1 << VAR_5)))
    return -VAR_0;
   *VAR_12 &= ~(1 << VAR_5);

   *VAR_10 = FUNC_0(VAR_8);
   VAR_16 = FUNC_3(VAR_11[VAR_5]);
   FUNC_2(&VAR_9->ipv6.nd.target, VAR_16->nd_target,
          sizeof(VAR_9->ipv6.nd.target));
   FUNC_2(VAR_9->ipv6.nd.sll, VAR_16->nd_sll, VAR_1);
   FUNC_2(VAR_9->ipv6.nd.tll, VAR_16->nd_tll, VAR_1);
  }
  break;
 }

 return 0;
}
