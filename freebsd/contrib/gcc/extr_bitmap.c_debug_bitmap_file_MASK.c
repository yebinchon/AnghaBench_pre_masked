
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int indx; unsigned int* bits; scalar_t__ prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ bitmap_element ;
typedef TYPE_2__* bitmap ;
struct TYPE_5__ {int indx; TYPE_1__* first; scalar_t__ current; } ;
typedef int FILE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1 (FILE *VAR_3, bitmap VAR_4)
{
  bitmap_element *VAR_5;

  FUNC_0 (VAR_3, "\nfirst = %p current = %p indx = %u\n",
    (void *) VAR_4->first, (void *) VAR_4->current, VAR_4->indx);

  for (VAR_5 = VAR_4->first; VAR_5; VAR_5 = VAR_5->next)
    {
      unsigned int VAR_6, VAR_7, VAR_8 = 26;

      FUNC_0 (VAR_3, "\t%p next = %p prev = %p indx = %u\n\t\tbits = {",
        (void*) VAR_5, (void*) VAR_5->next, (void*) VAR_5->prev, VAR_5->indx);

      for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   if ((VAR_5->bits[VAR_6] >> VAR_7) & 1)
     {
       if (VAR_8 > 70)
  {
    FUNC_0 (VAR_3, "\n\t\t\t");
    VAR_8 = 24;
  }

       FUNC_0 (VAR_3, " %u", (VAR_5->indx * VAR_0
         + VAR_6 * VAR_2 + VAR_7));
       VAR_8 += 4;
     }

      FUNC_0 (VAR_3, " }\n");
    }
}
