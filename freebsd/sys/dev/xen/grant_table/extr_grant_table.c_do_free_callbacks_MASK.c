
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnttab_free_callback {scalar_t__ count; struct gnttab_free_callback* next; int arg; int (* fn ) (int ) ;} ;


 struct gnttab_free_callback* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct gnttab_free_callback *VAR_2, *VAR_3;

 VAR_2 = VAR_0;
 VAR_0 = ((void*)0);

 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2->next;
  if (VAR_1 >= VAR_2->count) {
   VAR_2->next = ((void*)0);
   VAR_2->fn(VAR_2->arg);
  } else {
   VAR_2->next = VAR_0;
   VAR_0 = VAR_2;
  }
  VAR_2 = VAR_3;
 }
}
