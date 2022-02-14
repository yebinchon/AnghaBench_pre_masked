
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef TYPE_1__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {scalar_t__ pm_type; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(pmap_t VAR_2, vm_offset_t VAR_3, pd_entry_t VAR_4)
{
 pt_entry_t VAR_5;

 if (FUNC_5(VAR_2))
  return;

 FUNC_0(VAR_2->pm_type == VAR_1,
     ("pmap_update_pde_invalidate: invalid type %d", VAR_2->pm_type));

 VAR_5 = FUNC_4(VAR_2);

 if ((VAR_4 & VAR_0) == 0)

  FUNC_1(VAR_3);
 else if ((VAR_4 & VAR_5) == 0)




  FUNC_2();
 else {




  FUNC_3();
 }
}
