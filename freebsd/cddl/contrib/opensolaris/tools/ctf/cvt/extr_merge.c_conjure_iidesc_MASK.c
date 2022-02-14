
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int merge_cb_data_t ;
struct TYPE_6__ {int ii_nargs; int * ii_args; int ii_dtype; } ;
typedef TYPE_1__ iidesc_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int,int *,int *) ;

__attribute__((used)) static iidesc_t *
FUNC_2(iidesc_t *VAR_0, merge_cb_data_t *VAR_1)
{
 iidesc_t *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 (void) FUNC_1(&VAR_2->ii_dtype, VAR_0->ii_dtype, -1, ((void*)0), VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2->ii_nargs; VAR_3++) {
  (void) FUNC_1(&VAR_2->ii_args[VAR_3], VAR_0->ii_args[VAR_3], -1, ((void*)0),
      VAR_1);
 }

 return (VAR_2);
}
