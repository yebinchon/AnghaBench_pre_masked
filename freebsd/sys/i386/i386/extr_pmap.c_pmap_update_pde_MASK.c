
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_4__ {int pm_active; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(pmap_t VAR_1, vm_offset_t VAR_2, pd_entry_t *VAR_3, pd_entry_t VAR_4)
{

 if (VAR_1 == VAR_0)
  FUNC_2(VAR_2, VAR_4);
 else
  FUNC_1(VAR_3, VAR_4);
 if (VAR_1 == VAR_0 || !FUNC_0(&VAR_1->pm_active))
  FUNC_3(VAR_2, VAR_4);
}
