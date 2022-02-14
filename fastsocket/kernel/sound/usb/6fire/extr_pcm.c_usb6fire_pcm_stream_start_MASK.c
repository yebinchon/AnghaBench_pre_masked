
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int offset; int length; scalar_t__ status; scalar_t__ actual_length; } ;
struct pcm_runtime {scalar_t__ stream_state; int stream_wait_cond; int in_packet_size; int stream_wait_queue; TYPE_1__* in_urbs; } ;
struct TYPE_2__ {int instance; struct usb_iso_packet_descriptor* packets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct pcm_runtime*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pcm_runtime *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 struct usb_iso_packet_descriptor *VAR_12;

 if (VAR_8->stream_state == VAR_5) {

  VAR_8->stream_wait_cond = 0;
  VAR_8->stream_state = VAR_7;
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
    VAR_12 = &VAR_8->in_urbs[VAR_10].packets[VAR_11];
    VAR_12->offset = VAR_11 * VAR_8->in_packet_size;
    VAR_12->length = VAR_8->in_packet_size;
    VAR_12->actual_length = 0;
    VAR_12->status = 0;
   }
   VAR_9 = FUNC_1(&VAR_8->in_urbs[VAR_10].instance,
     VAR_1);
   if (VAR_9) {
    FUNC_0(VAR_8);
    return VAR_9;
   }
  }


  FUNC_2(VAR_8->stream_wait_queue, VAR_8->stream_wait_cond,
    VAR_2);
  if (VAR_8->stream_wait_cond)
   VAR_8->stream_state = VAR_6;
  else {
   FUNC_0(VAR_8);
   return -VAR_0;
  }
 }
 return 0;
}
