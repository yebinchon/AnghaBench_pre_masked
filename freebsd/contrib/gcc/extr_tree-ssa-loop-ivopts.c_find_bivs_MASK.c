
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int header; } ;
struct ivopts_data {struct loop* current_loop; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct loop*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ivopts_data*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_12 (struct ivopts_data *VAR_0)
{
  tree VAR_1, VAR_2, VAR_3, VAR_4;
  bool VAR_5 = 0;
  struct loop *VAR_6 = VAR_0->current_loop;

  for (VAR_1 = FUNC_10 (VAR_6->header); VAR_1; VAR_1 = FUNC_1 (VAR_1))
    {
      if (FUNC_3 (FUNC_2 (VAR_1)))
 continue;

      VAR_2 = FUNC_6 (VAR_1);
      if (!VAR_2)
 continue;

      VAR_4 = FUNC_0 (VAR_1, FUNC_9 (VAR_6));
      VAR_4 = FUNC_7 (VAR_4);
      if (FUNC_5 (VAR_4)
   || FUNC_5 (VAR_2))
 continue;

      VAR_3 = FUNC_4 (FUNC_2 (VAR_1));
      VAR_4 = FUNC_8 (VAR_3, VAR_4);
      if (VAR_2)
 VAR_2 = FUNC_8 (VAR_3, VAR_2);

      FUNC_11 (VAR_0, FUNC_2 (VAR_1), VAR_4, VAR_2);
      VAR_5 = 1;
    }

  return VAR_5;
}
