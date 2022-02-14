
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct fib_rule_hdr {scalar_t__ dst_len; scalar_t__ src_len; scalar_t__ tos; } ;
struct fib_rule {scalar_t__ table; scalar_t__ action; } ;
struct dn_fib_table {scalar_t__ n; } ;
struct dn_fib_rule {scalar_t__ dst_len; void* dstmask; scalar_t__ src_len; void* srcmask; void* dst; void* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct dn_fib_table* FUNC_0 () ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct fib_rule *VAR_6, struct sk_buff *VAR_7,
     struct fib_rule_hdr *VAR_8,
     struct nlattr **VAR_9)
{
 int VAR_10 = -VAR_0;
 struct dn_fib_rule *VAR_11 = (struct dn_fib_rule *)VAR_6;

 if (VAR_8->tos)
  goto errout;

 if (VAR_6->table == VAR_5) {
  if (VAR_6->action == VAR_4) {
   struct dn_fib_table *VAR_12;

   VAR_12 = FUNC_0();
   if (VAR_12 == ((void*)0)) {
    VAR_10 = -VAR_1;
    goto errout;
   }

   VAR_6->table = VAR_12->n;
  }
 }

 if (VAR_8->src_len)
  VAR_11->src = FUNC_2(VAR_9[VAR_3]);

 if (VAR_8->dst_len)
  VAR_11->dst = FUNC_2(VAR_9[VAR_2]);

 VAR_11->src_len = VAR_8->src_len;
 VAR_11->srcmask = FUNC_1(VAR_11->src_len);
 VAR_11->dst_len = VAR_8->dst_len;
 VAR_11->dstmask = FUNC_1(VAR_11->dst_len);
 VAR_10 = 0;
errout:
 return VAR_10;
}
