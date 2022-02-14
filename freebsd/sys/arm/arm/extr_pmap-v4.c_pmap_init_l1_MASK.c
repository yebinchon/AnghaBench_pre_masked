
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct l1_ttable {int* l1_domain_free; int l1_physaddr; scalar_t__ l1_domain_first; scalar_t__ l1_domain_use_count; int * l1_kva; } ;
typedef int pd_entry_t ;
struct TYPE_5__ {TYPE_1__* pm_l1; } ;
struct TYPE_4__ {int * l1_kva; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct l1_ttable*,int ) ;
 int FUNC_1 (int *,struct l1_ttable*,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(struct l1_ttable *VAR_7, pd_entry_t *VAR_8)
{
 int VAR_9;

 VAR_7->l1_kva = VAR_8;
 VAR_7->l1_domain_use_count = 0;
 VAR_7->l1_domain_first = 0;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_7->l1_domain_free[VAR_9] = VAR_9 + 1;




 if (VAR_8 != VAR_2->pm_l1->l1_kva)
  FUNC_2(VAR_8, VAR_2->pm_l1->l1_kva, VAR_0);

 if ((VAR_7->l1_physaddr = FUNC_4(VAR_2, (vm_offset_t)VAR_8)) == 0)
  FUNC_3("pmap_init_l1: can't get PA of L1 at %p", VAR_8);
 FUNC_0(&VAR_4, VAR_7, VAR_3);
 FUNC_1(&VAR_6, VAR_7, VAR_5);
}
