
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ page_count; TYPE_1__* buckets; } ;
struct TYPE_3__ {int * previous; int * next; scalar_t__ reference_count; scalar_t__ page_start; } ;
typedef scalar_t__ LONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_0 (void)
{
  int VAR_2;


  if (VAR_1.page_count >= (LONGEST) 0)
    return;


  VAR_1.page_count = (LONGEST) 0;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
      VAR_1.buckets[VAR_2].page_start = (CORE_ADDR) 0;
      VAR_1.buckets[VAR_2].reference_count = 0;
      VAR_1.buckets[VAR_2].next = ((void*)0);
      VAR_1.buckets[VAR_2].previous = ((void*)0);
    }
}
