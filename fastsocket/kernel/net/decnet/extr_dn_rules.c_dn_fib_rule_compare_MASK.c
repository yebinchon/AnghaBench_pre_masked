
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct fib_rule_hdr {scalar_t__ src_len; scalar_t__ dst_len; } ;
struct fib_rule {int dummy; } ;
struct dn_fib_rule {scalar_t__ src_len; scalar_t__ dst_len; scalar_t__ src; scalar_t__ dst; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct fib_rule *VAR_2, struct fib_rule_hdr *VAR_3,
          struct nlattr **VAR_4)
{
 struct dn_fib_rule *VAR_5 = (struct dn_fib_rule *)VAR_2;

 if (VAR_3->src_len && (VAR_5->src_len != VAR_3->src_len))
  return 0;

 if (VAR_3->dst_len && (VAR_5->dst_len != VAR_3->dst_len))
  return 0;

 if (VAR_3->src_len && (VAR_5->src != FUNC_0(VAR_4[VAR_1])))
  return 0;

 if (VAR_3->dst_len && (VAR_5->dst != FUNC_0(VAR_4[VAR_0])))
  return 0;

 return 1;
}
