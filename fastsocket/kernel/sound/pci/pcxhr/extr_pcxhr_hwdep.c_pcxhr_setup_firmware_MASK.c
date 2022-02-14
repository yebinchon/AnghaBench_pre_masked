
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dsp_load; int dsp_status; } ;
struct snd_hwdep {int exclusive; int dsp_loaded; int name; TYPE_1__ ops; struct pcxhr_mgr* private_data; int iface; } ;
struct pcxhr_mgr {TYPE_2__** chip; scalar_t__ dsp_loaded; scalar_t__ is_hr_stereo; } ;
struct TYPE_4__ {int card; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,struct snd_hwdep**) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct pcxhr_mgr *VAR_4)
{
 int VAR_5;
 struct snd_hwdep *VAR_6;




 VAR_5 = FUNC_1(VAR_4->chip[0]->card, VAR_0, 0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6->iface = VAR_1;
 VAR_6->private_data = VAR_4;
 VAR_6->ops.dsp_status = VAR_3;
 VAR_6->ops.dsp_load = VAR_2;
 VAR_6->exclusive = 1;

 VAR_6->dsp_loaded = VAR_4->is_hr_stereo ? 1 : 0;
 VAR_4->dsp_loaded = 0;
 FUNC_2(VAR_6->name, VAR_0);

 VAR_5 = FUNC_0(VAR_4->chip[0]->card);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
