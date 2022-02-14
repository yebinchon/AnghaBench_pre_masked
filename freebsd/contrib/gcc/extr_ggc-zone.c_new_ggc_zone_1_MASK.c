
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct alloc_zone {char const* name; struct alloc_zone* next_zone; } ;
struct TYPE_4__ {TYPE_1__* zones; } ;
struct TYPE_3__ {struct alloc_zone* next_zone; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct alloc_zone *VAR_1, const char * VAR_2)
{
  VAR_1->name = VAR_2;
  VAR_1->next_zone = VAR_0.zones->next_zone;
  VAR_0.zones->next_zone = VAR_1;
}
