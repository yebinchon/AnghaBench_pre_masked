
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int offset; int length; } ;
struct usb_device {int dummy; } ;
struct urb {unsigned int pipe; int transfer_buffer_length; int interval; int number_of_packets; int complete; int transfer_flags; int * context; struct usb_device* dev; struct usb_iso_packet_descriptor* iso_frame_desc; void* transfer_buffer; } ;
struct TYPE_2__ {struct usb_device* dev; } ;
struct snd_usb_caiaqdev {int * data_cb_info; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_10 ;
 struct urb* FUNC_2 (int,int ) ;
 unsigned int FUNC_3 (struct usb_device*,int ) ;
 unsigned int FUNC_4 (struct usb_device*,int ) ;
 int VAR_11 ;

__attribute__((used)) static struct urb **FUNC_5(struct snd_usb_caiaqdev *VAR_12, int VAR_13, int *VAR_14)
{
 int VAR_15, VAR_16;
 struct urb **VAR_17;
 struct usb_device *VAR_18 = VAR_12->chip.dev;
 unsigned int VAR_19;

 VAR_19 = (VAR_13 == VAR_8) ?
  FUNC_4(VAR_18, VAR_2) :
  FUNC_3(VAR_18, VAR_1);

 VAR_17 = FUNC_0(VAR_6 * sizeof(*VAR_17), VAR_5);
 if (!VAR_17) {
  FUNC_1("unable to kmalloc() urbs, OOM!?\n");
  *VAR_14 = -VAR_3;
  return ((void*)0);
 }

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_17[VAR_15] = FUNC_2(VAR_4, VAR_5);
  if (!VAR_17[VAR_15]) {
   FUNC_1("unable to usb_alloc_urb(), OOM!?\n");
   *VAR_14 = -VAR_3;
   return VAR_17;
  }

  VAR_17[VAR_15]->transfer_buffer =
   FUNC_0(VAR_4 * VAR_0, VAR_5);
  if (!VAR_17[VAR_15]->transfer_buffer) {
   FUNC_1("unable to kmalloc() transfer buffer, OOM!?\n");
   *VAR_14 = -VAR_3;
   return VAR_17;
  }

  for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
   struct usb_iso_packet_descriptor *VAR_20 =
    &VAR_17[VAR_15]->iso_frame_desc[VAR_16];

   VAR_20->offset = VAR_0 * VAR_16;
   VAR_20->length = VAR_0;
  }

  VAR_17[VAR_15]->dev = VAR_18;
  VAR_17[VAR_15]->pipe = VAR_19;
  VAR_17[VAR_15]->transfer_buffer_length = VAR_4
      * VAR_0;
  VAR_17[VAR_15]->context = &VAR_12->data_cb_info[VAR_15];
  VAR_17[VAR_15]->interval = 1;
  VAR_17[VAR_15]->transfer_flags = VAR_9;
  VAR_17[VAR_15]->number_of_packets = VAR_4;
  VAR_17[VAR_15]->complete = (VAR_13 == VAR_7) ?
     VAR_10 : VAR_11;
 }

 *VAR_14 = 0;
 return VAR_17;
}
