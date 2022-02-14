
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p2p_data {TYPE_2__* cfg; } ;
struct p2p_channels {int dummy; } ;
struct TYPE_4__ {unsigned int num_pref_chan; TYPE_1__* pref_chan; struct p2p_channels const channels; } ;
struct TYPE_3__ {int chan; int op_class; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct p2p_channels const*,int) ;

unsigned int FUNC_2(struct p2p_data *VAR_0,
          const struct p2p_channels *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3 = 0;
 const struct p2p_channels *VAR_4 = VAR_1 ?
  VAR_1 : &VAR_0->cfg->channels;

 if (VAR_4 == ((void*)0))
  return 0;

 for (VAR_2 = 0; VAR_0->cfg->pref_chan && VAR_2 < VAR_0->cfg->num_pref_chan; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0->cfg->pref_chan[VAR_2].op_class,
        VAR_0->cfg->pref_chan[VAR_2].chan);
  if (FUNC_1(VAR_4, VAR_3))
   return VAR_3;
 }
 return 0;
}
