
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct in6_addr {int dummy; } ;
struct fib_rule_hdr {int tos; scalar_t__ src_len; scalar_t__ dst_len; } ;
struct fib_rule {int dummy; } ;
struct TYPE_4__ {int addr; scalar_t__ plen; } ;
struct TYPE_3__ {int addr; scalar_t__ plen; } ;
struct fib6_rule {TYPE_2__ src; TYPE_1__ dst; int tclass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct fib_rule *VAR_3, struct sk_buff *VAR_4,
     struct fib_rule_hdr *VAR_5)
{
 struct fib6_rule *VAR_6 = (struct fib6_rule *) VAR_3;

 VAR_5->dst_len = VAR_6->dst.plen;
 VAR_5->src_len = VAR_6->src.plen;
 VAR_5->tos = VAR_6->tclass;

 if (VAR_6->dst.plen)
  FUNC_0(VAR_4, VAR_1, sizeof(struct in6_addr),
   &VAR_6->dst.addr);

 if (VAR_6->src.plen)
  FUNC_0(VAR_4, VAR_2, sizeof(struct in6_addr),
   &VAR_6->src.addr);

 return 0;

nla_put_failure:
 return -VAR_0;
}
