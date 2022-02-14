
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_3__ {int pm_type; int pm_eptgen; } ;





 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(pmap_t VAR_0, pd_entry_t *VAR_1, pd_entry_t VAR_2)
{

 switch (VAR_0->pm_type) {
 case 128:
  break;
 case 129:
 case 130:
  FUNC_0(&VAR_0->pm_eptgen, 1);
  break;
 default:
  FUNC_1("pmap_update_pde_store: bad pm_type %d", VAR_0->pm_type);
 }
 FUNC_2(VAR_1, VAR_2);
}
