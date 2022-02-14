
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fileblocks {TYPE_1__* current; int gap_remaining; int buff; scalar_t__ fileposition; TYPE_1__* first; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int gap_size; int buff; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct archive *VAR_1, void *VAR_2)
{
 struct fileblocks *VAR_3 = VAR_2;

 (void)VAR_1;

 VAR_3->current = VAR_3->first;
 VAR_3->fileposition = 0;
 if (VAR_3->current != ((void*)0)) {
  VAR_3->buff = VAR_3->current->buff;
  VAR_3->gap_remaining = VAR_3->current->gap_size;
 }
 return (VAR_0);
}
