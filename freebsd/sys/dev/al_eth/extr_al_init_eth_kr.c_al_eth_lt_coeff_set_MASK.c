
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_eth_kr_data {int lane; TYPE_1__* serdes_obj; } ;
typedef enum al_serdes_tx_deemph_param { ____Placeholder_al_serdes_tx_deemph_param } al_serdes_tx_deemph_param ;
typedef enum al_eth_kr_cl72_cstate { ____Placeholder_al_eth_kr_cl72_cstate } al_eth_kr_cl72_cstate ;
struct TYPE_3__ {int (* tx_deemph_dec ) (TYPE_1__*,int ,int) ;int (* tx_deemph_inc ) (TYPE_1__*,int ,int) ;} ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static enum al_eth_kr_cl72_cstate
FUNC_2(struct al_eth_kr_data *VAR_4,
    enum al_serdes_tx_deemph_param VAR_5, uint32_t VAR_6)
{
 enum al_eth_kr_cl72_cstate VAR_7 = 0;

 switch (VAR_6) {
 case 129:

  VAR_7 = VAR_2;
  break;
 case 128:
  VAR_7 = VAR_3;

  if (VAR_4->serdes_obj->tx_deemph_inc(
     VAR_4->serdes_obj,
     VAR_4->lane,
     VAR_5) == 0)
   VAR_7 = VAR_0;
  break;
 case 130:
  VAR_7 = VAR_3;

  if (VAR_4->serdes_obj->tx_deemph_dec(
     VAR_4->serdes_obj,
     VAR_4->lane,
     VAR_5) == 0)
   VAR_7 = VAR_1;
  break;
 default:
  break;
 }

 return (VAR_7);
}
