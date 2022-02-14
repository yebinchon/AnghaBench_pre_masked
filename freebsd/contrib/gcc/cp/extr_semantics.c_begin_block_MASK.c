
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct block_sema_info {struct block_sema_info* prev_block_info; } ;
struct TYPE_2__ {int stmts_are_full_exprs_p; } ;


 int VAR_0 ;
 struct block_sema_info* VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int) ;

tree
FUNC_3 (void)
{
  struct block_sema_info *VAR_3;
  tree VAR_4;

  FUNC_0 ()->stmts_are_full_exprs_p = 1;



  VAR_4 = VAR_0;

  VAR_3 = (struct block_sema_info*)FUNC_2 (1, sizeof (struct block_sema_info));
  VAR_3->prev_block_info = VAR_1;
  VAR_1 = VAR_3;
  return VAR_4;
}
