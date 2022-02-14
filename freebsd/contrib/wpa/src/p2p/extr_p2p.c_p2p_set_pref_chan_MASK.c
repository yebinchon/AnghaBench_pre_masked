
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* cfg; } ;
struct p2p_channel {int dummy; } ;
struct TYPE_2__ {unsigned int num_pref_chan; struct p2p_channel* pref_chan; } ;


 int FUNC_0 (struct p2p_channel*) ;
 struct p2p_channel* FUNC_1 (struct p2p_channel const*,unsigned int) ;

int FUNC_2(struct p2p_data *VAR_0, unsigned int VAR_1,
        const struct p2p_channel *VAR_2)
{
 struct p2p_channel *VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_2,
         VAR_1 * sizeof(struct p2p_channel));
  if (VAR_3 == ((void*)0))
   return -1;
 } else
  VAR_3 = ((void*)0);

 FUNC_0(VAR_0->cfg->pref_chan);
 VAR_0->cfg->pref_chan = VAR_3;
 VAR_0->cfg->num_pref_chan = VAR_1;

 return 0;
}
