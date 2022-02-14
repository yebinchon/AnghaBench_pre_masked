
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int own_freq_preference; } ;


 int FUNC_0 (struct p2p_data*,char*,int) ;

void FUNC_1(struct p2p_data *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, "Own frequency preference: %d MHz", VAR_1);
 VAR_0->own_freq_preference = VAR_1;
}
