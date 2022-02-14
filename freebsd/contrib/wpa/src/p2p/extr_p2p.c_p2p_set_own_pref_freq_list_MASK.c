
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {unsigned int num_pref_freq; unsigned int* pref_freq_list; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct p2p_data*,char*,unsigned int,unsigned int) ;

void FUNC_1(struct p2p_data *VAR_1,
    const unsigned int *VAR_2,
    unsigned int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 VAR_1->num_pref_freq = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_1->pref_freq_list[VAR_4] = VAR_2[VAR_4];
  FUNC_0(VAR_1, "Own preferred frequency list[%u]=%u MHz",
   VAR_4, VAR_1->pref_freq_list[VAR_4]);
 }
}
