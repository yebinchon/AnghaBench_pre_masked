
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* ks_data; } ;
typedef TYPE_1__ kstat_t ;
struct TYPE_5__ {int arcstat_mfu_ghost_evictable_metadata; int arcstat_mfu_ghost_evictable_data; int arcstat_mfu_ghost_size; int arcstat_mfu_evictable_metadata; int arcstat_mfu_evictable_data; int arcstat_mfu_size; int arcstat_mru_ghost_evictable_metadata; int arcstat_mru_ghost_evictable_data; int arcstat_mru_ghost_size; int arcstat_mru_evictable_metadata; int arcstat_mru_evictable_data; int arcstat_mru_size; int arcstat_anon_evictable_metadata; int arcstat_anon_evictable_data; int arcstat_anon_size; } ;
typedef TYPE_2__ arc_stats_t ;
typedef scalar_t__ ARCSTAT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_2(kstat_t *VAR_16, int VAR_17)
{
 arc_stats_t *VAR_18 = VAR_16->ks_data;

 if (VAR_17 == VAR_1) {
  return (VAR_0);
 } else {
  FUNC_1(VAR_2,
      &VAR_18->arcstat_anon_size,
      &VAR_18->arcstat_anon_evictable_data,
      &VAR_18->arcstat_anon_evictable_metadata);
  FUNC_1(VAR_6,
      &VAR_18->arcstat_mru_size,
      &VAR_18->arcstat_mru_evictable_data,
      &VAR_18->arcstat_mru_evictable_metadata);
  FUNC_1(VAR_7,
      &VAR_18->arcstat_mru_ghost_size,
      &VAR_18->arcstat_mru_ghost_evictable_data,
      &VAR_18->arcstat_mru_ghost_evictable_metadata);
  FUNC_1(VAR_4,
      &VAR_18->arcstat_mfu_size,
      &VAR_18->arcstat_mfu_evictable_data,
      &VAR_18->arcstat_mfu_evictable_metadata);
  FUNC_1(VAR_5,
      &VAR_18->arcstat_mfu_ghost_size,
      &VAR_18->arcstat_mfu_ghost_evictable_data,
      &VAR_18->arcstat_mfu_ghost_evictable_metadata);

  ARCSTAT(VAR_19) = FUNC_0(&VAR_8);
  ARCSTAT(VAR_20) = FUNC_0(&VAR_3);
  ARCSTAT(VAR_21) = FUNC_0(&VAR_10);
  ARCSTAT(VAR_22) =
      FUNC_0(&VAR_15);
  ARCSTAT(VAR_23) = FUNC_0(&VAR_13);
  ARCSTAT(VAR_24) = FUNC_0(&VAR_9);
  ARCSTAT(VAR_25) = FUNC_0(&VAR_12);
  ARCSTAT(VAR_26) = FUNC_0(&VAR_11);





  ARCSTAT(VAR_27) = FUNC_0(&VAR_14);
 }

 return (0);
}
