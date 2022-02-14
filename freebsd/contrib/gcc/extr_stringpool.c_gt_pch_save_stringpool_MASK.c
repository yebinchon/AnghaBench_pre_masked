
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nslots; int entries; int nelements; } ;
struct TYPE_3__ {int nslots; void* entries; int nelements; } ;


 void* FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (void*,int ,int) ;
 TYPE_1__* VAR_1 ;

void
FUNC_2 (void)
{
  VAR_1 = FUNC_0 (sizeof (*VAR_1));
  VAR_1->nslots = VAR_0->nslots;
  VAR_1->nelements = VAR_0->nelements;
  VAR_1->entries = FUNC_0 (sizeof (VAR_1->entries[0]) * VAR_1->nslots);
  FUNC_1 (VAR_1->entries, VAR_0->entries,
   VAR_1->nslots * sizeof (VAR_1->entries[0]));
}
