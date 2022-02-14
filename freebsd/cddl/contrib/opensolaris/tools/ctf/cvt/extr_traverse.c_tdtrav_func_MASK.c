
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tdtrav_data_t ;
struct TYPE_4__ {TYPE_2__* t_fndef; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_5__ {int * fn_args; scalar_t__ fn_nargs; int fn_ret; } ;
typedef TYPE_2__ fndef_t ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_1(tdesc_t *VAR_0, tdtrav_data_t *VAR_1)
{
 fndef_t *VAR_2 = VAR_0->t_fndef;
 int VAR_3, VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2->fn_ret, &VAR_2->fn_ret, VAR_1)) < 0)
  return (VAR_4);

 for (VAR_3 = 0; VAR_3 < (int) VAR_2->fn_nargs; VAR_3++) {
  if ((VAR_4 = FUNC_0(VAR_2->fn_args[VAR_3], &VAR_2->fn_args[VAR_3],
      VAR_1)) < 0)
   return (VAR_4);
 }

 return (0);
}
