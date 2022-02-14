
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ page_start; struct TYPE_4__* next; struct TYPE_4__* previous; int original_permissions; scalar_t__ reference_count; } ;
typedef TYPE_1__ memory_page_t ;
struct TYPE_5__ {int page_count; TYPE_1__* buckets; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static memory_page_t *
FUNC_4 (int VAR_1, CORE_ADDR VAR_2)
{
  int VAR_3;
  memory_page_t *VAR_4 = ((void*)0);
  memory_page_t *VAR_5 = ((void*)0);


  FUNC_1 ();




  VAR_3 = FUNC_0 (VAR_2);
  VAR_4 = &VAR_0.buckets[VAR_3];
  while (VAR_4 != ((void*)0))
    {
      if (VAR_4->page_start == VAR_2)
 break;
      VAR_5 = VAR_4;
      VAR_4 = VAR_4->next;
    }




  if (VAR_4 == ((void*)0))
    {

      VAR_4 = (memory_page_t *) FUNC_3 (sizeof (memory_page_t));
      VAR_4->page_start = VAR_2;
      VAR_4->reference_count = 0;
      VAR_4->next = ((void*)0);
      VAR_4->previous = ((void*)0);


      VAR_4->original_permissions = FUNC_2 (VAR_1, VAR_2);


      VAR_4->previous = VAR_5;
      VAR_5->next = VAR_4;

      VAR_0.page_count++;
    }

  return VAR_4;
}
