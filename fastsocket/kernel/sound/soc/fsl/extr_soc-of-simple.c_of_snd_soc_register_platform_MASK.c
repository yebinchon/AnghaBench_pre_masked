
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_platform {int dummy; } ;
struct snd_soc_dai {int name; } ;
struct TYPE_4__ {struct snd_soc_dai* cpu_dai; } ;
struct TYPE_3__ {int name; struct snd_soc_platform* platform; } ;
struct of_snd_soc_device {TYPE_2__ dai_link; TYPE_1__ card; struct device_node* platform_node; } ;
struct device_node {int full_name; } ;
typedef int phandle ;
typedef int handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct device_node* FUNC_2 (int const) ;
 int * FUNC_3 (struct device_node*,char*,int*) ;
 struct of_snd_soc_device* FUNC_4 (struct device_node*) ;
 int VAR_2 ;
 int FUNC_5 (struct of_snd_soc_device*) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7(struct snd_soc_platform *VAR_3,
     struct device_node *VAR_4,
     struct snd_soc_dai *VAR_5)
{
 struct of_snd_soc_device *VAR_6;
 struct device_node *VAR_7;
 const phandle *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_6("registering ASoC platform driver: %s\n", VAR_4->full_name);

 VAR_8 = FUNC_3(VAR_4, "codec-handle", &VAR_9);
 if (!VAR_8 || VAR_9 < sizeof(VAR_8))
  return -VAR_0;
 VAR_7 = FUNC_2(*VAR_8);
 if (!VAR_7)
  return -VAR_0;
 FUNC_6("looking for codec: %s\n", VAR_7->full_name);

 FUNC_0(&VAR_2);
 VAR_6 = FUNC_4(VAR_7);
 if (!VAR_6) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_6->platform_node = VAR_4;
 VAR_6->dai_link.cpu_dai = VAR_5;
 VAR_6->card.platform = VAR_3;
 VAR_6->card.name = VAR_6->dai_link.cpu_dai->name;


 FUNC_5(VAR_6);

 out:
 FUNC_1(&VAR_2);
 return VAR_10;
}
