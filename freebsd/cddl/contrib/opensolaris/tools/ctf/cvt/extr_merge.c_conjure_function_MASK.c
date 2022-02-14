
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* t_fndef; int t_id; } ;
typedef TYPE_1__ tdesc_t ;
typedef int merge_cb_data_t ;
struct TYPE_10__ {scalar_t__ fn_nargs; int * fn_args; int fn_vargs; int fn_ret; } ;
typedef TYPE_2__ fndef_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int *) ;
 int * FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int) ;

__attribute__((used)) static tdesc_t *
FUNC_4(tdesc_t *VAR_0, int VAR_1, merge_cb_data_t *VAR_2)
{
 tdesc_t *VAR_3 = FUNC_0(VAR_0, VAR_1);
 fndef_t *VAR_4 = FUNC_3(sizeof (fndef_t));
 fndef_t *VAR_5 = VAR_0->t_fndef;
 int VAR_6;

 (void) FUNC_1(&VAR_4->fn_ret, VAR_5->fn_ret, VAR_0->t_id, VAR_3, VAR_2);

 VAR_4->fn_nargs = VAR_5->fn_nargs;
 VAR_4->fn_vargs = VAR_5->fn_vargs;

 if (VAR_4->fn_nargs > 0)
  VAR_4->fn_args = FUNC_2(sizeof (tdesc_t *) * VAR_5->fn_nargs);

 for (VAR_6 = 0; VAR_6 < (int) VAR_5->fn_nargs; VAR_6++) {
  (void) FUNC_1(&VAR_4->fn_args[VAR_6], VAR_5->fn_args[VAR_6], VAR_0->t_id,
      VAR_3, VAR_2);
 }

 VAR_3->t_fndef = VAR_4;

 return (VAR_3);
}
