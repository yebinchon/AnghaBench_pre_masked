
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
struct mv88e6xxx_priv_state {int stats_mutex; } ;
struct mv88e6xxx_hw_stat {int sizeof_stat; scalar_t__ reg; } ;
struct dsa_switch {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dsa_switch*,scalar_t__,int*) ;
 int FUNC_3 (struct dsa_switch*,int) ;

void FUNC_4(struct dsa_switch *VAR_0,
     int VAR_1, struct mv88e6xxx_hw_stat *VAR_2,
     int VAR_3, uint64_t *VAR_4)
{
 struct mv88e6xxx_priv_state *VAR_5 = (void *)(VAR_0 + 1);
 int VAR_6;
 int VAR_7;

 FUNC_0(&VAR_5->stats_mutex);

 VAR_6 = FUNC_3(VAR_0, VAR_3);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_5->stats_mutex);
  return;
 }




 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  struct mv88e6xxx_hw_stat *VAR_8 = VAR_2 + VAR_7;
  u32 VAR_9;
  u32 VAR_10;

  FUNC_2(VAR_0, VAR_8->reg, &VAR_9);
  if (VAR_8->sizeof_stat == 8)
   FUNC_2(VAR_0, VAR_8->reg + 1, &VAR_10);
  else
   VAR_10 = 0;

  VAR_4[VAR_7] = (((u64)VAR_10) << 32) | VAR_9;
 }

 FUNC_1(&VAR_5->stats_mutex);
}
