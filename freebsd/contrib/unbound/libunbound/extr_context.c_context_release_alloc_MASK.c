
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int cfglock; struct alloc_cache* alloc_list; } ;
struct alloc_cache {struct alloc_cache* super; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct ub_ctx* VAR_0, struct alloc_cache* VAR_1,
 int VAR_2)
{
 if(!VAR_0 || !VAR_1)
  return;
 if(VAR_2) {
  FUNC_0(&VAR_0->cfglock);
 }
 VAR_1->super = VAR_0->alloc_list;
 VAR_0->alloc_list = VAR_1;
 if(VAR_2) {
  FUNC_1(&VAR_0->cfglock);
 }
}
