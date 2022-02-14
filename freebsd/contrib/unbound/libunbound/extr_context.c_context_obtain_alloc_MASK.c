
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_cache {struct alloc_cache* super; } ;
struct ub_ctx {struct alloc_cache superalloc; int cfglock; int thr_next_num; struct alloc_cache* alloc_list; } ;


 int FUNC_0 (struct alloc_cache*,struct alloc_cache*,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct alloc_cache*
FUNC_4(struct ub_ctx* VAR_0, int VAR_1)
{
 struct alloc_cache* VAR_2;
 int VAR_3 = 0;
 if(VAR_1) {
  FUNC_2(&VAR_0->cfglock);
 }
 VAR_2 = VAR_0->alloc_list;
 if(VAR_2)
  VAR_0->alloc_list = VAR_2->super;
 else VAR_3 = VAR_0->thr_next_num++;
 if(VAR_1) {
  FUNC_3(&VAR_0->cfglock);
 }
 if(VAR_2) {
  VAR_2->super = &VAR_0->superalloc;
  return VAR_2;
 }
 VAR_2 = (struct alloc_cache*)FUNC_1(1, sizeof(*VAR_2));
 if(!VAR_2)
  return ((void*)0);
 FUNC_0(VAR_2, &VAR_0->superalloc, VAR_3);
 return VAR_2;
}
