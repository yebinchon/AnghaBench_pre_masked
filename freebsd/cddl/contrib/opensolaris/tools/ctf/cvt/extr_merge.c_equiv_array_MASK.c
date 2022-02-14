
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* t_ardef; } ;
typedef TYPE_1__ tdesc_t ;
typedef int equiv_data_t ;
struct TYPE_6__ {scalar_t__ ad_nelems; int ad_idxtype; int ad_contents; } ;
typedef TYPE_2__ ardef_t ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(tdesc_t *VAR_0, tdesc_t *VAR_1, equiv_data_t *VAR_2)
{
 ardef_t *VAR_3 = VAR_0->t_ardef, *VAR_4 = VAR_1->t_ardef;

 if (!FUNC_0(VAR_3->ad_contents, VAR_4->ad_contents, VAR_2) ||
     !FUNC_0(VAR_3->ad_idxtype, VAR_4->ad_idxtype, VAR_2))
  return (0);

 if (VAR_3->ad_nelems != VAR_4->ad_nelems)
  return (0);

 return (1);
}
