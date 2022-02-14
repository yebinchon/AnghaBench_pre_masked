
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct p2p_data {int no_go_freq; TYPE_1__* cfg; } ;
struct TYPE_2__ {int channels; } ;


 int FUNC_0 (int *,unsigned int) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (unsigned int,int *,int *) ;

int FUNC_3(struct p2p_data *VAR_0, unsigned int VAR_1)
{
 u8 VAR_2, VAR_3;
 if (FUNC_2(VAR_1, &VAR_2, &VAR_3) < 0)
  return 0;
 return FUNC_1(&VAR_0->cfg->channels, VAR_2,
         VAR_3) &&
  !FUNC_0(&VAR_0->no_go_freq, VAR_1);
}
