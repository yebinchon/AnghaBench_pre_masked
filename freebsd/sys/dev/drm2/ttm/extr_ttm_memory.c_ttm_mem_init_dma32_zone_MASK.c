
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_mem_zone {char* name; int zone_mem; int max_mem; int emer_mem; int swap_limit; int kobj_ref; struct ttm_mem_global* glob; scalar_t__ used_mem; } ;
struct ttm_mem_global {int num_zones; struct ttm_mem_zone** zones; struct ttm_mem_zone* zone_dma32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ttm_mem_zone*,int ) ;
 struct ttm_mem_zone* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct ttm_mem_global *VAR_3,
    uint64_t VAR_4)
{
 struct ttm_mem_zone *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);





 if (VAR_4 <= ((uint64_t) 1ULL << 32)) {
  FUNC_0(VAR_5, VAR_0);
  return 0;
 }







 VAR_4 = ((uint64_t) 1ULL << 32);
 VAR_5->name = "dma32";
 VAR_5->zone_mem = VAR_4;
 VAR_5->max_mem = VAR_4 >> 1;
 VAR_5->emer_mem = (VAR_4 >> 1) + (VAR_4 >> 2);
 VAR_5->swap_limit = VAR_5->max_mem - (VAR_4 >> 3);
 VAR_5->used_mem = 0;
 VAR_5->glob = VAR_3;
 VAR_3->zone_dma32 = VAR_5;
 FUNC_2(&VAR_5->kobj_ref, 1);
 VAR_3->zones[VAR_3->num_zones++] = VAR_5;
 return 0;
}
