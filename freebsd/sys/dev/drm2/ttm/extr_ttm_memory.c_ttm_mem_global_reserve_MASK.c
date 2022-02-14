
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ttm_mem_zone {scalar_t__ emer_mem; scalar_t__ max_mem; scalar_t__ used_mem; } ;
struct ttm_mem_global {unsigned int num_zones; int lock; struct ttm_mem_zone** zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ttm_mem_global*) ;

__attribute__((used)) static int FUNC_4(struct ttm_mem_global *VAR_3,
      struct ttm_mem_zone *VAR_4,
      uint64_t VAR_5, bool VAR_6)
{
 uint64_t VAR_7;
 int VAR_8 = -VAR_0;
 unsigned int VAR_9;
 struct ttm_mem_zone *VAR_10;

 FUNC_0(&VAR_3->lock);
 for (VAR_9 = 0; VAR_9 < VAR_3->num_zones; ++VAR_9) {
  VAR_10 = VAR_3->zones[VAR_9];
  if (VAR_4 && VAR_10 != VAR_4)
   continue;

  VAR_7 = (FUNC_2(VAR_2, VAR_1) == 0) ?
   VAR_10->emer_mem : VAR_10->max_mem;

  if (VAR_10->used_mem > VAR_7)
   goto out_unlock;
 }

 if (VAR_6) {
  for (VAR_9 = 0; VAR_9 < VAR_3->num_zones; ++VAR_9) {
   VAR_10 = VAR_3->zones[VAR_9];
   if (VAR_4 && VAR_10 != VAR_4)
    continue;
   VAR_10->used_mem += VAR_5;
  }
 }

 VAR_8 = 0;
out_unlock:
 FUNC_1(&VAR_3->lock);
 FUNC_3(VAR_3);

 return VAR_8;
}
