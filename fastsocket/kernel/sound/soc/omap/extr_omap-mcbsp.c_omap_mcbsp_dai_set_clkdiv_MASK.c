
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int private_data; } ;
struct omap_mcbsp_reg_cfg {int srgr1; } ;
struct omap_mcbsp_data {struct omap_mcbsp_reg_cfg regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct omap_mcbsp_data* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2,
         int VAR_3, int VAR_4)
{
 struct omap_mcbsp_data *VAR_5 = FUNC_1(VAR_2->private_data);
 struct omap_mcbsp_reg_cfg *VAR_6 = &VAR_5->regs;

 if (VAR_3 != VAR_1)
  return -VAR_0;

 VAR_6->srgr1 |= FUNC_0(VAR_4 - 1);

 return 0;
}
