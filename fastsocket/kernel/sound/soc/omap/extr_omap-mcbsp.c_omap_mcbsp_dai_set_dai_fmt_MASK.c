
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int private_data; } ;
struct omap_mcbsp_reg_cfg {int spcr2; int xccr; int rccr; int pcr0; int srgr2; int xcr2; int rcr2; int spcr1; } ;
struct omap_mcbsp_data {unsigned int fmt; scalar_t__ configured; struct omap_mcbsp_reg_cfg regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;




 unsigned int VAR_15 ;



 unsigned int VAR_16 ;
 unsigned int VAR_17 ;


 int FUNC_3 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct omap_mcbsp_reg_cfg*,int ,int) ;
 struct omap_mcbsp_data* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_dai *VAR_21,
          unsigned int VAR_22)
{
 struct omap_mcbsp_data *VAR_23 = FUNC_8(VAR_21->private_data);
 struct omap_mcbsp_reg_cfg *VAR_24 = &VAR_23->regs;
 unsigned int VAR_25 = VAR_22;

 if (VAR_23->configured)
  return 0;

 VAR_23->fmt = VAR_22;
 FUNC_7(VAR_24, 0, sizeof(*VAR_24));

 VAR_24->spcr2 |= FUNC_4(3) | VAR_5;
 VAR_24->spcr1 |= FUNC_2(3);

 if (!FUNC_6()) {
  VAR_24->rcr2 |= VAR_13;
  VAR_24->xcr2 |= VAR_20;
 }
 if (FUNC_5() || FUNC_6()) {
  VAR_24->xccr = FUNC_0(1) | VAR_19 | VAR_18;
  VAR_24->rccr = VAR_14 | VAR_12 | VAR_11;
 }

 switch (VAR_22 & VAR_15) {
 case 132:

  VAR_24->rcr2 |= FUNC_1(1);
  VAR_24->xcr2 |= FUNC_3(1);
  break;
 case 134:

  VAR_24->rcr2 |= FUNC_1(1);
  VAR_24->xcr2 |= FUNC_3(1);

  VAR_25 ^= 129;
  break;
 case 133:

  VAR_24->rcr2 |= FUNC_1(0);
  VAR_24->xcr2 |= FUNC_3(0);

  VAR_25 ^= 129;
  break;
 default:

  return -VAR_4;
 }

 switch (VAR_22 & VAR_17) {
 case 135:

  VAR_24->pcr0 |= VAR_9 | VAR_7 |
       VAR_2 | VAR_0;

  VAR_24->srgr2 |= VAR_6;
  break;
 case 136:

  break;
 default:

  return -VAR_4;
 }


 switch (VAR_25 & VAR_16) {
 case 128:





  VAR_24->pcr0 |= VAR_10 | VAR_8 |
       VAR_3 | VAR_1;
  break;
 case 129:
  VAR_24->pcr0 |= VAR_3 | VAR_1;
  break;
 case 130:
  VAR_24->pcr0 |= VAR_10 | VAR_8;
  break;
 case 131:
  break;
 default:
  return -VAR_4;
 }

 return 0;
}
