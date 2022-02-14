
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int header; } ;
struct ivopts_data {struct loop* current_loop; } ;
struct iv {int biv_p; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {int flags; struct loop* loop_father; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int ) ;
 struct iv* FUNC_5 (struct ivopts_data*,scalar_t__) ;
 int FUNC_6 (struct loop*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (struct ivopts_data *VAR_1)
{
  tree VAR_2, VAR_3;
  struct iv *VAR_4, *VAR_5;
  struct loop *VAR_6 = VAR_1->current_loop;
  basic_block VAR_7;

  for (VAR_2 = FUNC_7 (VAR_6->header); VAR_2; VAR_2 = FUNC_1 (VAR_2))
    {
      VAR_4 = FUNC_5 (VAR_1, FUNC_2 (VAR_2));
      if (!VAR_4)
 continue;

      VAR_3 = FUNC_0 (VAR_2, FUNC_6 (VAR_6));
      VAR_5 = FUNC_5 (VAR_1, VAR_3);
      if (!VAR_5)
 continue;


      VAR_7 = FUNC_4 (FUNC_3 (VAR_3));
      if (VAR_7->loop_father != VAR_1->current_loop
   || (VAR_7->flags & VAR_0))
 continue;

      VAR_4->biv_p = 1;
      VAR_5->biv_p = 1;
    }
}
