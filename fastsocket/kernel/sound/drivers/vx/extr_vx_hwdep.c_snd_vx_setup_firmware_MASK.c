
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vx_core {TYPE_2__* card; struct snd_hwdep* hwdep; } ;
struct TYPE_4__ {int dsp_load; int dsp_status; } ;
struct snd_hwdep {int exclusive; int name; TYPE_1__ ops; struct vx_core* private_data; int iface; } ;
struct TYPE_5__ {char* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,struct snd_hwdep**) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct vx_core *VAR_4)
{
 int VAR_5;
 struct snd_hwdep *VAR_6;

 if ((VAR_5 = FUNC_1(VAR_4->card, VAR_1, 0, &VAR_6)) < 0)
  return VAR_5;

 VAR_6->iface = VAR_0;
 VAR_6->private_data = VAR_4;
 VAR_6->ops.dsp_status = VAR_3;
 VAR_6->ops.dsp_load = VAR_2;
 VAR_6->exclusive = 1;
 FUNC_2(VAR_6->name, "VX Loader (%s)", VAR_4->card->driver);
 VAR_4->hwdep = VAR_6;

 return FUNC_0(VAR_4->card);
}
