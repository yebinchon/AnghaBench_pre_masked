
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct tree_niter_desc {int additional_info; int may_be_zero; int niter; } ;
struct loop {scalar_t__ estimated_nb_iterations; } ;
typedef TYPE_1__* edge ;
struct TYPE_5__ {int src; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_1__**) ;
 TYPE_1__** FUNC_6 (struct loop*,unsigned int*) ;
 int FUNC_7 (struct loop*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct loop*,TYPE_1__*,struct tree_niter_desc*,int) ;
 int FUNC_11 (struct loop*,int ,int ,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (struct loop *VAR_4)
{
  edge *VAR_5;
  tree VAR_6, VAR_7;
  unsigned VAR_8, VAR_9;
  struct tree_niter_desc VAR_10;


  if (VAR_4->estimated_nb_iterations == VAR_3

      || (VAR_4->estimated_nb_iterations != VAR_2
   && FUNC_0 (VAR_4->estimated_nb_iterations) == VAR_1))
    return;
  else
    VAR_4->estimated_nb_iterations = VAR_3;

  VAR_5 = FUNC_6 (VAR_4, &VAR_9);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
      if (!FUNC_10 (VAR_4, VAR_5[VAR_8], &VAR_10, 0))
 continue;

      VAR_6 = VAR_10.niter;
      VAR_7 = FUNC_1 (VAR_6);
      if (!FUNC_12 (VAR_10.may_be_zero)
   && !FUNC_9 (VAR_10.may_be_zero))
 VAR_6 = FUNC_2 (VAR_0, VAR_7, VAR_10.may_be_zero,
   FUNC_3 (VAR_7, 0),
   VAR_6);
      FUNC_11 (VAR_4, VAR_6,
         VAR_10.additional_info,
         FUNC_8 (VAR_5[VAR_8]->src));
    }
  FUNC_5 (VAR_5);

  if (FUNC_4 (VAR_4->estimated_nb_iterations))
    FUNC_7 (VAR_4);
}
