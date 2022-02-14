
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct alloc_zone {int * mark_bits; struct alloc_zone* next_zone; } ;
struct TYPE_4__ {struct alloc_zone* zones; } ;
struct TYPE_3__ {int * mark_bits; scalar_t__ bytes; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct alloc_zone *VAR_2;

  for (VAR_2 = VAR_0.zones; VAR_2; VAR_2 = VAR_2->next_zone)
    if (VAR_2->mark_bits)
      {
 FUNC_0 (VAR_2->mark_bits);
 VAR_2->mark_bits = ((void*)0);
      }

  if (VAR_1.bytes)
    {
      FUNC_0 (VAR_1.mark_bits);
      VAR_1.mark_bits = ((void*)0);
    }
}
