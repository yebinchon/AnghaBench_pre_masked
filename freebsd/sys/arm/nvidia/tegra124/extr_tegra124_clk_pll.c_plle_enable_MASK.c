
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mnp_bits {int dummy; } ;
struct pll_sc {int misc_reg; int base_reg; struct mnp_bits mnp_bits; } ;


 int FUNC_0 (int) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct pll_sc*,int ,int*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_2 (struct pll_sc*,int ,int) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_3 (struct pll_sc*) ;
 int FUNC_4 (struct pll_sc*,int,int,int,int) ;
 int FUNC_5 (struct pll_sc*) ;

__attribute__((used)) static int
FUNC_6(struct pll_sc *VAR_42)
{
 uint32_t VAR_43;
 int VAR_44;
 struct mnp_bits *VAR_45;
 uint32_t VAR_46 = 1;
 uint32_t VAR_47 = 200;
 uint32_t VAR_48 = 13;
 uint32_t VAR_49 = 13;

 VAR_45 = &VAR_42->mnp_bits;



 FUNC_1(VAR_42, VAR_42->base_reg, &VAR_43);
 VAR_43 &= ~VAR_10;
 FUNC_2(VAR_42, VAR_42->base_reg, VAR_43);

 FUNC_1(VAR_42, VAR_2, &VAR_43);
 VAR_43 |= VAR_3;
 VAR_43 &= ~VAR_4;
 FUNC_2(VAR_42, VAR_2, VAR_43);
 FUNC_0(10);

 FUNC_1(VAR_42, VAR_42->misc_reg, &VAR_43);
 VAR_43 |= VAR_13;
 VAR_43 |= VAR_12;
 VAR_43 &= ~VAR_11;
 VAR_43 |= VAR_14;
 VAR_43 |= VAR_15;
 VAR_43 |= VAR_16;
 FUNC_2(VAR_42, VAR_42->misc_reg, VAR_43);
 FUNC_0(10);

 FUNC_1(VAR_42, VAR_17, &VAR_43);
 VAR_43 |= VAR_21;
 FUNC_2(VAR_42, VAR_17, VAR_43);

 FUNC_1(VAR_42, VAR_42->base_reg, &VAR_43);
 VAR_43 = FUNC_4(VAR_42, VAR_43, VAR_46, VAR_47, VAR_48);
 VAR_43 &= ~(VAR_8 << VAR_9);
 VAR_43 |= VAR_49 << VAR_9;
 FUNC_2(VAR_42, VAR_42->base_reg, VAR_43);
 FUNC_0(10);

 FUNC_3(VAR_42);
 VAR_44 = FUNC_5(VAR_42);
 if (VAR_44 != 0)
  return (VAR_44);

 FUNC_1(VAR_42, VAR_17, &VAR_43);
 VAR_43 &= ~VAR_24;
 VAR_43 &= ~VAR_25;
 VAR_43 &= ~VAR_19;
 VAR_43 |= VAR_20;
 FUNC_2(VAR_42, VAR_17, VAR_43);
 VAR_43 &= ~VAR_23;
 VAR_43 &= ~VAR_18;
 FUNC_2(VAR_42, VAR_17, VAR_43);
 FUNC_0(10);

 VAR_43 &= ~VAR_22;
 FUNC_2(VAR_42, VAR_17, VAR_43);
 FUNC_0(10);


 FUNC_1(VAR_42, VAR_42->misc_reg, &VAR_43);
 VAR_43 &= ~VAR_12;
 FUNC_2(VAR_42, VAR_42->misc_reg, VAR_43);

 FUNC_1(VAR_42, VAR_2, &VAR_43);
 VAR_43 |= VAR_7;
 VAR_43 |= VAR_5;
 VAR_43 &= ~VAR_3;
 VAR_43 &= ~VAR_6;
 FUNC_2(VAR_42, VAR_2, VAR_43);
 VAR_43 |= VAR_5;
 FUNC_0(10);
 VAR_43 |= VAR_4;
 FUNC_2(VAR_42, VAR_2, VAR_43);

 FUNC_1(VAR_42, VAR_36, &VAR_43);
 VAR_43 |= VAR_39;
 VAR_43 |= VAR_41;
 VAR_43 &= ~VAR_37;
 VAR_43 &= ~VAR_38;
 FUNC_2(VAR_42, VAR_36, VAR_43);
 FUNC_0(10);

 VAR_43 |= VAR_40;
 FUNC_2(VAR_42, VAR_36, VAR_43);



 FUNC_1(VAR_42, VAR_26, &VAR_43);
 VAR_43 &= ~VAR_28;
 VAR_43 &= ~VAR_27;
 VAR_43 |= VAR_29;
 VAR_43 &= ~VAR_31;
 VAR_43 &= ~VAR_34;
 VAR_43 &= ~VAR_32;
 VAR_43 &= ~VAR_33;
 VAR_43 &= ~VAR_30;
 VAR_43 |= VAR_35;
 FUNC_2(VAR_42, VAR_26, VAR_43);
 FUNC_0(10);
 VAR_43 |= VAR_30;
 FUNC_2(VAR_42, VAR_26, VAR_43);


 FUNC_1(VAR_42, VAR_0, &VAR_43);
 VAR_43 |= VAR_1;
 FUNC_2(VAR_42, VAR_0, VAR_43);

 return (0);
}
