
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct fib_rules_ops {int addr_size; } ;
struct fib_rule_hdr {int src_len; int dst_len; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct fib_rule_hdr *VAR_3, struct nlattr **VAR_4,
       struct fib_rules_ops *VAR_5)
{
 int VAR_6 = -VAR_0;

 if (VAR_3->src_len)
  if (VAR_4[VAR_2] == ((void*)0) ||
      VAR_3->src_len > (VAR_5->addr_size * 8) ||
      FUNC_0(VAR_4[VAR_2]) != VAR_5->addr_size)
   goto errout;

 if (VAR_3->dst_len)
  if (VAR_4[VAR_1] == ((void*)0) ||
      VAR_3->dst_len > (VAR_5->addr_size * 8) ||
      FUNC_0(VAR_4[VAR_1]) != VAR_5->addr_size)
   goto errout;

 VAR_6 = 0;
errout:
 return VAR_6;
}
