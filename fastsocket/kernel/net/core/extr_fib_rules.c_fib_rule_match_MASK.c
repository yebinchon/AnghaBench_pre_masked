
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {scalar_t__ iif; int mark; } ;
struct fib_rules_ops {int (* match ) (struct fib_rule*,struct flowi*,int) ;} ;
struct fib_rule {scalar_t__ ifindex; int mark; int mark_mask; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct fib_rule*,struct flowi*,int) ;

__attribute__((used)) static int FUNC_1(struct fib_rule *VAR_1, struct fib_rules_ops *VAR_2,
     struct flowi *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_1->ifindex && (VAR_1->ifindex != VAR_3->iif))
  goto out;

 if ((VAR_1->mark ^ VAR_3->mark) & VAR_1->mark_mask)
  goto out;

 VAR_5 = VAR_2->match(VAR_1, VAR_3, VAR_4);
out:
 return (VAR_1->flags & VAR_0) ? !VAR_5 : VAR_5;
}
