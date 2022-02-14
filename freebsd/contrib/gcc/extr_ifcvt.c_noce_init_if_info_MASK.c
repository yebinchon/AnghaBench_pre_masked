
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noce_if_info {void* jump; void* cond; void* test_bb; int cond_earliest; } ;
struct ce_if_block {scalar_t__ num_or_or_blocks; scalar_t__ num_and_and_blocks; scalar_t__ num_multiple_test_blocks; void* last_test_bb; void* test_bb; int and_and_p; scalar_t__ else_bb; } ;
typedef void* rtx ;
typedef void* basic_block ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (void*,int *) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int
FUNC_5 (struct ce_if_block *VAR_3, struct noce_if_info *VAR_4)
{
  basic_block VAR_5 = VAR_3->test_bb;
  rtx VAR_6, VAR_7;



  if (VAR_3->num_multiple_test_blocks)
    {
      if (VAR_3->else_bb || !VAR_3->and_and_p)
 return VAR_1;

      VAR_3->test_bb = VAR_5 = VAR_3->last_test_bb;
      VAR_3->num_multiple_test_blocks = 0;
      VAR_3->num_and_and_blocks = 0;
      VAR_3->num_or_or_blocks = 0;
    }


  VAR_7 = FUNC_0 (VAR_5);
  VAR_6 = FUNC_3 (VAR_7, &VAR_4->cond_earliest);
  if (!VAR_6)
    return VAR_1;



  if (! FUNC_4 (VAR_7))
    return VAR_1;


  if (FUNC_1 (FUNC_2 (VAR_6, 0)) == VAR_0)
    return VAR_1;

  VAR_4->test_bb = VAR_5;
  VAR_4->cond = VAR_6;
  VAR_4->jump = VAR_7;

  return VAR_2;
}
