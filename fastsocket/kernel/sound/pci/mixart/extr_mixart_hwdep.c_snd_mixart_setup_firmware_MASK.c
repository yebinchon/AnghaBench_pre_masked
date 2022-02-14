
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dsp_load; int dsp_status; } ;
struct snd_hwdep {int exclusive; int name; TYPE_1__ ops; struct mixart_mgr* private_data; int iface; } ;
struct mixart_mgr {TYPE_2__** chip; scalar_t__ dsp_loaded; } ;
struct TYPE_4__ {int card; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,struct snd_hwdep**) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct mixart_mgr *VAR_4)
{
 int VAR_5;
 struct snd_hwdep *VAR_6;


 if ((VAR_5 = FUNC_1(VAR_4->chip[0]->card, VAR_1, 0, &VAR_6)) < 0)
  return VAR_5;

 VAR_6->iface = VAR_0;
 VAR_6->private_data = VAR_4;
 VAR_6->ops.dsp_status = VAR_3;
 VAR_6->ops.dsp_load = VAR_2;
 VAR_6->exclusive = 1;
 FUNC_2(VAR_6->name, VAR_1);
 VAR_4->dsp_loaded = 0;

 return FUNC_0(VAR_4->chip[0]->card);
}
