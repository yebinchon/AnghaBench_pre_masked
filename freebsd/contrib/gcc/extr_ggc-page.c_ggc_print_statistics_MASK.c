
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ggc_statistics {int dummy; } ;
typedef int stats ;
struct TYPE_6__ {size_t num_free_objects; scalar_t__ bytes; struct TYPE_6__* next; } ;
typedef TYPE_2__ page_entry ;
struct TYPE_5__ {int * total_allocated_per_order; int * total_overhead_per_order; int total_allocated_under128; int total_overhead_under128; int total_allocated_under64; int total_overhead_under64; int total_allocated_under32; int total_overhead_under32; int total_allocated; int total_overhead; } ;
struct TYPE_7__ {size_t bytes_mapped; size_t allocated; TYPE_1__ stats; TYPE_2__** pages; scalar_t__ allocated_last_gc; } ;


 scalar_t__ FUNC_0 (size_t) ;
 TYPE_4__ VAR_0 ;
 unsigned int VAR_1 ;
 size_t FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,struct ggc_statistics*) ;
 int FUNC_7 (struct ggc_statistics*,int ,int) ;
 int FUNC_8 () ;
 int VAR_2 ;

void
FUNC_9 (void)
{
  struct ggc_statistics VAR_3;
  unsigned int VAR_4;
  size_t VAR_5 = 0;


  FUNC_7 (&VAR_3, 0, sizeof (VAR_3));


  VAR_0.allocated_last_gc = 0;


  FUNC_6 (VAR_2, &VAR_3);



  FUNC_8 ();



  FUNC_5 (VAR_2,
           "Memory still allocated at the end of the compilation process\n");
  FUNC_5 (VAR_2, "%-5s %10s  %10s  %10s\n",
    "Size", "Allocated", "Used", "Overhead");
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
    {
      page_entry *VAR_6;
      size_t VAR_7;
      size_t VAR_8;
      size_t VAR_9;


      if (!VAR_0.pages[VAR_4])
 continue;

      VAR_9 = VAR_7 = VAR_8 = 0;




      for (VAR_6 = VAR_0.pages[VAR_4]; VAR_6; VAR_6 = VAR_6->next)
 {
   VAR_7 += VAR_6->bytes;
   VAR_8 +=
     (FUNC_1 (VAR_6) - VAR_6->num_free_objects) * FUNC_2 (VAR_4);

   VAR_9 += (sizeof (page_entry) - sizeof (long)
         + FUNC_0 (FUNC_1 (VAR_6) + 1));
 }
      FUNC_5 (VAR_2, "%-5lu %10d%c %10d%c %10d%c\n",
        (unsigned long) FUNC_2 (VAR_4),
        FUNC_3 (VAR_7), FUNC_4 (VAR_7),
        FUNC_3 (VAR_8), FUNC_4 (VAR_8),
        FUNC_3 (VAR_9), FUNC_4 (VAR_9));
      VAR_5 += VAR_9;
    }
  FUNC_5 (VAR_2, "%-5s %10d%c %10d%c %10d%c\n", "Total",
    FUNC_3 (VAR_0.bytes_mapped), FUNC_4 (VAR_0.bytes_mapped),
    FUNC_3 (VAR_0.allocated), FUNC_4(VAR_0.allocated),
    FUNC_3 (VAR_5), FUNC_4 (VAR_5));
}
