
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ip6_null_entry; int fib6_rules_ops; } ;
struct net {TYPE_3__ ipv6; } ;
struct flowi {int dummy; } ;
struct fib_lookup_arg {struct dst_entry* result; scalar_t__ rule; int lookup_ptr; } ;
struct dst_entry {int dummy; } ;
typedef int pol_lookup_t ;
struct TYPE_4__ {struct dst_entry dst; } ;
struct TYPE_5__ {TYPE_1__ u; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct flowi*,int,struct fib_lookup_arg*) ;

struct dst_entry *FUNC_3(struct net *VAR_0, struct flowi *VAR_1,
       int VAR_2, pol_lookup_t VAR_3)
{
 struct fib_lookup_arg VAR_4 = {
  .lookup_ptr = VAR_3,
 };

 FUNC_2(VAR_0->ipv6.fib6_rules_ops, VAR_1, VAR_2, &VAR_4);
 if (VAR_4.rule)
  FUNC_1(VAR_4.rule);

 if (VAR_4.result)
  return VAR_4.result;

 FUNC_0(&VAR_0->ipv6.ip6_null_entry->u.dst);
 return &VAR_0->ipv6.ip6_null_entry->u.dst;
}
