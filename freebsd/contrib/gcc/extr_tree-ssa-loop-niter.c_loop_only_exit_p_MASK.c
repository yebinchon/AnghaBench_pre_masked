
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {scalar_t__ single_exit; unsigned int num_nodes; } ;
typedef scalar_t__ edge ;
typedef int block_stmt_iterator ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (struct loop*) ;

__attribute__((used)) static bool
FUNC_8 (struct loop *VAR_0, edge VAR_1)
{
  basic_block *VAR_2;
  block_stmt_iterator VAR_3;
  unsigned VAR_4;
  tree VAR_5;

  if (VAR_1 != VAR_0->single_exit)
    return 0;

  VAR_2 = FUNC_7 (VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_0->num_nodes; VAR_4++)
    {
      for (VAR_3 = FUNC_3 (VAR_2[0]); !FUNC_1 (VAR_3); FUNC_2 (&VAR_3))
 {
   VAR_5 = FUNC_6 (FUNC_4 (VAR_3));
   if (VAR_5 && FUNC_0 (VAR_5))
     {
       FUNC_5 (VAR_2);
       return 0;
     }
 }
    }

  FUNC_5 (VAR_2);
  return 1;
}
