
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct small_page_entry {int * mark_bits; struct small_page_entry* next; } ;
struct alloc_zone {size_t n_small_pages; struct small_page_entry* pages; int * mark_bits; struct alloc_zone* next_zone; } ;
typedef int mark_type ;
struct TYPE_4__ {struct alloc_zone* zones; } ;
struct TYPE_3__ {scalar_t__ bytes; int * mark_bits; } ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__,int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_2 (int,size_t) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  struct alloc_zone *VAR_4;

  for (VAR_4 = VAR_1.zones; VAR_4; VAR_4 = VAR_4->next_zone)
    {
      struct small_page_entry *VAR_5;
      mark_type *VAR_6;
      size_t VAR_7, VAR_8;




      VAR_8
 = (VAR_2 + VAR_0 - 1) / VAR_0;
      VAR_7 = VAR_4->n_small_pages * VAR_8;
      VAR_4->mark_bits = (mark_type *) FUNC_2 (sizeof (mark_type),
         VAR_7);
      VAR_6 = VAR_4->mark_bits;
      for (VAR_5 = VAR_4->pages; VAR_5; VAR_5 = VAR_5->next)
 {
   VAR_5->mark_bits = VAR_6;
   VAR_6 += VAR_8;



 }



    }



  if (VAR_3.bytes)
    VAR_3.mark_bits
      = (mark_type *) FUNC_2 (sizeof (mark_type),
          FUNC_0 (VAR_3.bytes, VAR_0));
}
