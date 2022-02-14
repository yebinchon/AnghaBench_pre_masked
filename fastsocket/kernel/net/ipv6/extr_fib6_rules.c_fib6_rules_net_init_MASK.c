
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* fib6_rules_ops; } ;
struct net {TYPE_1__ ipv6; } ;
struct TYPE_8__ {int rules_list; struct net* fro_net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int *,int,int ) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_6)
{
 int VAR_7 = -VAR_0;

 VAR_6->ipv6.fib6_rules_ops = FUNC_5(&VAR_5,
        sizeof(*VAR_6->ipv6.fib6_rules_ops),
        VAR_2);
 if (!VAR_6->ipv6.fib6_rules_ops)
  goto out;

 VAR_6->ipv6.fib6_rules_ops->fro_net = VAR_6;
 FUNC_0(&VAR_6->ipv6.fib6_rules_ops->rules_list);

 VAR_7 = FUNC_1(VAR_6->ipv6.fib6_rules_ops, 0,
       VAR_3, VAR_1);
 if (VAR_7)
  goto out_fib6_rules_ops;

 VAR_7 = FUNC_1(VAR_6->ipv6.fib6_rules_ops,
       0x7FFE, VAR_4, 0);
 if (VAR_7)
  goto out_fib6_default_rule_add;

 VAR_7 = FUNC_3(VAR_6->ipv6.fib6_rules_ops);
 if (VAR_7)
  goto out_fib6_default_rule_add;
out:
 return VAR_7;

out_fib6_default_rule_add:
 FUNC_2(VAR_6->ipv6.fib6_rules_ops);
out_fib6_rules_ops:
 FUNC_4(VAR_6->ipv6.fib6_rules_ops);
 goto out;
}
