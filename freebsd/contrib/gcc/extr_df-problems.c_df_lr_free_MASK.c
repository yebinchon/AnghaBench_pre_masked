
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_lr_bb_info {int out; int in; int def; int use; } ;
struct dataflow {unsigned int block_info_size; struct dataflow* problem_data; struct dataflow* block_info; int block_pool; } ;


 int FUNC_0 (int ) ;
 struct df_lr_bb_info* FUNC_1 (struct dataflow*,unsigned int) ;
 int FUNC_2 (struct dataflow*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct dataflow *VAR_0)
{
  if (VAR_0->block_info)
    {
      unsigned int VAR_1;
      for (VAR_1 = 0; VAR_1 < VAR_0->block_info_size; VAR_1++)
 {
   struct df_lr_bb_info *VAR_2 = FUNC_1 (VAR_0, VAR_1);
   if (VAR_2)
     {
       FUNC_0 (VAR_2->use);
       FUNC_0 (VAR_2->def);
       FUNC_0 (VAR_2->in);
       FUNC_0 (VAR_2->out);
     }
 }
      FUNC_3 (VAR_0->block_pool);

      VAR_0->block_info_size = 0;
      FUNC_2 (VAR_0->block_info);
    }

  FUNC_2 (VAR_0->problem_data);
  FUNC_2 (VAR_0);
}
