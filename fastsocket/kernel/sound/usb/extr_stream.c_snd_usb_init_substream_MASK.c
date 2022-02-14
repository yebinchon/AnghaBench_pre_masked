
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_substream {int direction; int ep_num; int fmt_type; int num_formats; int formats; int fmt_list; int txfr_quirk; int dev; struct snd_usb_stream* stream; int lock; } ;
struct snd_usb_stream {int pcm; TYPE_1__* chip; struct snd_usb_substream* substream; } ;
struct audioformat {int endpoint; int fmt_type; int formats; int list; } ;
struct TYPE_2__ {int txfr_quirk; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_usb_stream *VAR_0,
       int VAR_1,
       struct audioformat *VAR_2)
{
 struct snd_usb_substream *VAR_3 = &VAR_0->substream[VAR_1];

 FUNC_0(&VAR_3->fmt_list);
 FUNC_3(&VAR_3->lock);

 VAR_3->stream = VAR_0;
 VAR_3->direction = VAR_1;
 VAR_3->dev = VAR_0->chip->dev;
 VAR_3->txfr_quirk = VAR_0->chip->txfr_quirk;

 FUNC_2(VAR_0->pcm, VAR_1);

 FUNC_1(&VAR_2->list, &VAR_3->fmt_list);
 VAR_3->formats |= VAR_2->formats;
 VAR_3->num_formats++;
 VAR_3->fmt_type = VAR_2->fmt_type;
 VAR_3->ep_num = VAR_2->endpoint;
}
