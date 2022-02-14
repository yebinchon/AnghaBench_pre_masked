
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct ct_iter_state* private; } ;
struct TYPE_4__ {scalar_t__ htable_size; TYPE_1__* hash; } ;
struct net {TYPE_2__ ct; } ;
struct hlist_nulls_node {int next; } ;
struct ct_iter_state {scalar_t__ bucket; } ;
struct TYPE_3__ {int first; } ;


 scalar_t__ FUNC_0 (struct hlist_nulls_node*) ;
 scalar_t__ FUNC_1 (struct hlist_nulls_node*) ;
 scalar_t__ FUNC_2 (int) ;
 struct hlist_nulls_node* FUNC_3 (int ) ;
 struct net* FUNC_4 (struct seq_file*) ;

__attribute__((used)) static struct hlist_nulls_node *FUNC_5(struct seq_file *VAR_0,
          struct hlist_nulls_node *VAR_1)
{
 struct net *VAR_2 = FUNC_4(VAR_0);
 struct ct_iter_state *VAR_3 = VAR_0->private;

 VAR_1 = FUNC_3(VAR_1->next);
 while (FUNC_1(VAR_1)) {
  if (FUNC_2(FUNC_0(VAR_1) == VAR_3->bucket)) {
   if (++VAR_3->bucket >= VAR_2->ct.htable_size)
    return ((void*)0);
  }
  VAR_1 = FUNC_3(VAR_2->ct.hash[VAR_3->bucket].first);
 }
 return VAR_1;
}
