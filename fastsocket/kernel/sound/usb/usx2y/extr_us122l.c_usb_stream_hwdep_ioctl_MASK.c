
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_stream_config {scalar_t__ version; int sample_rate; int frame_size; int period_frames; } ;
struct usb_stream {scalar_t__ state; int cfg; } ;
struct TYPE_4__ {int sleep; struct usb_stream* s; } ;
struct us122l {TYPE_2__ sk; int mutex; struct file* slave; struct file* master; TYPE_1__* dev; } ;
struct snd_hwdep {int card; struct us122l* private_data; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct usb_stream_config*) ;
 int FUNC_1 (struct usb_stream_config*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct usb_stream_config*) ;
 scalar_t__ FUNC_3 (struct usb_stream_config*,int *,int) ;
 struct usb_stream_config* FUNC_4 (void*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct us122l*,int,unsigned int) ;
 int FUNC_9 (struct us122l*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct snd_hwdep *VAR_9, struct file *VAR_10,
      unsigned VAR_11, unsigned long VAR_12)
{
 struct usb_stream_config *VAR_13;
 struct us122l *VAR_14 = VAR_9->private_data;
 struct usb_stream *VAR_15;
 unsigned VAR_16;
 int VAR_17 = 0;
 bool VAR_18;

 if (VAR_11 != VAR_5)
  return -VAR_2;

 VAR_13 = FUNC_4((void *)VAR_12, sizeof(*VAR_13));
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 if (VAR_13->version != VAR_7) {
  VAR_17 = -VAR_3;
  goto free;
 }
 VAR_18 = VAR_14->dev->speed == VAR_6;
 if ((VAR_13->sample_rate != 44100 && VAR_13->sample_rate != 48000 &&
      (!VAR_18 ||
       (VAR_13->sample_rate != 88200 && VAR_13->sample_rate != 96000))) ||
     VAR_13->frame_size != 6 ||
     VAR_13->period_frames > 0x3000) {
  VAR_17 = -VAR_0;
  goto free;
 }
 switch (VAR_13->sample_rate) {
 case 44100:
  VAR_16 = 48;
  break;
 case 48000:
  VAR_16 = 52;
  break;
 default:
  VAR_16 = 104;
  break;
 }
 if (!VAR_18)
  VAR_16 <<= 1;
 if (VAR_13->period_frames < VAR_16) {
  VAR_17 = -VAR_0;
  goto free;
 }

 FUNC_7(VAR_9->card, VAR_4);

 FUNC_5(&VAR_14->mutex);
 VAR_15 = VAR_14->sk.s;
 if (!VAR_14->master)
  VAR_14->master = VAR_10;
 else if (VAR_14->master != VAR_10) {
  if (!VAR_15 || FUNC_3(VAR_13, &VAR_15->cfg, sizeof(*VAR_13))) {
   VAR_17 = -VAR_1;
   goto unlock;
  }
  VAR_14->slave = VAR_10;
 }
 if (!VAR_15 || FUNC_3(VAR_13, &VAR_15->cfg, sizeof(*VAR_13)) ||
     VAR_15->state == VAR_8) {
  FUNC_9(VAR_14);
  if (!FUNC_8(VAR_14, VAR_13->sample_rate, VAR_13->period_frames))
   VAR_17 = -VAR_1;
  else
   VAR_17 = 1;
 }
unlock:
 FUNC_6(&VAR_14->mutex);
free:
 FUNC_2(VAR_13);
 FUNC_10(&VAR_14->sk.sleep);
 return VAR_17;
}
