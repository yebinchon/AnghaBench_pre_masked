
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {void* dst; void* src; } ;
struct TYPE_7__ {TYPE_2__ tp; } ;
struct TYPE_5__ {int proto; } ;
struct sw_flow_key {TYPE_3__ ipv4; TYPE_1__ ip; } ;
struct ovs_key_udp {void* udp_dst; void* udp_src; } ;
struct ovs_key_tcp {void* tcp_dst; void* tcp_src; } ;
struct ovs_key_icmp {int icmp_code; int icmp_type; } ;
struct nlattr {int dummy; } ;
struct TYPE_8__ {int tp; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 TYPE_4__ VAR_4 ;
 void* FUNC_2 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_3(struct sw_flow_key *VAR_5, int *VAR_6,
      const struct nlattr *VAR_7[], u32 *VAR_8)
{
 const struct ovs_key_icmp *VAR_9;
 const struct ovs_key_tcp *VAR_10;
 const struct ovs_key_udp *VAR_11;

 switch (VAR_5->ip.proto) {
 case 129:
  if (!(*VAR_8 & (1 << VAR_2)))
   return -VAR_0;
  *VAR_8 &= ~(1 << VAR_2);

  *VAR_6 = FUNC_0(VAR_4);
  VAR_10 = FUNC_2(VAR_7[VAR_2]);
  VAR_5->ipv4.tp.src = VAR_10->tcp_src;
  VAR_5->ipv4.tp.dst = VAR_10->tcp_dst;
  break;

 case 128:
  if (!(*VAR_8 & (1 << VAR_3)))
   return -VAR_0;
  *VAR_8 &= ~(1 << VAR_3);

  *VAR_6 = FUNC_0(VAR_4);
  VAR_11 = FUNC_2(VAR_7[VAR_3]);
  VAR_5->ipv4.tp.src = VAR_11->udp_src;
  VAR_5->ipv4.tp.dst = VAR_11->udp_dst;
  break;

 case 130:
  if (!(*VAR_8 & (1 << VAR_1)))
   return -VAR_0;
  *VAR_8 &= ~(1 << VAR_1);

  *VAR_6 = FUNC_0(VAR_4);
  VAR_9 = FUNC_2(VAR_7[VAR_1]);
  VAR_5->ipv4.tp.src = FUNC_1(VAR_9->icmp_type);
  VAR_5->ipv4.tp.dst = FUNC_1(VAR_9->icmp_code);
  break;
 }

 return 0;
}
