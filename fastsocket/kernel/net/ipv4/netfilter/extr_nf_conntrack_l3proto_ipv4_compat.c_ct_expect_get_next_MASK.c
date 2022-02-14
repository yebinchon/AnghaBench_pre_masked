
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct ct_expect_iter_state* private; } ;
struct TYPE_4__ {TYPE_1__* expect_hash; } ;
struct net {TYPE_2__ ct; } ;
struct hlist_node {int next; } ;
struct ct_expect_iter_state {scalar_t__ bucket; } ;
struct TYPE_3__ {int first; } ;


 scalar_t__ VAR_0 ;
 struct hlist_node* FUNC_0 (int ) ;
 struct net* FUNC_1 (struct seq_file*) ;

__attribute__((used)) static struct hlist_node *FUNC_2(struct seq_file *VAR_1,
          struct hlist_node *VAR_2)
{
 struct net *VAR_3 = FUNC_1(VAR_1);
 struct ct_expect_iter_state *VAR_4 = VAR_1->private;

 VAR_2 = FUNC_0(VAR_2->next);
 while (VAR_2 == ((void*)0)) {
  if (++VAR_4->bucket >= VAR_0)
   return ((void*)0);
  VAR_2 = FUNC_0(VAR_3->ct.expect_hash[VAR_4->bucket].first);
 }
 return VAR_2;
}
