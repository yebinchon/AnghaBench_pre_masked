
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct tree_niter_desc {scalar_t__ niter; int may_be_zero; } ;
struct loop {int dummy; } ;
typedef TYPE_1__* edge ;
struct TYPE_6__ {int src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__**) ;
 TYPE_1__** FUNC_3 (struct loop*,unsigned int*) ;
 int FUNC_4 (struct loop*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct loop*,TYPE_1__*,struct tree_niter_desc*,int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;

tree
FUNC_9 (struct loop *VAR_4, edge *VAR_5)
{
  unsigned VAR_6, VAR_7;
  edge *VAR_8 = FUNC_3 (VAR_4, &VAR_6);
  edge VAR_9;
  tree VAR_10 = VAR_1, VAR_11;
  struct tree_niter_desc VAR_12;

  *VAR_5 = ((void*)0);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    {
      VAR_9 = VAR_8[VAR_7];
      if (!FUNC_4 (VAR_4, VAR_9->src))
 continue;

      if (!FUNC_6 (VAR_4, VAR_9, &VAR_12, 0))
 continue;

      if (FUNC_5 (VAR_12.may_be_zero))
 {


   VAR_10 = FUNC_1 (VAR_3, 0);
   *VAR_5 = VAR_9;
   break;
 }

      if (!FUNC_8 (VAR_12.may_be_zero))
 continue;

      VAR_11 = VAR_12.niter;

      if (!VAR_10)
 {

   VAR_10 = VAR_11;
   *VAR_5 = VAR_9;
   continue;
 }


      if (FUNC_0 (VAR_11) != VAR_0)
 continue;

      if (FUNC_0 (VAR_10) != VAR_0)
 {
   VAR_10 = VAR_11;
   *VAR_5 = VAR_9;
   continue;
 }

      if (FUNC_7 (VAR_11, VAR_10))
 {
   VAR_10 = VAR_11;
   *VAR_5 = VAR_9;
   continue;
 }
    }
  FUNC_2 (VAR_8);

  return VAR_10 ? VAR_10 : VAR_2;
}
