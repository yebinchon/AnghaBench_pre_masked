
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct function {int dummy; } ;
typedef int block_stmt_iterator ;
typedef int basic_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct function*,int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct function*,int ) ;

__attribute__((used)) static int
FUNC_10 (struct function *VAR_1,
    basic_block VAR_2, int VAR_3)
{
  block_stmt_iterator VAR_4;

  for (VAR_4 = FUNC_5 (VAR_2); !FUNC_3 (VAR_4); FUNC_4 (&VAR_4))
    {
      tree VAR_5 = FUNC_6 (VAR_4);
      int VAR_6;

      if (FUNC_0 (VAR_5) == VAR_0)
 VAR_6 = FUNC_1 (FUNC_2 (VAR_5, 0));
      else
 VAR_6 = FUNC_9 (VAR_1, VAR_5);
      if (VAR_6 > 0)
 {
   if (VAR_3 < 0)
     VAR_3 = VAR_6;
   else if (VAR_6 != VAR_3)
     {
       VAR_3 = FUNC_7 (VAR_1, VAR_6, VAR_3);
       FUNC_8 (VAR_3 != -1);
     }
 }
    }

  return VAR_3;
}
