
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct fman_qmi_regs {int fmqm_ien; int fmqm_ie; int fmqm_tapc; int fmqm_eien; int fmqm_eie; } ;
struct fman_cfg {int exceptions; int tnum_aging_period; int clk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;

int FUNC_1(struct fman_qmi_regs *VAR_7, struct fman_cfg *VAR_8)
{
 uint32_t VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11;





 FUNC_0(VAR_4 | VAR_3,
   &VAR_7->fmqm_eie);
 VAR_9 = 0;
 if (VAR_8->exceptions & VAR_0)
  VAR_9 |= VAR_3;
 if (VAR_8->exceptions & VAR_1)
  VAR_9 |= VAR_4;

 FUNC_0(VAR_9, &VAR_7->fmqm_eien);

 if (VAR_8->tnum_aging_period) {

  VAR_10 = (uint16_t)
    (VAR_8->tnum_aging_period * VAR_8->clk_freq);

  VAR_11 = (uint8_t)(VAR_10 % 64);
  if (VAR_11)
   VAR_9 = (uint32_t)((VAR_10 / 64) + 1);
  else{
   VAR_9 = (uint32_t)(VAR_10 / 64);
   if (!VAR_9)
    VAR_9 = 1;
  }
  VAR_9 <<= VAR_6;
  FUNC_0(VAR_9, &VAR_7->fmqm_tapc);
 }
 VAR_9 = 0;

 FUNC_0(VAR_5, &VAR_7->fmqm_ie);
 if (VAR_8->exceptions & VAR_2)
  VAR_9 |= VAR_5;

 FUNC_0(VAR_9, &VAR_7->fmqm_ien);

 return 0;
}
