
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_2__* pstr; int name; int stream; int number; struct snd_rawmidi* rmidi; } ;
struct snd_rawmidi_info {scalar_t__ subdevices_avail; scalar_t__ subdevices_count; int subname; int name; int id; int flags; int stream; int subdevice; int device; int card; } ;
struct snd_rawmidi {int name; int id; int info_flags; int device; TYPE_1__* card; } ;
struct TYPE_4__ {scalar_t__ substream_opened; scalar_t__ substream_count; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rawmidi_info*,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi_substream *VAR_1,
       struct snd_rawmidi_info *VAR_2)
{
 struct snd_rawmidi *VAR_3;

 if (VAR_1 == ((void*)0))
  return -VAR_0;
 VAR_3 = VAR_1->rmidi;
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->card = VAR_3->card->number;
 VAR_2->device = VAR_3->device;
 VAR_2->subdevice = VAR_1->number;
 VAR_2->stream = VAR_1->stream;
 VAR_2->flags = VAR_3->info_flags;
 FUNC_1(VAR_2->id, VAR_3->id);
 FUNC_1(VAR_2->name, VAR_3->name);
 FUNC_1(VAR_2->subname, VAR_1->name);
 VAR_2->subdevices_count = VAR_1->pstr->substream_count;
 VAR_2->subdevices_avail = (VAR_1->pstr->substream_count -
      VAR_1->pstr->substream_opened);
 return 0;
}
