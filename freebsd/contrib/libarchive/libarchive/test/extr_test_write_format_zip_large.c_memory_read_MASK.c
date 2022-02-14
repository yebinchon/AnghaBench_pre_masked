
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fileblocks {void* buff; scalar_t__ gap_remaining; int fileposition; TYPE_1__* current; } ;
struct archive {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {void* buff; scalar_t__ gap_size; int size; struct TYPE_2__* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive *VAR_3, void *VAR_4, const void **VAR_5)
{
 struct fileblocks *VAR_6 = VAR_4;
 ssize_t VAR_7;

 (void)VAR_3;

 while (VAR_6->current != ((void*)0) && VAR_6->buff == ((void*)0) && VAR_6->gap_remaining == 0) {
  VAR_6->current = VAR_6->current->next;
  if (VAR_6->current != ((void*)0)) {
   VAR_6->buff = VAR_6->current->buff;
   VAR_6->gap_remaining = VAR_6->current->gap_size;
  }
 }

 if (VAR_6->current == ((void*)0))
  return (0);


 if (VAR_6->buff != ((void*)0)) {
  *VAR_5 = VAR_6->buff;
  VAR_7 = ((char *)VAR_6->current->buff + VAR_6->current->size)
      - (char *)VAR_6->buff;
  VAR_6->buff = ((void*)0);
  VAR_6->fileposition += VAR_7;
  return (VAR_7);
 }


 if (VAR_6->gap_remaining > (int64_t)VAR_1) {
  VAR_6->gap_remaining -= VAR_1;
  *VAR_5 = VAR_0;
  VAR_6->fileposition += VAR_1;
  return (VAR_1);
 }


 if (VAR_6->gap_remaining > 0) {
  VAR_7 = (ssize_t)VAR_6->gap_remaining;
  *VAR_5 = VAR_0;
  VAR_6->gap_remaining = 0;
  VAR_6->fileposition += VAR_7;

  VAR_6->current = VAR_6->current->next;
  if (VAR_6->current != ((void*)0)) {
   VAR_6->buff = VAR_6->current->buff;
   VAR_6->gap_remaining = VAR_6->current->gap_size;
  }

  return (VAR_7);
 }
 FUNC_1(VAR_2, "\n\n\nInternal failure\n\n\n");
 FUNC_0(1);
}
