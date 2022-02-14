
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sp_node {struct mempolicy* policy; } ;
struct TYPE_2__ {int rb_node; } ;
struct shared_policy {int lock; TYPE_1__ root; } ;
struct mempolicy {int dummy; } ;


 int FUNC_0 (struct mempolicy*) ;
 struct sp_node* FUNC_1 (struct shared_policy*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct mempolicy *
FUNC_4(struct shared_policy *VAR_0, unsigned long VAR_1)
{
 struct mempolicy *VAR_2 = ((void*)0);
 struct sp_node *VAR_3;

 if (!VAR_0->root.rb_node)
  return ((void*)0);
 FUNC_2(&VAR_0->lock);
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_1+1);
 if (VAR_3) {
  FUNC_0(VAR_3->policy);
  VAR_2 = VAR_3->policy;
 }
 FUNC_3(&VAR_0->lock);
 return VAR_2;
}
