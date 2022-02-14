
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_object {int dummy; } ;
struct lock_list_entry {int ll_count; struct lock_instance* ll_children; struct lock_list_entry* ll_next; } ;
struct lock_instance {struct lock_object const* li_lock; } ;



__attribute__((used)) static struct lock_instance *
FUNC_0(struct lock_list_entry *VAR_0, const struct lock_object *VAR_1)
{
 struct lock_list_entry *VAR_2;
 struct lock_instance *VAR_3;
 int VAR_4;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->ll_next)
  for (VAR_4 = VAR_2->ll_count - 1; VAR_4 >= 0; VAR_4--) {
   VAR_3 = &VAR_2->ll_children[VAR_4];
   if (VAR_3->li_lock == VAR_1)
    return (VAR_3);
  }
 return (((void*)0));
}
