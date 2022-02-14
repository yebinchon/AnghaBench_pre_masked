
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct block_sema_info {struct block_sema_info* prev_block_info; } ;


 struct block_sema_info* VAR_0 ;
 int FUNC_0 (scalar_t__) ;

struct block_sema_info *
FUNC_1 (tree VAR_1)
{
  struct block_sema_info *VAR_2 = VAR_0;
  VAR_0 = VAR_0->prev_block_info;





  VAR_1 = 0;

  return VAR_2;
}
