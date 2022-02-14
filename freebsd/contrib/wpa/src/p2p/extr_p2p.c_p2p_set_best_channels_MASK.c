
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int best_freq_24; int best_freq_5; int best_freq_overall; } ;


 int FUNC_0 (struct p2p_data*,char*,int,int,int) ;

void FUNC_1(struct p2p_data *VAR_0, int VAR_1, int VAR_2,
      int VAR_3)
{
 FUNC_0(VAR_0, "Best channel: 2.4 GHz: %d,  5 GHz: %d,  overall: %d",
  VAR_1, VAR_2, VAR_3);
 VAR_0->best_freq_24 = VAR_1;
 VAR_0->best_freq_5 = VAR_2;
 VAR_0->best_freq_overall = VAR_3;
}
