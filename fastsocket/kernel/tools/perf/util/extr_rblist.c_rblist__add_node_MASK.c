
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rb_node* rb_node; } ;
struct rblist {int (* node_cmp ) (struct rb_node*,void const*) ;int nr_entries; TYPE_1__ entries; struct rb_node* (* node_new ) (struct rblist*,void const*) ;} ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rb_node*,TYPE_1__*) ;
 int FUNC_1 (struct rb_node*,struct rb_node*,struct rb_node**) ;
 int FUNC_2 (struct rb_node*,void const*) ;
 struct rb_node* FUNC_3 (struct rblist*,void const*) ;

int FUNC_4(struct rblist *VAR_2, const void *VAR_3)
{
 struct rb_node **VAR_4 = &VAR_2->entries.rb_node;
 struct rb_node *VAR_5 = ((void*)0), *VAR_6;

 while (*VAR_4 != ((void*)0)) {
  int VAR_7;

  VAR_5 = *VAR_4;

  VAR_7 = VAR_2->node_cmp(VAR_5, VAR_3);
  if (VAR_7 > 0)
   VAR_4 = &(*VAR_4)->rb_left;
  else if (VAR_7 < 0)
   VAR_4 = &(*VAR_4)->rb_right;
  else
   return -VAR_0;
 }

 VAR_6 = VAR_2->node_new(VAR_2, VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 FUNC_1(VAR_6, VAR_5, VAR_4);
 FUNC_0(VAR_6, &VAR_2->entries);
 ++VAR_2->nr_entries;

 return 0;
}
