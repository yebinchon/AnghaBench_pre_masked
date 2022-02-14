
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* t_fndef; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_6__ {scalar_t__ fn_nargs; scalar_t__ fn_vargs; int * fn_args; int fn_ret; } ;
typedef TYPE_2__ fndef_t ;
typedef int equiv_data_t ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(tdesc_t *VAR_0, tdesc_t *VAR_1, equiv_data_t *VAR_2)
{
 fndef_t *VAR_3 = VAR_0->t_fndef, *VAR_4 = VAR_1->t_fndef;
 int VAR_5;

 if (VAR_3->fn_nargs != VAR_4->fn_nargs ||
     VAR_3->fn_vargs != VAR_4->fn_vargs)
  return (0);

 if (!FUNC_0(VAR_3->fn_ret, VAR_4->fn_ret, VAR_2))
  return (0);

 for (VAR_5 = 0; VAR_5 < (int) VAR_3->fn_nargs; VAR_5++) {
  if (!FUNC_0(VAR_3->fn_args[VAR_5], VAR_4->fn_args[VAR_5], VAR_2))
   return (0);
 }

 return (1);
}
