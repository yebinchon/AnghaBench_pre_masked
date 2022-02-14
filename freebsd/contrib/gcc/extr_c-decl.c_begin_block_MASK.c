
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct block_sema_info {struct block_sema_info* prev_block_info; } ;


 int VAR_0 ;
 struct block_sema_info* VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int) ;

tree
FUNC_2 (void)
{
  struct block_sema_info *VAR_2;



  VAR_2 = (struct block_sema_info*)FUNC_1 (1, sizeof (struct block_sema_info));
  VAR_2->prev_block_info = VAR_1;
  VAR_1 = VAR_2;
  return VAR_0;
}
