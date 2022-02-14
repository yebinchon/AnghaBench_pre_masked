
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {unsigned int num_nodes; } ;
typedef int block_stmt_iterator ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (struct loop*) ;

unsigned
FUNC_7 (struct loop *VAR_0)
{
  basic_block *VAR_1 = FUNC_6 (VAR_0);
  block_stmt_iterator VAR_2;
  unsigned VAR_3 = 1, VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0->num_nodes; VAR_4++)
    for (VAR_2 = FUNC_2 (VAR_1[VAR_4]); !FUNC_0 (VAR_2); FUNC_1 (&VAR_2))
      VAR_3 += FUNC_4 (FUNC_3 (VAR_2));
  FUNC_5 (VAR_1);

  return VAR_3;
}
