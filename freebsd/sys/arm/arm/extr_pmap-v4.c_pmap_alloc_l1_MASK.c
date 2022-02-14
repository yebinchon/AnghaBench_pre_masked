
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct l1_ttable {size_t l1_domain_first; size_t* l1_domain_free; scalar_t__ l1_domain_use_count; } ;
typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {size_t pm_domain; struct l1_ttable* pm_l1; } ;


 scalar_t__ VAR_0 ;
 struct l1_ttable* FUNC_0 (int *) ;
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
 struct l1_ttable *VAR_5;
 u_int8_t VAR_6;




 FUNC_3(&VAR_3);
 VAR_5 = FUNC_0(&VAR_2);
 FUNC_2(&VAR_2, VAR_5, VAR_1);





 VAR_6 = VAR_5->l1_domain_first;
 VAR_5->l1_domain_first = VAR_5->l1_domain_free[VAR_6];





 if (++VAR_5->l1_domain_use_count < VAR_0)
  FUNC_1(&VAR_2, VAR_5, VAR_1);

 FUNC_4(&VAR_3);




 VAR_4->pm_l1 = VAR_5;
 VAR_4->pm_domain = VAR_6 + 1;
}
