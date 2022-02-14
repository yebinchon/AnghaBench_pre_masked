
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int private_data; } ;
struct omap_mcbsp_reg_cfg {int pcr0; int srgr2; } ;
struct omap_mcbsp_data {struct omap_mcbsp_reg_cfg regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_mcbsp_data*,int) ;
 int FUNC_1 (struct omap_mcbsp_data*,int) ;
 struct omap_mcbsp_data* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_3,
      int VAR_4, unsigned int VAR_5,
      int VAR_6)
{
 struct omap_mcbsp_data *VAR_7 = FUNC_2(VAR_3->private_data);
 struct omap_mcbsp_reg_cfg *VAR_8 = &VAR_7->regs;
 int VAR_9 = 0;

 switch (VAR_4) {
 case 132:
  VAR_8->srgr2 |= VAR_0;
  break;
 case 129:
 case 130:
  VAR_9 = FUNC_0(VAR_7, VAR_4);
  break;

 case 128:
  VAR_8->srgr2 |= VAR_0;
 case 131:
  VAR_8->pcr0 |= VAR_2;
  break;

 case 136:
 case 135:
 case 134:
 case 133:
  VAR_9 = FUNC_1(VAR_7, VAR_4);
  break;
 default:
  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
