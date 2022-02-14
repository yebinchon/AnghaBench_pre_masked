
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct ct_iter_state* private; } ;
struct TYPE_4__ {size_t htable_size; TYPE_1__* hash; } ;
struct net {TYPE_2__ ct; } ;
struct hlist_nulls_node {int dummy; } ;
struct ct_iter_state {size_t bucket; } ;
struct TYPE_3__ {int first; } ;


 int FUNC_0 (struct hlist_nulls_node*) ;
 struct hlist_nulls_node* FUNC_1 (int ) ;
 struct net* FUNC_2 (struct seq_file*) ;

__attribute__((used)) static struct hlist_nulls_node *FUNC_3(struct seq_file *VAR_0)
{
 struct net *VAR_1 = FUNC_2(VAR_0);
 struct ct_iter_state *VAR_2 = VAR_0->private;
 struct hlist_nulls_node *VAR_3;

 for (VAR_2->bucket = 0;
      VAR_2->bucket < VAR_1->ct.htable_size;
      VAR_2->bucket++) {
  VAR_3 = FUNC_1(VAR_1->ct.hash[VAR_2->bucket].first);
  if (!FUNC_0(VAR_3))
   return VAR_3;
 }
 return ((void*)0);
}
