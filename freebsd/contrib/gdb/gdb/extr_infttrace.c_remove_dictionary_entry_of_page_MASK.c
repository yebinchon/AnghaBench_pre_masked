
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ page_start; TYPE_2__* previous; TYPE_1__* next; int original_permissions; } ;
typedef TYPE_3__ memory_page_t ;
struct TYPE_10__ {int page_count; } ;
struct TYPE_8__ {TYPE_1__* next; } ;
struct TYPE_7__ {TYPE_2__* previous; } ;
typedef scalar_t__ CORE_ADDR ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (int,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2 (int VAR_1, memory_page_t *VAR_2)
{

  FUNC_0 (VAR_1, VAR_2->page_start, VAR_2->original_permissions);


  if (VAR_2->previous != ((void*)0))
    VAR_2->previous->next = VAR_2->next;
  if (VAR_2->next != ((void*)0))
    VAR_2->next->previous = VAR_2->previous;


  VAR_2->page_start = (CORE_ADDR) 0;

  VAR_0.page_count--;

  FUNC_1 (VAR_2);
}
