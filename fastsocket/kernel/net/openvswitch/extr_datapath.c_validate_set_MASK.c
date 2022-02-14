
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int proto; int frag; } ;
struct TYPE_3__ {int type; } ;
struct sw_flow_key {TYPE_2__ ip; TYPE_1__ eth; } ;
struct sw_flow_actions {int dummy; } ;
struct ovs_key_ipv6 {int ipv6_label; int ipv6_frag; int ipv6_proto; } ;
struct ovs_key_ipv4 {int ipv4_frag; int ipv4_proto; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;





 int FUNC_0 (int ) ;
 void* FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct nlattr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nlattr const*) ;
 int FUNC_5 (int ) ;
 int* VAR_6 ;
 int FUNC_6 (struct nlattr const*,struct sw_flow_actions**) ;
 int FUNC_7 (struct sw_flow_key const*) ;

__attribute__((used)) static int FUNC_8(const struct nlattr *VAR_7,
   const struct sw_flow_key *VAR_8,
   struct sw_flow_actions **VAR_9,
   bool *VAR_10)
{
 const struct nlattr *VAR_11 = FUNC_1(VAR_7);
 int VAR_12 = FUNC_4(VAR_11);


 if (FUNC_3(FUNC_2(VAR_11)) != FUNC_2(VAR_7))
  return -VAR_0;

 if (VAR_12 > VAR_5 ||
    (VAR_6[VAR_12] != FUNC_2(VAR_11) &&
     VAR_6[VAR_12] != -1))
  return -VAR_0;

 switch (VAR_12) {
 const struct ovs_key_ipv4 *VAR_13;
 const struct ovs_key_ipv6 *VAR_14;
 int VAR_15;

 case 132:
 case 131:
 case 135:
  break;

 case 129:
  *VAR_10 = 1;
  VAR_15 = FUNC_6(VAR_7, VAR_9);
  if (VAR_15)
   return VAR_15;
  break;

 case 134:
  if (VAR_8->eth.type != FUNC_0(VAR_1))
   return -VAR_0;

  if (!VAR_8->ip.proto)
   return -VAR_0;

  VAR_13 = FUNC_1(VAR_11);
  if (VAR_13->ipv4_proto != VAR_8->ip.proto)
   return -VAR_0;

  if (VAR_13->ipv4_frag != VAR_8->ip.frag)
   return -VAR_0;

  break;

 case 133:
  if (VAR_8->eth.type != FUNC_0(VAR_2))
   return -VAR_0;

  if (!VAR_8->ip.proto)
   return -VAR_0;

  VAR_14 = FUNC_1(VAR_11);
  if (VAR_14->ipv6_proto != VAR_8->ip.proto)
   return -VAR_0;

  if (VAR_14->ipv6_frag != VAR_8->ip.frag)
   return -VAR_0;

  if (FUNC_5(VAR_14->ipv6_label) & 0xFFF00000)
   return -VAR_0;

  break;

 case 130:
  if (VAR_8->ip.proto != VAR_3)
   return -VAR_0;

  return FUNC_7(VAR_8);

 case 128:
  if (VAR_8->ip.proto != VAR_4)
   return -VAR_0;

  return FUNC_7(VAR_8);

 default:
  return -VAR_0;
 }

 return 0;
}
