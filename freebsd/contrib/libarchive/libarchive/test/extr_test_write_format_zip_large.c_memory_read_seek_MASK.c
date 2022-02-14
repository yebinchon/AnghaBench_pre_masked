
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fileblocks {scalar_t__ filesize; scalar_t__ fileposition; char* buff; scalar_t__ gap_remaining; TYPE_1__* current; TYPE_1__* first; } ;
struct archive {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ gap_size; struct TYPE_2__* next; scalar_t__ buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int64_t
FUNC_2(struct archive *VAR_3, void *VAR_4, int64_t VAR_5, int VAR_6)
{
 struct fileblocks *VAR_7 = VAR_4;

 (void)VAR_3;
 if (VAR_6 == VAR_1) {
  VAR_5 = VAR_7->filesize + VAR_5;
 } else if (VAR_6 == VAR_0) {
  VAR_5 = VAR_7->fileposition + VAR_5;
 }

 if (VAR_5 < 0) {
  FUNC_1(VAR_2, "\n\n\nInternal failure: negative seek\n\n\n");
  FUNC_0(1);
 }


 VAR_7->fileposition = VAR_5;


 VAR_5 = 0;
 VAR_7->current = VAR_7->first;
 while (VAR_7->current != ((void*)0)) {
  if (VAR_5 + VAR_7->current->size > VAR_7->fileposition) {

   VAR_7->buff = (char *)VAR_7->current->buff
       + VAR_7->fileposition - VAR_5;
   VAR_7->gap_remaining = VAR_7->current->gap_size;
   return VAR_7->fileposition;
  }
  VAR_5 += VAR_7->current->size;
  if (VAR_5 + VAR_7->current->gap_size > VAR_7->fileposition) {

   VAR_7->buff = ((void*)0);
   VAR_7->gap_remaining = VAR_7->current->gap_size
       - (VAR_7->fileposition - VAR_5);
   return VAR_7->fileposition;
  }
  VAR_5 += VAR_7->current->gap_size;

  VAR_7->current = VAR_7->current->next;
 }
 if (VAR_7->fileposition == VAR_7->filesize) {
  return VAR_7->fileposition;
 }
 FUNC_1(VAR_2, "\n\n\nInternal failure: over-sized seek\n\n\n");
 FUNC_0(1);
}
