
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
struct ttm_mem_zone {char* name; scalar_t__ max_mem; } ;
struct ttm_mem_global {int num_zones; TYPE_1__* zone_kernel; struct ttm_mem_zone** zones; int kobj_ref; int work; int swap_queue; int lock; } ;
struct TYPE_2__ {int max_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,struct ttm_mem_global*) ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,unsigned long long) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,int ,int ,int *) ;
 int FUNC_5 (int *,int,int ,char*) ;
 int VAR_5 ;
 int FUNC_6 (struct ttm_mem_global*,int) ;
 int FUNC_7 (struct ttm_mem_global*) ;
 int FUNC_8 (struct ttm_mem_global*,int) ;
 int FUNC_9 (struct ttm_mem_global*,int) ;
 int FUNC_10 (struct ttm_mem_global*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct ttm_mem_global *VAR_7)
{
 u_int64_t VAR_8;
 int VAR_9;
 int VAR_10;
 struct ttm_mem_zone *VAR_11;

 FUNC_1(&VAR_7->lock, "ttmgz", ((void*)0), VAR_0);
 VAR_7->swap_queue = FUNC_4("ttm_swap", VAR_1,
     VAR_5, &VAR_7->swap_queue);
 FUNC_5(&VAR_7->swap_queue, 1, VAR_3, "ttm swap");
 FUNC_0(&VAR_7->work, 0, VAR_6, VAR_7);

 FUNC_3(&VAR_7->kobj_ref, 1);

 VAR_8 = VAR_4 * VAR_2;

 VAR_9 = FUNC_9(VAR_7, VAR_8);
 if (FUNC_11(VAR_9 != 0))
  goto out_no_zone;
 VAR_9 = FUNC_8(VAR_7, VAR_8);
 if (FUNC_11(VAR_9 != 0))
  goto out_no_zone;
 for (VAR_10 = 0; VAR_10 < VAR_7->num_zones; ++VAR_10) {
  VAR_11 = VAR_7->zones[VAR_10];
  FUNC_2("[TTM] Zone %7s: Available graphics memory: %llu kiB\n",
   VAR_11->name, (unsigned long long)VAR_11->max_mem >> 10);
 }
 FUNC_10(VAR_7, VAR_7->zone_kernel->max_mem/(2*VAR_2));
 FUNC_6(VAR_7, VAR_7->zone_kernel->max_mem/(2*VAR_2));
 return 0;
out_no_zone:
 FUNC_7(VAR_7);
 return VAR_9;
}
