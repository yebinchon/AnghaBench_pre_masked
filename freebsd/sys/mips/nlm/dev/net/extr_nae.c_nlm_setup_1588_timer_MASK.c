
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct nae_port_config {int ieee1588_userval; int ieee1588_ptpoff; int ieee1588_tmr1; int ieee1588_tmr2; int ieee1588_tmr3; int ieee1588_inc_intg; int ieee1588_inc_num; int ieee1588_inc_den; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(uint64_t VAR_14, struct nae_port_config *VAR_15)
{
 uint32_t VAR_16, VAR_17, VAR_18;

 VAR_16 = VAR_15[0].ieee1588_userval >> 32;
 VAR_17 = VAR_15[0].ieee1588_userval & 0xffffffff;
 FUNC_1(VAR_14, VAR_12, VAR_16);
 FUNC_1(VAR_14, VAR_13, VAR_17);

 VAR_16 = VAR_15[0].ieee1588_ptpoff >> 32;
 VAR_17 = VAR_15[0].ieee1588_ptpoff & 0xffffffff;
 FUNC_1(VAR_14, VAR_4, VAR_16);
 FUNC_1(VAR_14, VAR_5, VAR_17);

 VAR_16 = VAR_15[0].ieee1588_tmr1 >> 32;
 VAR_17 = VAR_15[0].ieee1588_tmr1 & 0xffffffff;
 FUNC_1(VAR_14, VAR_6, VAR_16);
 FUNC_1(VAR_14, VAR_7, VAR_17);

 VAR_16 = VAR_15[0].ieee1588_tmr2 >> 32;
 VAR_17 = VAR_15[0].ieee1588_tmr2 & 0xffffffff;
 FUNC_1(VAR_14, VAR_8, VAR_16);
 FUNC_1(VAR_14, VAR_9, VAR_17);

 VAR_16 = VAR_15[0].ieee1588_tmr3 >> 32;
 VAR_17 = VAR_15[0].ieee1588_tmr3 & 0xffffffff;
 FUNC_1(VAR_14, VAR_10, VAR_16);
 FUNC_1(VAR_14, VAR_11, VAR_17);

 FUNC_1(VAR_14, VAR_2,
     VAR_15[0].ieee1588_inc_intg);
 FUNC_1(VAR_14, VAR_3,
     VAR_15[0].ieee1588_inc_num);
 FUNC_1(VAR_14, VAR_1,
     VAR_15[0].ieee1588_inc_den);

 VAR_18 = FUNC_0(VAR_14, VAR_0);

 FUNC_1(VAR_14, VAR_0, VAR_18 | (0x1 << 1));
 FUNC_1(VAR_14, VAR_0, VAR_18);

 FUNC_1(VAR_14, VAR_0, VAR_18 | (0x1 << 6));
 FUNC_1(VAR_14, VAR_0, VAR_18);
}
