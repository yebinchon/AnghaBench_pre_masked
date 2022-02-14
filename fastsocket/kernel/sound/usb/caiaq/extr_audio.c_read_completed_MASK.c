
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; void* transfer_flags; TYPE_1__* iso_frame_desc; struct snd_usb_caiaq_cb_info* context; scalar_t__ status; } ;
struct snd_usb_caiaqdev {int outurb_active_mask; int sub_capture; int sub_playback; int spinlock; struct urb** data_urbs_out; int streaming; } ;
struct snd_usb_caiaq_cb_info {int index; struct snd_usb_caiaqdev* dev; } ;
struct TYPE_3__ {int actual_length; int length; size_t offset; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct snd_usb_caiaqdev*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_usb_caiaqdev*,struct urb*,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct snd_usb_caiaqdev*,struct urb*,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,int *) ;
 int FUNC_8 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_5)
{
 struct snd_usb_caiaq_cb_info *VAR_6 = VAR_5->context;
 struct snd_usb_caiaqdev *VAR_7;
 struct urb *VAR_8 = ((void*)0);
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0, VAR_13 = 0;
 size_t VAR_14 = 0;

 if (VAR_5->status || !VAR_6)
  return;

 VAR_7 = VAR_6->dev;

 if (!VAR_7->streaming)
  return;


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  if (FUNC_7(VAR_9, &VAR_7->outurb_active_mask) == 0) {
   VAR_8 = VAR_7->data_urbs_out[VAR_9];
   break;
  }

 if (!VAR_8) {
  FUNC_3("Unable to find an output urb to use\n");
  goto requeue;
 }



 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_5->iso_frame_desc[VAR_10].status)
   continue;

  VAR_11 = VAR_5->iso_frame_desc[VAR_13].actual_length;
  VAR_8->iso_frame_desc[VAR_13].length = VAR_11;
  VAR_8->iso_frame_desc[VAR_13].actual_length = 0;
  VAR_8->iso_frame_desc[VAR_13].offset = VAR_14;
  VAR_14 += VAR_11;

  if (VAR_11 > 0) {
   FUNC_5(&VAR_7->spinlock);
   FUNC_2(VAR_7, VAR_8, &VAR_8->iso_frame_desc[VAR_13]);
   FUNC_4(VAR_7, VAR_5, &VAR_5->iso_frame_desc[VAR_10]);
   FUNC_6(&VAR_7->spinlock);
   FUNC_0(VAR_7, VAR_7->sub_playback);
   FUNC_0(VAR_7, VAR_7->sub_capture);
   VAR_12 = 1;
  }

  VAR_13++;
 }

 if (VAR_12) {
  VAR_8->number_of_packets = VAR_13;
  VAR_8->transfer_flags = VAR_4;
  FUNC_8(VAR_8, VAR_2);
 } else {
  struct snd_usb_caiaq_cb_info *VAR_15 = VAR_8->context;
  FUNC_1(VAR_15->index, &VAR_7->outurb_active_mask);
 }

requeue:

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_5->iso_frame_desc[VAR_10].offset = VAR_0 * VAR_10;
  VAR_5->iso_frame_desc[VAR_10].length = VAR_0;
  VAR_5->iso_frame_desc[VAR_10].actual_length = 0;
 }

 VAR_5->number_of_packets = VAR_1;
 VAR_5->transfer_flags = VAR_4;
 FUNC_8(VAR_5, VAR_2);
}
