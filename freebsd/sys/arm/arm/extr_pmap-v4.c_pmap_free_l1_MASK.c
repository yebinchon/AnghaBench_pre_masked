
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct l1_ttable {scalar_t__ l1_domain_use_count; int* l1_domain_free; int l1_domain_first; } ;
typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {int pm_domain; struct l1_ttable* pm_l1; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct l1_ttable*,int ) ;
 int FUNC_1 (int *,struct l1_ttable*,int ) ;
 int FUNC_2 (int *,struct l1_ttable*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(pmap_t VAR_4)
{
 struct l1_ttable *VAR_5 = VAR_4->pm_l1;

 FUNC_3(&VAR_3);




 if (VAR_5->l1_domain_use_count < VAR_0)
  FUNC_2(&VAR_2, VAR_5, VAR_1);




 VAR_5->l1_domain_free[VAR_4->pm_domain - 1] = VAR_5->l1_domain_first;
 VAR_5->l1_domain_first = VAR_4->pm_domain - 1;
 VAR_5->l1_domain_use_count--;







 if (VAR_5->l1_domain_use_count == 0) {
  FUNC_0(&VAR_2, VAR_5, VAR_1);
 } else
  FUNC_1(&VAR_2, VAR_5, VAR_1);

 FUNC_4(&VAR_3);
}
