
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct fib_rule_hdr {int tos; scalar_t__ dst_len; scalar_t__ src_len; } ;
struct fib_rule {scalar_t__ action; int table; } ;
struct TYPE_4__ {scalar_t__ plen; int addr; } ;
struct TYPE_3__ {scalar_t__ plen; int addr; } ;
struct fib6_rule {int tclass; TYPE_2__ dst; TYPE_1__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *,struct nlattr*,int) ;
 struct net* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fib_rule *VAR_6, struct sk_buff *VAR_7,
          struct fib_rule_hdr *VAR_8,
          struct nlattr **VAR_9)
{
 int VAR_10 = -VAR_0;
 struct net *VAR_11 = FUNC_2(VAR_7->sk);
 struct fib6_rule *VAR_12 = (struct fib6_rule *) VAR_6;

 if (VAR_6->action == VAR_4) {
  if (VAR_6->table == VAR_5)
   goto errout;

  if (FUNC_0(VAR_11, VAR_6->table) == ((void*)0)) {
   VAR_10 = -VAR_1;
   goto errout;
  }
 }

 if (VAR_8->src_len)
  FUNC_1(&VAR_12->src.addr, VAR_9[VAR_3],
      sizeof(struct in6_addr));

 if (VAR_8->dst_len)
  FUNC_1(&VAR_12->dst.addr, VAR_9[VAR_2],
      sizeof(struct in6_addr));

 VAR_12->src.plen = VAR_8->src_len;
 VAR_12->dst.plen = VAR_8->dst_len;
 VAR_12->tclass = VAR_8->tos;

 VAR_10 = 0;
errout:
 return VAR_10;
}
