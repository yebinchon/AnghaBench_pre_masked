
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ max_address; scalar_t__ fix_size; struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_1__ Mnode ;
typedef scalar_t__ HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static Mnode *
FUNC_1 (Mnode *VAR_2, Mnode *VAR_3,
          HOST_WIDE_INT VAR_4)
{

  FUNC_0 (VAR_2 != VAR_3);

  if (VAR_3 == ((void*)0))
    {
      if (VAR_4 < VAR_2->max_address)
 VAR_2->max_address = VAR_4;
    }
  else
    {
      if (VAR_4 > VAR_3->max_address - VAR_2->fix_size)
 VAR_2->max_address = VAR_3->max_address - VAR_2->fix_size;
      else
 VAR_2->max_address = VAR_4;



      VAR_2->prev->next = VAR_2->next;
      if (VAR_2->next != ((void*)0))
 VAR_2->next->prev = VAR_2->prev;
      else
 VAR_1 = VAR_2->prev;


      VAR_2->next = VAR_3;
      VAR_2->prev = VAR_3->prev;
      VAR_3->prev = VAR_2;

      if (VAR_2->prev != ((void*)0))
 VAR_2->prev->next = VAR_2;
      else
 VAR_0 = VAR_2;
    }


  VAR_3 = VAR_2;



  while (VAR_2->prev != ((void*)0)
  && VAR_2->prev->max_address > VAR_2->max_address - VAR_2->prev->fix_size)
    {
      VAR_2->prev->max_address = VAR_2->max_address - VAR_2->prev->fix_size;
      VAR_2 = VAR_2->prev;
    }

  return VAR_3;
}
