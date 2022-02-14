
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int * sparse_tail; struct ae_sparse* sparse_head; } ;
struct ae_sparse {struct ae_sparse* next; } ;


 int FUNC_0 (struct ae_sparse*) ;

void
FUNC_1(struct archive_entry *VAR_0)
{
 struct ae_sparse *VAR_1;

 while (VAR_0->sparse_head != ((void*)0)) {
  VAR_1 = VAR_0->sparse_head->next;
  FUNC_0(VAR_0->sparse_head);
  VAR_0->sparse_head = VAR_1;
 }
 VAR_0->sparse_tail = ((void*)0);
}
