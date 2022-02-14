
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int original_permissions; int page_start; } ;
typedef TYPE_2__ memory_page_t ;
struct TYPE_6__ {scalar_t__ page_protections_allowed; TYPE_1__* buckets; } ;
struct TYPE_4__ {TYPE_2__* next; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int,int ,int ) ;

void
FUNC_1 (int VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      memory_page_t *VAR_4;

      VAR_4 = VAR_1.buckets[VAR_3].next;
      while (VAR_4 != ((void*)0))
 {
   FUNC_0 (VAR_2, VAR_4->page_start, VAR_4->original_permissions);
   VAR_4 = VAR_4->next;
 }
    }

  VAR_1.page_protections_allowed = 0;
}
