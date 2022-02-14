
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_slot {int buf_idx; } ;
struct netmap_mem_d {int dummy; } ;
struct TYPE_2__ {int objfree; int name; } ;


 int FUNC_0 (struct netmap_mem_d*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct netmap_mem_d *VAR_1, struct netmap_slot *VAR_2, u_int VAR_3)
{
 u_int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].buf_idx > 1)
   FUNC_0(VAR_1, VAR_2[VAR_4].buf_idx);
 }
 FUNC_1("%s: released some buffers, available: %u",
   VAR_0->name, VAR_0->objfree);
}
