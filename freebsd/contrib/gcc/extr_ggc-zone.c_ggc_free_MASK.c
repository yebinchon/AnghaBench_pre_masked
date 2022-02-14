
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page_entry {TYPE_4__* zone; scalar_t__ pch_p; scalar_t__ large_p; } ;
struct TYPE_7__ {TYPE_2__* zone; } ;
struct large_page_entry {scalar_t__ bytes; TYPE_3__ common; TYPE_1__* prev; struct large_page_entry* next; } ;
struct TYPE_8__ {size_t allocated; } ;
struct TYPE_6__ {int allocated; struct large_page_entry* large_pages; } ;
struct TYPE_5__ {struct large_page_entry* next; } ;


 int FUNC_0 (void*,size_t,TYPE_4__*) ;
 int FUNC_1 (struct large_page_entry*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 size_t FUNC_4 (void*) ;
 int FUNC_5 (void*,size_t) ;
 struct page_entry* FUNC_6 (void*) ;

void
FUNC_7 (void *VAR_0)
{
  struct page_entry *VAR_1;





  FUNC_5 (VAR_0, FUNC_4 (VAR_0));

  VAR_1 = FUNC_6 (VAR_0);

  if (VAR_1->large_p)
    {
      struct large_page_entry *VAR_2
 = (struct large_page_entry *) VAR_1;


      if (VAR_2->prev)
 VAR_2->prev->next = VAR_2->next;
      else
 {
   FUNC_2 (VAR_2->common.zone->large_pages == VAR_2);
   VAR_2->common.zone->large_pages = VAR_2->next;
 }
      if (VAR_2->next)
 VAR_2->next->prev = VAR_2->prev;

      VAR_2->common.zone->allocated -= VAR_2->bytes;


      FUNC_1 (VAR_2);
    }
  else if (VAR_1->pch_p)


    ;
  else
    {
      size_t VAR_3 = FUNC_4 (VAR_0);

      VAR_1->zone->allocated -= VAR_3;



      FUNC_0 (VAR_0, VAR_3, VAR_1->zone);
    }
}
