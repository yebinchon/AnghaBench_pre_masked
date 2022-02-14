
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_list_entry {int ll_count; int * ll_children; struct lock_list_entry* ll_next; } ;


 int FUNC_0 (int *,int (*) (char const*)) ;

int
FUNC_1(struct lock_list_entry **VAR_0,
    int (*VAR_1)(const char *VAR_2, ...))
{
 struct lock_list_entry *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = 0;
 for (VAR_3 = *VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->ll_next)
  for (VAR_4 = VAR_3->ll_count - 1; VAR_4 >= 0; VAR_4--) {
   FUNC_0(&VAR_3->ll_children[VAR_4], VAR_1);
   VAR_5++;
  }
 return (VAR_5);
}
