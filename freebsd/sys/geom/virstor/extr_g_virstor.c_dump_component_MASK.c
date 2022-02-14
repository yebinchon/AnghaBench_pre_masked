
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_virstor_component {int index; int chunk_count; int chunk_next; int flags; TYPE_2__* gcons; } ;
struct TYPE_4__ {TYPE_1__* provider; } ;
struct TYPE_3__ {char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(struct g_virstor_component *VAR_2)
{

 if (VAR_1 < VAR_0)
  return;
 FUNC_0("Component %d: %s\n", VAR_2->index, VAR_2->gcons->provider->name);
 FUNC_0("  chunk_count: %u\n", VAR_2->chunk_count);
 FUNC_0("   chunk_next: %u\n", VAR_2->chunk_next);
 FUNC_0("        flags: %u\n", VAR_2->flags);
}
