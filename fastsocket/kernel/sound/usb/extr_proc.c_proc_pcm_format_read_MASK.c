
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_usb_stream {TYPE_4__* substream; TYPE_3__* pcm; TYPE_2__* chip; } ;
struct snd_info_entry {struct snd_usb_stream* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_9__ {scalar_t__ num_formats; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {TYPE_1__* card; } ;
struct TYPE_6__ {int longname; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_4__*,struct snd_info_buffer*) ;
 int FUNC_1 (TYPE_4__*,struct snd_info_buffer*) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_2, struct snd_info_buffer *VAR_3)
{
 struct snd_usb_stream *VAR_4 = VAR_2->private_data;

 FUNC_2(VAR_3, "%s : %s\n", VAR_4->chip->card->longname, VAR_4->pcm->name);

 if (VAR_4->substream[VAR_1].num_formats) {
  FUNC_2(VAR_3, "\nPlayback:\n");
  FUNC_1(&VAR_4->substream[VAR_1], VAR_3);
  FUNC_0(&VAR_4->substream[VAR_1], VAR_3);
 }
 if (VAR_4->substream[VAR_0].num_formats) {
  FUNC_2(VAR_3, "\nCapture:\n");
  FUNC_1(&VAR_4->substream[VAR_0], VAR_3);
  FUNC_0(&VAR_4->substream[VAR_0], VAR_3);
 }
}
