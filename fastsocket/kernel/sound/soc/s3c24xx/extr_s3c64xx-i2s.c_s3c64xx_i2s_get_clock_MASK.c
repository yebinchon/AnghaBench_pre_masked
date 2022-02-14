
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct s3c_i2sv2_info {struct clk* iis_cclk; } ;
struct clk {int dummy; } ;


 struct s3c_i2sv2_info* FUNC_0 (struct snd_soc_dai*) ;

struct clk *FUNC_1(struct snd_soc_dai *VAR_0)
{
 struct s3c_i2sv2_info *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->iis_cclk;
}
