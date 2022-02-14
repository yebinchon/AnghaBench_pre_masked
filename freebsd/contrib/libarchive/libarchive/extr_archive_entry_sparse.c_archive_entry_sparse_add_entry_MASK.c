
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {struct ae_sparse* sparse_tail; struct ae_sparse* sparse_head; } ;
struct ae_sparse {scalar_t__ offset; scalar_t__ length; struct ae_sparse* next; } ;
typedef scalar_t__ la_int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2(struct archive_entry *VAR_1,
 la_int64_t VAR_2, la_int64_t VAR_3)
{
 struct ae_sparse *VAR_4;

 if (VAR_2 < 0 || VAR_3 < 0)

  return;
 if (VAR_2 > VAR_0 - VAR_3 ||
     VAR_2 + VAR_3 > FUNC_0(VAR_1))

  return;
 if ((VAR_4 = VAR_1->sparse_tail) != ((void*)0)) {
  if (VAR_4->offset + VAR_4->length > VAR_2)

   return;
  if (VAR_4->offset + VAR_4->length == VAR_2) {
   if (VAR_4->offset + VAR_4->length + VAR_3 < 0)


    return;

   VAR_4->length += VAR_3;
   return;
  }
 }

 if ((VAR_4 = (struct ae_sparse *)FUNC_1(sizeof(*VAR_4))) == ((void*)0))

  return;

 VAR_4->offset = VAR_2;
 VAR_4->length = VAR_3;
 VAR_4->next = ((void*)0);

 if (VAR_1->sparse_head == ((void*)0))
  VAR_1->sparse_head = VAR_1->sparse_tail = VAR_4;
 else {

  if (VAR_1->sparse_tail != ((void*)0))
   VAR_1->sparse_tail->next = VAR_4;
  VAR_1->sparse_tail = VAR_4;
 }
}
