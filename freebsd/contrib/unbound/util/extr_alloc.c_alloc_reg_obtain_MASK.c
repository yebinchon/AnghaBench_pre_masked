
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int * next; } ;
struct alloc_cache {scalar_t__ num_reg_blocks; struct regional* reg_list; } ;


 int VAR_0 ;
 struct regional* FUNC_0 (int ) ;

struct regional*
FUNC_1(struct alloc_cache* VAR_1)
{
 if(VAR_1->num_reg_blocks > 0) {
  struct regional* VAR_2 = VAR_1->reg_list;
  VAR_1->reg_list = (struct regional*)VAR_2->next;
  VAR_2->next = ((void*)0);
  VAR_1->num_reg_blocks--;
  return VAR_2;
 }
 return FUNC_0(VAR_0);
}
