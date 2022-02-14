
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {struct ssp_device* ssp; } ;
struct ssp_priv {TYPE_1__ dev; } ;
struct ssp_device {TYPE_2__* pdev; } ;
struct snd_soc_dai {struct ssp_priv* private_data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,char*,int,unsigned int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (struct ssp_device*,int ) ;
 int FUNC_4 (struct ssp_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_3,
 int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 struct ssp_priv *VAR_7 = VAR_3->private_data;
 struct ssp_device *VAR_8 = VAR_7->dev.ssp;
 u32 VAR_9 = FUNC_3(VAR_8, VAR_1) & ~0x70;






 switch (VAR_6) {
 case 5622000:
  break;
 case 11345000:
  VAR_9 |= (0x1 << 4);
  break;
 case 12235000:
  VAR_9 |= (0x2 << 4);
  break;
 case 14857000:
  VAR_9 |= (0x3 << 4);
  break;
 case 32842000:
  VAR_9 |= (0x4 << 4);
  break;
 case 48000000:
  VAR_9 |= (0x5 << 4);
  break;
 case 0:

  break;

 default:
  return -VAR_0;
 }

 FUNC_4(VAR_8, VAR_1, VAR_9);

 return 0;
}
