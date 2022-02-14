
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int dir; int protonum; } ;
struct TYPE_3__ {int l3num; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; TYPE_1__ src; } ;
struct nf_conntrack_l4proto {int (* pkt_to_tuple ) (struct sk_buff const*,unsigned int,struct nf_conntrack_tuple*) ;} ;
struct nf_conntrack_l3proto {scalar_t__ (* pkt_to_tuple ) (struct sk_buff const*,unsigned int,struct nf_conntrack_tuple*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nf_conntrack_tuple*,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff const*,unsigned int,struct nf_conntrack_tuple*) ;
 int FUNC_2 (struct sk_buff const*,unsigned int,struct nf_conntrack_tuple*) ;

bool
FUNC_3(const struct sk_buff *VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3,
  u_int16_t VAR_4,
  u_int8_t VAR_5,
  struct nf_conntrack_tuple *VAR_6,
  const struct nf_conntrack_l3proto *VAR_7,
  const struct nf_conntrack_l4proto *VAR_8)
{
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->src.l3num = VAR_4;
 if (VAR_7->pkt_to_tuple(VAR_1, VAR_2, VAR_6) == 0)
  return 0;

 VAR_6->dst.protonum = VAR_5;
 VAR_6->dst.dir = VAR_0;

 return VAR_8->pkt_to_tuple(VAR_1, VAR_3, VAR_6);
}
