
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* ops; struct snd_pcm_runtime* runtime; int name; int number; int stream; struct snd_pcm_str* pstr; struct snd_pcm* pcm; } ;
struct snd_pcm_str {scalar_t__ substream_opened; scalar_t__ substream_count; } ;
struct snd_pcm_runtime {int sync; } ;
struct snd_pcm_info {int sync; int subname; scalar_t__ subdevices_avail; scalar_t__ subdevices_count; int dev_subclass; int dev_class; int name; int id; int subdevice; int stream; int device; int card; } ;
struct snd_pcm {int dev_subclass; int dev_class; int name; int id; int device; TYPE_1__* card; } ;
struct TYPE_4__ {int (* ioctl ) (struct snd_pcm_substream*,int ,struct snd_pcm_info*) ;} ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_info*,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct snd_pcm_substream*,int ,struct snd_pcm_info*) ;

int FUNC_3(struct snd_pcm_substream *VAR_1, struct snd_pcm_info *VAR_2)
{
 struct snd_pcm_runtime *VAR_3;
 struct snd_pcm *VAR_4 = VAR_1->pcm;
 struct snd_pcm_str *VAR_5 = VAR_1->pstr;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->card = VAR_4->card->number;
 VAR_2->device = VAR_4->device;
 VAR_2->stream = VAR_1->stream;
 VAR_2->subdevice = VAR_1->number;
 FUNC_1(VAR_2->id, VAR_4->id, sizeof(VAR_2->id));
 FUNC_1(VAR_2->name, VAR_4->name, sizeof(VAR_2->name));
 VAR_2->dev_class = VAR_4->dev_class;
 VAR_2->dev_subclass = VAR_4->dev_subclass;
 VAR_2->subdevices_count = VAR_5->substream_count;
 VAR_2->subdevices_avail = VAR_5->substream_count - VAR_5->substream_opened;
 FUNC_1(VAR_2->subname, VAR_1->name, sizeof(VAR_2->subname));
 VAR_3 = VAR_1->runtime;

 if (VAR_3) {
  VAR_2->sync = VAR_3->sync;
  VAR_1->ops->ioctl(VAR_1, VAR_0, VAR_2);
 }
 return 0;
}
