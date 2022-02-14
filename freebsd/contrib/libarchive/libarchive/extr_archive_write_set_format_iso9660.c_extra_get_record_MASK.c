
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct extr_rec* current; struct extr_rec** last; struct extr_rec* first; } ;
struct isoent {TYPE_1__ extr_rec_list; struct isoent* parent; } ;
struct extr_rec {int offset; int location; unsigned char* buf; struct extr_rec* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct extr_rec* FUNC_0 (struct isoent*) ;
 struct extr_rec* FUNC_1 (int) ;

__attribute__((used)) static unsigned char *
FUNC_2(struct isoent *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5)
{
 struct extr_rec *VAR_6;

 VAR_2 = VAR_2->parent;
 if (VAR_4 != ((void*)0)) {

  VAR_6 = VAR_2->extr_rec_list.current;
  if (VAR_0 > VAR_1 - VAR_6->offset)
   VAR_6 = VAR_6->next;
 } else {

  VAR_6 = FUNC_0(VAR_2);
  if (VAR_6 == ((void*)0) ||
      VAR_0 > VAR_1 - VAR_6->offset) {
   VAR_6 = FUNC_1(sizeof(*VAR_6));
   if (VAR_6 == ((void*)0))
    return (((void*)0));
   VAR_6->location = 0;
   VAR_6->offset = 0;

   VAR_6->next = ((void*)0);







   if (VAR_2->extr_rec_list.last == ((void*)0))
    VAR_2->extr_rec_list.last =
     &(VAR_2->extr_rec_list.first);
   *VAR_2->extr_rec_list.last = VAR_6;
   VAR_2->extr_rec_list.last = &(VAR_6->next);
  }
 }
 *VAR_3 = VAR_1 - VAR_6->offset - VAR_0;
 if (*VAR_3 & 0x01)
  *VAR_3 -= 1;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6->offset;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_6->location;
 VAR_2->extr_rec_list.current = VAR_6;

 return (&VAR_6->buf[VAR_6->offset]);
}
