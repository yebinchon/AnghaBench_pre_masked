
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec_device {int dummy; } ;
struct TYPE_4__ {char* name; char* stream_name; struct snd_soc_dai* codec_dai; } ;
struct TYPE_3__ {struct snd_soc_codec_device* codec_dev; void* codec_data; } ;
struct of_snd_soc_device {TYPE_2__ dai_link; TYPE_1__ device; } ;
struct device_node {scalar_t__ name; int full_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct of_snd_soc_device* FUNC_2 (struct device_node*) ;
 int VAR_1 ;
 int FUNC_3 (struct of_snd_soc_device*) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct snd_soc_codec_device *VAR_2,
         void *VAR_3, struct snd_soc_dai *VAR_4,
         struct device_node *VAR_5)
{
 struct of_snd_soc_device *VAR_6;
 int VAR_7 = 0;

 FUNC_4("registering ASoC codec driver: %s\n", VAR_5->full_name);

 FUNC_0(&VAR_1);
 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }


 VAR_6->device.codec_data = VAR_3;
 VAR_6->device.codec_dev = VAR_2;
 VAR_6->dai_link.name = (char *)VAR_5->name;
 VAR_6->dai_link.stream_name = (char *)VAR_5->name;
 VAR_6->dai_link.codec_dai = VAR_4;


 FUNC_3(VAR_6);

 out:
 FUNC_1(&VAR_1);
 return VAR_7;
}
