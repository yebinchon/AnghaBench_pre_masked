
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_mem_shrink {int (* do_shrink ) (struct ttm_mem_shrink*) ;} ;
struct ttm_mem_global {int lock; struct ttm_mem_shrink* shrink; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ttm_mem_shrink*) ;
 scalar_t__ FUNC_3 (struct ttm_mem_global*,int,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ttm_mem_global *VAR_0, bool VAR_1,
         uint64_t VAR_2)
{
 int VAR_3;
 struct ttm_mem_shrink *VAR_4;

 FUNC_0(&VAR_0->lock);
 if (VAR_0->shrink == ((void*)0))
  goto out;

 while (FUNC_3(VAR_0, VAR_1, VAR_2)) {
  VAR_4 = VAR_0->shrink;
  FUNC_1(&VAR_0->lock);
  VAR_3 = VAR_4->do_shrink(VAR_4);
  FUNC_0(&VAR_0->lock);
  if (FUNC_4(VAR_3 != 0))
   goto out;
 }
out:
 FUNC_1(&VAR_0->lock);
}
