
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct of_snd_soc_device* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {TYPE_1__* dev; int codec_data; } ;
struct of_snd_soc_device {TYPE_2__ device; int id; int platform_node; } ;


 int FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (char*,int ) ;
 int FUNC_2 (struct platform_device*,TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct of_snd_soc_device *VAR_0)
{
 struct platform_device *VAR_1;
 int VAR_2;



 if ((!VAR_0->device.codec_data) || (!VAR_0->platform_node))
  return;

 FUNC_4("platform<-->codec match achieved; registering machine\n");

 VAR_1 = FUNC_1("soc-audio", VAR_0->id);
 if (!VAR_1) {
  FUNC_3("of_soc: platform_device_alloc() failed\n");
  return;
 }

 VAR_1->dev.platform_data = VAR_0;
 FUNC_2(VAR_1, &VAR_0->device);
 VAR_0->device.dev = &VAR_1->dev;


 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2) {
  FUNC_3("of_soc: platform_device_add() failed\n");
  return;
 }

}
