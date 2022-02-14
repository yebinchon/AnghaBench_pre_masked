
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fib_rule_hdr {scalar_t__ tos; scalar_t__ src_len; scalar_t__ dst_len; } ;
struct fib_rule {int dummy; } ;
struct dn_fib_rule {int src; scalar_t__ src_len; int dst; scalar_t__ dst_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fib_rule *VAR_3, struct sk_buff *VAR_4,
       struct fib_rule_hdr *VAR_5)
{
 struct dn_fib_rule *VAR_6 = (struct dn_fib_rule *)VAR_3;

 VAR_5->dst_len = VAR_6->dst_len;
 VAR_5->src_len = VAR_6->src_len;
 VAR_5->tos = 0;

 if (VAR_6->dst_len)
  FUNC_0(VAR_4, VAR_1, VAR_6->dst);
 if (VAR_6->src_len)
  FUNC_0(VAR_4, VAR_2, VAR_6->src);

 return 0;

nla_put_failure:
 return -VAR_0;
}
