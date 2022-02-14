
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct block_sema_info {struct block_sema_info* prev_block_info; } ;


 struct block_sema_info* VAR_0 ;
 int FUNC_0 () ;

struct block_sema_info *
FUNC_1 (tree VAR_1 __attribute__ ((__unused__)))
{
  struct block_sema_info *VAR_2 = VAR_0;
  VAR_0 = VAR_0->prev_block_info;



  return VAR_2;
}
