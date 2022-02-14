
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* elements; } ;
typedef TYPE_1__ bitmap_obstack ;
struct TYPE_8__ {struct TYPE_8__* prev; int * next; } ;
typedef TYPE_2__ bitmap_element ;
typedef TYPE_3__* bitmap ;
struct TYPE_9__ {TYPE_1__* obstack; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline void
FUNC_0 (bitmap VAR_1, bitmap_element *VAR_2)
{
  bitmap_obstack *VAR_3 = VAR_1->obstack;

  VAR_2->next = ((void*)0);
  if (VAR_3)
    {
      VAR_2->prev = VAR_3->elements;
      VAR_3->elements = VAR_2;
    }
  else
    {
      VAR_2->prev = VAR_0;
      VAR_0 = VAR_2;
    }
}
