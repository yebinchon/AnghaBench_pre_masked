
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shm_info {int swap_successes; int swap_attempts; int shm_swp; int shm_rss; int shm_tot; int used_ids; } ;
struct l_shm_info {int swap_successes; int swap_attempts; int shm_swp; int shm_rss; int shm_tot; int used_ids; } ;



__attribute__((used)) static void
FUNC_0( struct shm_info *VAR_0, struct l_shm_info *VAR_1)
{

 VAR_1->used_ids = VAR_0->used_ids;
 VAR_1->shm_tot = VAR_0->shm_tot;
 VAR_1->shm_rss = VAR_0->shm_rss;
 VAR_1->shm_swp = VAR_0->shm_swp;
 VAR_1->swap_attempts = VAR_0->swap_attempts;
 VAR_1->swap_successes = VAR_0->swap_successes;
}
