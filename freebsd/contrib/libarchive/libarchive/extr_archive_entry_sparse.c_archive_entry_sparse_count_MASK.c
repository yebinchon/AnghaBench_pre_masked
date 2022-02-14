
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {struct ae_sparse* sparse_head; } ;
struct ae_sparse {scalar_t__ offset; scalar_t__ length; struct ae_sparse* next; } ;


 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;

int
FUNC_2(struct archive_entry *VAR_0)
{
 struct ae_sparse *VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = VAR_0->sparse_head; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  VAR_2++;






 if (VAR_2 == 1) {
  VAR_1 = VAR_0->sparse_head;
  if (VAR_1->offset == 0 &&
      VAR_1->length >= FUNC_0(VAR_0)) {
   VAR_2 = 0;
   FUNC_1(VAR_0);
  }
 }

 return (VAR_2);
}
