
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct lock_list_entry* td_sleeplocks; } ;
struct lock_list_entry {int ll_count; int * ll_children; struct lock_list_entry* ll_next; } ;


 int FUNC_0 (char*,struct thread*) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int (*) (char*,struct thread*)) ;
 int FUNC_2 (struct lock_list_entry*) ;
 int FUNC_3 (char*,struct thread*) ;

void
FUNC_4(struct thread *VAR_1)
{
 struct lock_list_entry *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = VAR_1->td_sleeplocks;
 if (VAR_2 == ((void*)0) || VAR_0 != ((void*)0))
  return;
 if (VAR_2->ll_count != 0) {
  for (VAR_4 = 0; VAR_2 != ((void*)0); VAR_2 = VAR_2->ll_next)
   for (VAR_3 = VAR_2->ll_count - 1; VAR_3 >= 0; VAR_3--) {
    if (VAR_4 == 0)
     FUNC_3(
      "Thread %p exiting with the following locks held:\n", VAR_1);
    VAR_4++;
    FUNC_1(&VAR_2->ll_children[VAR_3],
        FUNC_3);

   }
  FUNC_0(
      "Thread %p cannot exit while holding sleeplocks\n", VAR_1);
 }
 FUNC_2(VAR_2);
}
