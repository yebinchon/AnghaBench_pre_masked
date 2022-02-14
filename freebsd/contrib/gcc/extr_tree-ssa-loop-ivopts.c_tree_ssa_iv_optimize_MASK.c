
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {struct loop* tree_root; } ;
struct loop {struct loop* outer; struct loop* inner; struct loop* next; } ;
struct ivopts_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct loop*,scalar_t__,int *,int) ;
 int FUNC_1 (struct ivopts_data*) ;
 int FUNC_2 (struct ivopts_data*) ;
 int FUNC_3 (struct ivopts_data*,struct loop*) ;

void
FUNC_4 (struct loops *VAR_3)
{
  struct loop *VAR_4;
  struct ivopts_data VAR_5;

  FUNC_2 (&VAR_5);


  VAR_4 = VAR_3->tree_root;
  while (VAR_4->inner)
    VAR_4 = VAR_4->inner;


  while (VAR_4 != VAR_3->tree_root)
    {
      if (VAR_1 && (VAR_2 & VAR_0))
 FUNC_0 (VAR_4, VAR_1, ((void*)0), 1);

      FUNC_3 (&VAR_5, VAR_4);

      if (VAR_4->next)
 {
   VAR_4 = VAR_4->next;
   while (VAR_4->inner)
     VAR_4 = VAR_4->inner;
 }
      else
 VAR_4 = VAR_4->outer;
    }

  FUNC_1 (&VAR_5);
}
