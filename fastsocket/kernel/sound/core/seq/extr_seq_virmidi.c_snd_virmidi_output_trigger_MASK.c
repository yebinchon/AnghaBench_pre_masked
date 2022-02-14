
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
struct snd_virmidi {int trigger; scalar_t__ seq_mode; TYPE_3__ event; int client; int parser; TYPE_1__* rdev; } ;
struct snd_rawmidi_substream {TYPE_2__* runtime; } ;
typedef int buf ;
struct TYPE_6__ {int buffer_size; int avail; struct snd_virmidi* private_data; } ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned char*,int,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_rawmidi_substream*,int) ;
 int FUNC_4 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_rawmidi_substream *VAR_3, int VAR_4)
{
 struct snd_virmidi *VAR_5 = VAR_3->runtime->private_data;
 int VAR_6, VAR_7;
 unsigned char VAR_8[32], *VAR_9;

 if (VAR_4) {
  VAR_5->trigger = 1;
  if (VAR_5->seq_mode == VAR_1 &&
      !(VAR_5->rdev->flags & VAR_2)) {
   FUNC_3(VAR_3, VAR_3->runtime->buffer_size - VAR_3->runtime->avail);
   return;
  }
  if (VAR_5->event.type != VAR_0) {
   if (FUNC_5(VAR_5->client, &VAR_5->event, FUNC_0(), 0) < 0)
    return;
   VAR_5->event.type = VAR_0;
  }
  while (1) {
   VAR_6 = FUNC_4(VAR_3, VAR_8, sizeof(VAR_8));
   if (VAR_6 <= 0)
    break;
   VAR_9 = VAR_8;
   while (VAR_6 > 0) {
    VAR_7 = FUNC_1(VAR_5->parser, VAR_9, VAR_6, &VAR_5->event);
    if (VAR_7 < 0) {
     FUNC_2(VAR_5->parser);
     continue;
    }
    FUNC_3(VAR_3, VAR_7);
    VAR_9 += VAR_7;
    VAR_6 -= VAR_7;
    if (VAR_5->event.type != VAR_0) {
     if (FUNC_5(VAR_5->client, &VAR_5->event, FUNC_0(), 0) < 0)
      return;
     VAR_5->event.type = VAR_0;
    }
   }
  }
 } else {
  VAR_5->trigger = 0;
 }
}
