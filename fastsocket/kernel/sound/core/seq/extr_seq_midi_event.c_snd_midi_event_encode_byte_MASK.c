
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int* ptr; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
struct snd_seq_event {scalar_t__ type; TYPE_2__ data; int flags; } ;
struct snd_midi_event {int type; int* buf; int read; scalar_t__ qlen; int bufsize; int lock; } ;
struct TYPE_6__ {scalar_t__ event; scalar_t__ qlen; int (* encode ) (struct snd_midi_event*,struct snd_seq_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct snd_midi_event*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_3__* VAR_10 ;
 int FUNC_3 (struct snd_midi_event*,struct snd_seq_event*) ;

int FUNC_4(struct snd_midi_event *VAR_11, int VAR_12,
          struct snd_seq_event *VAR_13)
{
 int VAR_14 = 0;
 unsigned long VAR_15;

 VAR_12 &= 0xff;

 if (VAR_12 >= VAR_0) {

  VAR_13->type = VAR_10[VAR_8 + VAR_12 - 0xf0].event;
  VAR_13->flags &= ~VAR_3;
  VAR_13->flags |= VAR_2;
  return VAR_13->type != VAR_5;
 }

 FUNC_1(&VAR_11->lock, VAR_15);
 if ((VAR_12 & 0x80) &&
     (VAR_12 != VAR_1 || VAR_11->type != VAR_9)) {

  VAR_11->buf[0] = VAR_12;
  if ((VAR_12 & 0xf0) == 0xf0)
   VAR_11->type = (VAR_12 & 0x0f) + VAR_8;
  else
   VAR_11->type = (VAR_12 >> 4) & 0x07;
  VAR_11->read = 1;
  VAR_11->qlen = VAR_10[VAR_11->type].qlen;
 } else {
  if (VAR_11->qlen > 0) {

   VAR_11->buf[VAR_11->read++] = VAR_12;
   if (VAR_11->type != VAR_9)
    VAR_11->qlen--;
  } else {

   VAR_11->buf[1] = VAR_12;
   VAR_11->qlen = VAR_10[VAR_11->type].qlen - 1;
   VAR_11->read = 2;
  }
 }
 if (VAR_11->qlen == 0) {
  VAR_13->type = VAR_10[VAR_11->type].event;
  VAR_13->flags &= ~VAR_3;
  VAR_13->flags |= VAR_2;
  if (VAR_10[VAR_11->type].encode)
   VAR_10[VAR_11->type].encode(VAR_11, VAR_13);
  if (VAR_11->type >= VAR_8)
   VAR_11->type = VAR_7;
  VAR_14 = 1;
 } else if (VAR_11->type == VAR_9) {
  if (VAR_12 == VAR_1 ||
      VAR_11->read >= VAR_11->bufsize) {
   VAR_13->flags &= ~VAR_3;
   VAR_13->flags |= VAR_4;
   VAR_13->type = VAR_6;
   VAR_13->data.ext.len = VAR_11->read;
   VAR_13->data.ext.ptr = VAR_11->buf;
   if (VAR_12 != VAR_1)
    VAR_11->read = 0;
   else
    FUNC_0(VAR_11);
   VAR_14 = 1;
  }
 }

 FUNC_2(&VAR_11->lock, VAR_15);
 return VAR_14;
}
