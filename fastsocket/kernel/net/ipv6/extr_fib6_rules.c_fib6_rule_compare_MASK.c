
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct fib_rule_hdr {scalar_t__ src_len; scalar_t__ dst_len; scalar_t__ tos; } ;
struct fib_rule {int dummy; } ;
struct TYPE_4__ {scalar_t__ plen; int addr; } ;
struct TYPE_3__ {scalar_t__ plen; int addr; } ;
struct fib6_rule {scalar_t__ tclass; TYPE_2__ dst; TYPE_1__ src; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct nlattr*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct fib_rule *VAR_2, struct fib_rule_hdr *VAR_3,
        struct nlattr **VAR_4)
{
 struct fib6_rule *VAR_5 = (struct fib6_rule *) VAR_2;

 if (VAR_3->src_len && (VAR_5->src.plen != VAR_3->src_len))
  return 0;

 if (VAR_3->dst_len && (VAR_5->dst.plen != VAR_3->dst_len))
  return 0;

 if (VAR_3->tos && (VAR_5->tclass != VAR_3->tos))
  return 0;

 if (VAR_3->src_len &&
     FUNC_0(VAR_4[VAR_1], &VAR_5->src.addr, sizeof(struct in6_addr)))
  return 0;

 if (VAR_3->dst_len &&
     FUNC_0(VAR_4[VAR_0], &VAR_5->dst.addr, sizeof(struct in6_addr)))
  return 0;

 return 1;
}
