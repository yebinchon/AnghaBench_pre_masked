
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tdesc_t ;
struct TYPE_6__ {int ii_nargs; struct TYPE_6__* ii_args; int * ii_owner; int * ii_name; } ;
typedef TYPE_1__ iidesc_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 void* FUNC_1 (int) ;
 int * FUNC_2 (int *) ;

iidesc_t *
FUNC_3(iidesc_t *VAR_0)
{
 iidesc_t *VAR_1;

 VAR_1 = FUNC_1(sizeof (iidesc_t));
 FUNC_0(VAR_0, VAR_1, sizeof (iidesc_t));

 VAR_1->ii_name = VAR_0->ii_name ? FUNC_2(VAR_0->ii_name) : ((void*)0);
 VAR_1->ii_owner = VAR_0->ii_owner ? FUNC_2(VAR_0->ii_owner) : ((void*)0);

 if (VAR_1->ii_nargs) {
  VAR_1->ii_args = FUNC_1(sizeof (tdesc_t *) * VAR_1->ii_nargs);
  FUNC_0(VAR_0->ii_args, VAR_1->ii_args,
      sizeof (tdesc_t *) * VAR_1->ii_nargs);
 }

 return (VAR_1);
}
