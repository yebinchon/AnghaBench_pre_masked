
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct mem_ref_group {int dummy; } ;
struct loop {unsigned int num_nodes; } ;
typedef int block_stmt_iterator ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {struct loop* loop_father; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__**) ;
 int FUNC_8 (struct loop*,struct mem_ref_group**,int ,int,int ) ;
 TYPE_1__** FUNC_9 (struct loop*) ;

__attribute__((used)) static struct mem_ref_group *
FUNC_10 (struct loop *VAR_1)
{
  basic_block *VAR_2 = FUNC_9 (VAR_1);
  basic_block VAR_3;
  unsigned VAR_4;
  block_stmt_iterator VAR_5;
  tree VAR_6, VAR_7, VAR_8;
  struct mem_ref_group *VAR_9 = ((void*)0);



  for (VAR_4 = 0; VAR_4 < VAR_1->num_nodes; VAR_4++)
    {
      VAR_3 = VAR_2[VAR_4];
      if (VAR_3->loop_father != VAR_1)
 continue;

      for (VAR_5 = FUNC_5 (VAR_3); !FUNC_3 (VAR_5); FUNC_4 (&VAR_5))
 {
   VAR_6 = FUNC_6 (VAR_5);
   if (FUNC_1 (VAR_6) != VAR_0)
     continue;

   VAR_7 = FUNC_2 (VAR_6, 0);
   VAR_8 = FUNC_2 (VAR_6, 1);

   if (FUNC_0 (VAR_8))
     FUNC_8 (VAR_1, &VAR_9, VAR_8, 0, VAR_6);
   if (FUNC_0 (VAR_7))
     FUNC_8 (VAR_1, &VAR_9, VAR_7, 1, VAR_6);
 }
    }
  FUNC_7 (VAR_2);

  return VAR_9;
}
