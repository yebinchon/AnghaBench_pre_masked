
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {unsigned int num_nodes; TYPE_1__* header; } ;
typedef int block_stmt_iterator ;
typedef TYPE_1__* basic_block ;
struct TYPE_8__ {int * phi_nodes; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct loop*,TYPE_1__*,scalar_t__*,int *) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_6 (struct loop *VAR_1)
{
  basic_block VAR_2;
  unsigned int VAR_3 = VAR_1->num_nodes;
  unsigned int VAR_4;


  for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++)
    {
      tree VAR_5, VAR_6;
      block_stmt_iterator VAR_7;
      basic_block VAR_8 = ((void*)0);
      VAR_2 = VAR_0[VAR_4];

      if (VAR_2 == VAR_1->header)
 continue;

      VAR_5 = FUNC_3 (VAR_2);
      VAR_7 = FUNC_1 (VAR_2);



      if (VAR_5)
 VAR_8 = FUNC_2 (VAR_1, VAR_2, &VAR_6, &VAR_7);

      while (VAR_5)
 {
   tree VAR_9 = FUNC_0 (VAR_5);
   FUNC_5 (VAR_5, VAR_6, VAR_8, &VAR_7);
   FUNC_4 (VAR_5);
   VAR_5 = VAR_9;
 }
      VAR_2->phi_nodes = ((void*)0);
    }
  return;
}
