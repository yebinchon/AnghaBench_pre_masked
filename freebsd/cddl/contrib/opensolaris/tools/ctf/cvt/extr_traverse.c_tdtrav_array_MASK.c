
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tdtrav_data_t ;
struct TYPE_4__ {TYPE_2__* t_ardef; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_5__ {int ad_idxtype; int ad_contents; } ;
typedef TYPE_2__ ardef_t ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_1(tdesc_t *VAR_0, tdtrav_data_t *VAR_1)
{
 ardef_t *VAR_2 = VAR_0->t_ardef;
 int VAR_3;

 if ((VAR_3 = FUNC_0(VAR_2->ad_contents, &VAR_2->ad_contents,
     VAR_1)) < 0)
  return (VAR_3);

 return (FUNC_0(VAR_2->ad_idxtype, &VAR_2->ad_idxtype, VAR_1));
}
