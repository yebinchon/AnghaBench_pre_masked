
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct udma_rlimit_common {int mask; int cfg_token_size_2; int cfg_token_size_1; int cfg_cycle; int cfg_1s; } ;
struct al_udma_m2s_rlimit_cfg {int max_burst_sz; int long_cycle_sz; int long_cycle; int short_cycle; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct udma_rlimit_common *VAR_6,
       struct al_udma_m2s_rlimit_cfg *VAR_7)
{
 uint32_t VAR_8 = FUNC_0(&VAR_6->cfg_1s);

 VAR_8 &= ~VAR_1;
 VAR_8 &= ~VAR_0;
 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_7->max_burst_sz &
  VAR_1;
 FUNC_1(&VAR_6->cfg_1s, VAR_8);

 VAR_8 = FUNC_0(&VAR_6->cfg_cycle);
 VAR_8 &= ~VAR_3;
 VAR_8 |= VAR_7->long_cycle_sz &
  VAR_3;
 FUNC_1(&VAR_6->cfg_cycle, VAR_8);

 VAR_8 = FUNC_0(&VAR_6->cfg_token_size_1);
 VAR_8 &= ~VAR_4;
 VAR_8 |= VAR_7->long_cycle &
  VAR_4;
 FUNC_1(&VAR_6->cfg_token_size_1, VAR_8);

 VAR_8 = FUNC_0(&VAR_6->cfg_token_size_2);
 VAR_8 &= ~VAR_5;
 VAR_8 |= VAR_7->short_cycle &
  VAR_5;
 FUNC_1(&VAR_6->cfg_token_size_2, VAR_8);

 VAR_8 = FUNC_0(&VAR_6->mask);
 VAR_8 &= ~0xf;
 VAR_8 |= VAR_7->mask & 0xf;
 FUNC_1(&VAR_6->mask, VAR_8);

 return 0;
}
