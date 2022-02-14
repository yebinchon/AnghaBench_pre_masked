
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tdtrav_data_t ;
struct TYPE_2__ {int ii_nargs; int * ii_args; int ii_dtype; } ;
typedef TYPE_1__ iidesc_t ;


 int FUNC_0 (int ,int *,int *) ;

int
FUNC_1(void *VAR_0, void *VAR_1)
{
 iidesc_t *VAR_2 = VAR_0;
 tdtrav_data_t *VAR_3 = VAR_1;
 int VAR_4, VAR_5;

 if ((VAR_5 = FUNC_0(VAR_2->ii_dtype, &VAR_2->ii_dtype, VAR_3)) < 0)
  return (VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_2->ii_nargs; VAR_4++) {
  if ((VAR_5 = FUNC_0(VAR_2->ii_args[VAR_4], &VAR_2->ii_args[VAR_4],
      VAR_3)) < 0)
   return (VAR_5);
 }

 return (1);
}
