
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum al_eth_lm_link_mode { ____Placeholder_al_eth_lm_link_mode } al_eth_lm_link_mode ;
const char *
FUNC_0(enum al_eth_lm_link_mode VAR_0)
{

 switch (VAR_0) {
 case 128:
  return ("AL_ETH_LM_MODE_DISCONNECTED");
 case 131:
  return ("AL_ETH_LM_MODE_10G_OPTIC");
 case 132:
  return ("AL_ETH_LM_MODE_10G_DA");
 case 130:
  return ("AL_ETH_LM_MODE_1G");
 case 129:
  return ("AL_ETH_LM_MODE_25G");
 }

 return ("N/A");
}
