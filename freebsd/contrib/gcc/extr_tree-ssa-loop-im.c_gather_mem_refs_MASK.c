
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref {int dummy; } ;
struct loop {unsigned int num_nodes; } ;
typedef int htab_t ;
typedef int block_stmt_iterator ;
typedef int bitmap ;
typedef int basic_block ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct loop*,int ,int ,int ,struct mem_ref**) ;
 int * FUNC_6 (struct loop*) ;
 int FUNC_7 (int,int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct mem_ref *
FUNC_9 (struct loop *VAR_2, bitmap VAR_3)
{
  basic_block *VAR_4 = FUNC_6 (VAR_2);
  block_stmt_iterator VAR_5;
  unsigned VAR_6;
  struct mem_ref *VAR_7 = ((void*)0);
  htab_t VAR_8 = FUNC_7 (100, VAR_1, VAR_0, ((void*)0));

  for (VAR_6 = 0; VAR_6 < VAR_2->num_nodes; VAR_6++)
    {
      for (VAR_5 = FUNC_2 (VAR_4[VAR_6]); !FUNC_0 (VAR_5); FUNC_1 (&VAR_5))
 FUNC_5 (VAR_2, VAR_8, VAR_3, FUNC_3 (VAR_5),
         &VAR_7);
    }

  FUNC_4 (VAR_4);

  FUNC_8 (VAR_8);
  return VAR_7;
}
