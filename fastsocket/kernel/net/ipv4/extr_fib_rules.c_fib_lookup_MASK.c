
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rules_ops; } ;
struct net {TYPE_1__ ipv4; } ;
struct flowi {int dummy; } ;
struct fib_result {int r; } ;
struct fib_lookup_arg {int rule; struct fib_result* result; } ;


 int FUNC_0 (int ,struct flowi*,int ,struct fib_lookup_arg*) ;

int FUNC_1(struct net *VAR_0, struct flowi *VAR_1, struct fib_result *VAR_2)
{
 struct fib_lookup_arg VAR_3 = {
  .result = VAR_2,
 };
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->ipv4.rules_ops, VAR_1, 0, &VAR_3);
 VAR_2->r = VAR_3.rule;

 return VAR_4;
}
