
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rb_node* rb_node; } ;
struct rblist {int (* node_cmp ) (struct rb_node*,void const*) ;TYPE_1__ entries; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;


 int FUNC_0 (struct rb_node*,void const*) ;

struct rb_node *FUNC_1(struct rblist *VAR_0, const void *VAR_1)
{
 struct rb_node **VAR_2 = &VAR_0->entries.rb_node;
 struct rb_node *VAR_3 = ((void*)0);

 while (*VAR_2 != ((void*)0)) {
  int VAR_4;

  VAR_3 = *VAR_2;

  VAR_4 = VAR_0->node_cmp(VAR_3, VAR_1);
  if (VAR_4 > 0)
   VAR_2 = &(*VAR_2)->rb_left;
  else if (VAR_4 < 0)
   VAR_2 = &(*VAR_2)->rb_right;
  else
   return VAR_3;
 }

 return ((void*)0);
}
