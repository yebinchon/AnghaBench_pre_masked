
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fib_rule_hdr {int tos; scalar_t__ src_len; scalar_t__ dst_len; } ;
struct fib_rule {int dummy; } ;
struct fib4_rule {scalar_t__ tclassid; int src; scalar_t__ src_len; int dst; scalar_t__ dst_len; int tos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fib_rule *VAR_4, struct sk_buff *VAR_5,
     struct fib_rule_hdr *VAR_6)
{
 struct fib4_rule *VAR_7 = (struct fib4_rule *) VAR_4;

 VAR_6->dst_len = VAR_7->dst_len;
 VAR_6->src_len = VAR_7->src_len;
 VAR_6->tos = VAR_7->tos;

 if (VAR_7->dst_len)
  FUNC_0(VAR_5, VAR_1, VAR_7->dst);

 if (VAR_7->src_len)
  FUNC_0(VAR_5, VAR_3, VAR_7->src);





 return 0;

nla_put_failure:
 return -VAR_0;
}
