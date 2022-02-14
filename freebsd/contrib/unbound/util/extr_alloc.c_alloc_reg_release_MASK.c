
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {char* next; } ;
struct alloc_cache {scalar_t__ num_reg_blocks; scalar_t__ max_reg_blocks; struct regional* reg_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct regional*) ;
 int FUNC_2 (struct regional*) ;

void
FUNC_3(struct alloc_cache* VAR_0, struct regional* VAR_1)
{
 if(VAR_0->num_reg_blocks >= VAR_0->max_reg_blocks) {
  FUNC_1(VAR_1);
  return;
 }
 if(!VAR_1) return;
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->next == ((void*)0));
 VAR_1->next = (char*)VAR_0->reg_list;
 VAR_0->reg_list = VAR_1;
 VAR_0->num_reg_blocks++;
}
