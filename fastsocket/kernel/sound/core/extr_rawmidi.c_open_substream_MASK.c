
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {scalar_t__ use_count; int opened; int append; size_t stream; scalar_t__ active_sensing; TYPE_2__* ops; } ;
struct snd_rawmidi {TYPE_1__* streams; } ;
struct TYPE_4__ {int (* open ) (struct snd_rawmidi_substream*) ;} ;
struct TYPE_3__ {int substream_opened; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rawmidi_substream*) ;
 int FUNC_1 (struct snd_rawmidi_substream*) ;
 int FUNC_2 (struct snd_rawmidi_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi *VAR_1,
     struct snd_rawmidi_substream *VAR_2,
     int VAR_3)
{
 int VAR_4;

 if (VAR_2->use_count == 0) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_4 = VAR_2->ops->open(VAR_2);
  if (VAR_4 < 0) {
   FUNC_1(VAR_2);
   return VAR_4;
  }
  VAR_2->opened = 1;
  VAR_2->active_sensing = 0;
  if (VAR_3 & VAR_0)
   VAR_2->append = 1;
  VAR_1->streams[VAR_2->stream].substream_opened++;
 }
 VAR_2->use_count++;
 return 0;
}
