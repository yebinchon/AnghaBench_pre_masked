
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_wol_params {int int_mask; int ethr_type1; int forward_mask; scalar_t__ ethr_type2; int * ipv6; int * ipv4; int * pswd; } ;
struct TYPE_3__ {int wol_en; int ethertype; int ipv6_dip_word3; int ipv6_dip_word2; int ipv6_dip_word1; int ipv6_dip_word0; int ipv4_dip; int magic_pswd_h; int magic_pswd_l; } ;
struct TYPE_4__ {TYPE_1__ wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(
  struct al_hal_eth_adapter *VAR_5,
  struct al_eth_wol_params *VAR_6)
{
 uint32_t VAR_7 = 0;

 if (VAR_6->int_mask & VAR_4) {
  FUNC_0(VAR_6->pswd != ((void*)0));

  FUNC_1(&VAR_7, &VAR_6->pswd[0], 4);
  FUNC_2(&VAR_5->ec_regs_base->wol.magic_pswd_l, VAR_7);

  FUNC_1(&VAR_7, &VAR_6->pswd[4], 2);
  FUNC_2(&VAR_5->ec_regs_base->wol.magic_pswd_h, VAR_7);
 }

 if (VAR_6->int_mask & VAR_2) {
  FUNC_0(VAR_6->ipv4 != ((void*)0));

  FUNC_1(&VAR_7, &VAR_6->ipv4[0], 4);
  FUNC_2(&VAR_5->ec_regs_base->wol.ipv4_dip, VAR_7);
 }

 if (VAR_6->int_mask & VAR_3) {
  FUNC_0(VAR_6->ipv6 != ((void*)0));

  FUNC_1(&VAR_7, &VAR_6->ipv6[0], 4);
  FUNC_2(&VAR_5->ec_regs_base->wol.ipv6_dip_word0, VAR_7);

  FUNC_1(&VAR_7, &VAR_6->ipv6[4], 4);
  FUNC_2(&VAR_5->ec_regs_base->wol.ipv6_dip_word1, VAR_7);

  FUNC_1(&VAR_7, &VAR_6->ipv6[8], 4);
  FUNC_2(&VAR_5->ec_regs_base->wol.ipv6_dip_word2, VAR_7);

  FUNC_1(&VAR_7, &VAR_6->ipv6[12], 4);
  FUNC_2(&VAR_5->ec_regs_base->wol.ipv6_dip_word3, VAR_7);
 }

 if (VAR_6->int_mask &
  (VAR_0 | VAR_1)) {

  VAR_7 = ((uint32_t)VAR_6->ethr_type2 << 16);
  VAR_7 |= VAR_6->ethr_type1;

  FUNC_2(&VAR_5->ec_regs_base->wol.ethertype, VAR_7);
 }


 FUNC_0((VAR_6->forward_mask | VAR_6->int_mask) == VAR_6->int_mask);

 VAR_7 = ((uint32_t)VAR_6->forward_mask << 16);
 VAR_7 |= VAR_6->int_mask;
 FUNC_2(&VAR_5->ec_regs_base->wol.wol_en, VAR_7);

 return 0;
}
