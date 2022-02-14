
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {unsigned int passphrase_len; } ;



int FUNC_0(struct p2p_data *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 < 8 || VAR_1 > 63)
  return -1;
 VAR_0->cfg->passphrase_len = VAR_1;
 return 0;
}
