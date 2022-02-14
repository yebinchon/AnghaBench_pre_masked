
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ci_array; } ;
struct ocfs2_caching_info {int ci_num_cached; TYPE_1__ ci_cache; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_caching_info *VAR_1,
     int VAR_2)
{
 sector_t *VAR_3 = VAR_1->ci_cache.ci_array;
 int VAR_4;

 FUNC_0(VAR_2 < 0 || VAR_2 >= VAR_0);
 FUNC_0(VAR_2 >= VAR_1->ci_num_cached);
 FUNC_0(!VAR_1->ci_num_cached);

 FUNC_2(0, "remove index %d (num_cached = %u\n", VAR_2,
      VAR_1->ci_num_cached);

 VAR_1->ci_num_cached--;



 if (VAR_1->ci_num_cached && VAR_2 < VAR_1->ci_num_cached) {
  VAR_4 = sizeof(sector_t) * (VAR_1->ci_num_cached - VAR_2);
  FUNC_1(&VAR_3[VAR_2], &VAR_3[VAR_2 + 1], VAR_4);
 }
}
