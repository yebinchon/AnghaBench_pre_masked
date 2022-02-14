
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ssp_device* ssp; } ;
struct ssp_priv {TYPE_1__ dev; } ;
struct ssp_device {int dummy; } ;
struct snd_soc_dai {struct ssp_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct ssp_device*,int ) ;
 int FUNC_3 (struct ssp_device*,int) ;
 int FUNC_4 (struct ssp_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_5,
 int VAR_6, int VAR_7)
{
 struct ssp_priv *VAR_8 = VAR_5->private_data;
 struct ssp_device *VAR_9 = VAR_8->dev.ssp;
 int VAR_10;

 switch (VAR_6) {
 case 133:
  VAR_10 = (FUNC_2(VAR_9, VAR_2) & ~0x7) | FUNC_0(VAR_7);
  FUNC_4(VAR_9, VAR_2, VAR_10);
  break;
 case 132:
  VAR_10 = FUNC_2(VAR_9, VAR_2);
  VAR_10 &= ~VAR_3;




  switch (VAR_7) {
  case 131:
   VAR_10 |= VAR_3;
   break;
  case 130:
   break;
  default:
   return -VAR_0;
  }
  FUNC_4(VAR_9, VAR_2, VAR_10);
  break;
 case 128:
  FUNC_3(VAR_9, VAR_7);
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
