
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct alloc_cache {int thread_num; int next_id; int last_id; int max_reg_blocks; int lock; struct alloc_cache* super; int * cleanup_arg; int * cleanup; int * reg_list; scalar_t__ num_reg_blocks; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct alloc_cache*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct alloc_cache*,int ,int) ;
 int FUNC_3 (struct alloc_cache*,int) ;

void
FUNC_4(struct alloc_cache* VAR_1, struct alloc_cache* VAR_2,
 int VAR_3)
{
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->super = VAR_2;
 VAR_1->thread_num = VAR_3;
 VAR_1->next_id = (uint64_t)VAR_3;
 VAR_1->next_id <<= VAR_0;
 VAR_1->last_id = 1;
 VAR_1->last_id <<= VAR_0;
 VAR_1->last_id -= 1;
 VAR_1->last_id |= VAR_1->next_id;
 VAR_1->next_id += 1;
 VAR_1->max_reg_blocks = 100;
 VAR_1->num_reg_blocks = 0;
 VAR_1->reg_list = ((void*)0);
 VAR_1->cleanup = ((void*)0);
 VAR_1->cleanup_arg = ((void*)0);
 if(VAR_1->super)
  FUNC_3(VAR_1, VAR_1->max_reg_blocks);
 if(!VAR_1->super) {
  FUNC_1(&VAR_1->lock);
  FUNC_0(&VAR_1->lock, VAR_1, sizeof(*VAR_1));
 }
}
