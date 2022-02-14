
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct tree_niter_desc {scalar_t__ niter; int may_be_zero; } ;
struct loop {int single_exit; scalar_t__ nb_iterations; } ;
typedef int edge ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct loop*,int ,struct tree_niter_desc*,int) ;
 scalar_t__ FUNC_6 (struct loop*,scalar_t__) ;

tree
FUNC_7 (struct loop *VAR_4)
{
  tree VAR_5, VAR_6;
  edge VAR_7;
  struct tree_niter_desc VAR_8;



  VAR_5 = VAR_4->nb_iterations;
  if (VAR_5)
    return VAR_5;
  VAR_5 = VAR_1;

  if (VAR_2 && (VAR_3 & VAR_0))
    FUNC_2 (VAR_2, "(number_of_iterations_in_loop\n");

  VAR_7 = VAR_4->single_exit;
  if (!VAR_7)
    goto end;

  if (!FUNC_5 (VAR_4, VAR_7, &VAR_8, 0))
    goto end;

  VAR_6 = FUNC_0 (VAR_8.niter);
  if (FUNC_3 (VAR_8.may_be_zero))
    VAR_5 = FUNC_1 (VAR_6, 0);
  else if (FUNC_4 (VAR_8.may_be_zero))
    VAR_5 = VAR_8.niter;
  else
    VAR_5 = VAR_1;

end:
  return FUNC_6 (VAR_4, VAR_5);
}
