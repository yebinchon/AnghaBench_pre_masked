
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct fib_table {scalar_t__ tb_id; } ;
struct fib_rule_hdr {int tos; scalar_t__ dst_len; scalar_t__ src_len; } ;
struct fib_rule {scalar_t__ table; scalar_t__ action; } ;
struct fib4_rule {int tos; scalar_t__ dst_len; void* dstmask; scalar_t__ src_len; void* srcmask; int tclassid; void* dst; void* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct fib_table* FUNC_0 (struct net*) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct fib_rule *VAR_8, struct sk_buff *VAR_9,
          struct fib_rule_hdr *VAR_10,
          struct nlattr **VAR_11)
{
 struct net *VAR_12 = FUNC_4(VAR_9->sk);
 int VAR_13 = -VAR_0;
 struct fib4_rule *VAR_14 = (struct fib4_rule *) VAR_8;

 if (VAR_10->tos & ~VAR_6)
  goto errout;

 if (VAR_8->table == VAR_7) {
  if (VAR_8->action == VAR_5) {
   struct fib_table *VAR_15;

   VAR_15 = FUNC_0(VAR_12);
   if (VAR_15 == ((void*)0)) {
    VAR_13 = -VAR_1;
    goto errout;
   }

   VAR_8->table = VAR_15->tb_id;
  }
 }

 if (VAR_10->src_len)
  VAR_14->src = FUNC_2(VAR_11[VAR_4]);

 if (VAR_10->dst_len)
  VAR_14->dst = FUNC_2(VAR_11[VAR_2]);






 VAR_14->src_len = VAR_10->src_len;
 VAR_14->srcmask = FUNC_1(VAR_14->src_len);
 VAR_14->dst_len = VAR_10->dst_len;
 VAR_14->dstmask = FUNC_1(VAR_14->dst_len);
 VAR_14->tos = VAR_10->tos;

 VAR_13 = 0;
errout:
 return VAR_13;
}
