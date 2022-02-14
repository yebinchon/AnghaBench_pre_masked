
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tdesc_t ;
struct TYPE_4__ {int ii_nargs; int * ii_dtype; int ** ii_args; } ;
typedef TYPE_1__ iidesc_t ;


 int VAR_0 ;
 int ** FUNC_0 (int) ;
 int ** FUNC_1 (int **,int) ;

__attribute__((used)) static void
FUNC_2(iidesc_t *VAR_1, iidesc_t *VAR_2)
{
 VAR_1->ii_nargs++;

 if (VAR_1->ii_nargs == 1)
  VAR_1->ii_args = FUNC_0(sizeof (tdesc_t *) * VAR_0);
 else if (VAR_1->ii_nargs > VAR_0) {
  VAR_1->ii_args = FUNC_1(VAR_1->ii_args,
      sizeof (tdesc_t *) * VAR_1->ii_nargs);
 }

 VAR_1->ii_args[VAR_1->ii_nargs - 1] = VAR_2->ii_dtype;
 VAR_2->ii_dtype = ((void*)0);
}
