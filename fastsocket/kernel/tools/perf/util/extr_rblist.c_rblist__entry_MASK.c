
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rblist {int entries; } ;
struct rb_node {int dummy; } ;


 struct rb_node* FUNC_0 (int *) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;

struct rb_node *FUNC_2(const struct rblist *VAR_0, unsigned int VAR_1)
{
 struct rb_node *VAR_2;

 for (VAR_2 = FUNC_0(&VAR_0->entries); VAR_2; VAR_2 = FUNC_1(VAR_2)) {
  if (!VAR_1--)
   return VAR_2;
 }

 return ((void*)0);
}
