
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ all; } ;
struct TYPE_6__ {scalar_t__ ip; } ;
struct TYPE_8__ {TYPE_2__ u; TYPE_1__ u3; } ;
struct TYPE_10__ {scalar_t__ protonum; } ;
struct nf_conntrack_tuple {TYPE_3__ src; TYPE_5__ dst; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
struct TYPE_9__ {struct nf_conntrack_tuple tuple; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(const struct nf_conn *VAR_1,
  const struct nf_conntrack_tuple *VAR_2)
{
 const struct nf_conntrack_tuple *VAR_3;

 VAR_3 = &VAR_1->tuplehash[VAR_0].tuple;
 return (VAR_3->dst.protonum == VAR_2->dst.protonum &&
  VAR_3->src.u3.ip == VAR_2->src.u3.ip &&
  VAR_3->src.u.all == VAR_2->src.u.all);
}
