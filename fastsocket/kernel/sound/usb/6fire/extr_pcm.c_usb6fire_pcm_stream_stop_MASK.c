
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcm_runtime {scalar_t__ stream_state; TYPE_1__* out_urbs; TYPE_3__* in_urbs; TYPE_2__* chip; } ;
struct control_runtime {int usb_streaming; int (* update_streaming ) (struct control_runtime*) ;} ;
struct TYPE_6__ {int instance; } ;
struct TYPE_5__ {struct control_runtime* control; } ;
struct TYPE_4__ {int instance; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct control_runtime*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pcm_runtime *VAR_2)
{
 int VAR_3;
 struct control_runtime *VAR_4 = VAR_2->chip->control;

 if (VAR_2->stream_state != VAR_1) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_1(&VAR_2->in_urbs[VAR_3].instance);
   FUNC_1(&VAR_2->out_urbs[VAR_3].instance);
  }
  VAR_4->usb_streaming = 0;
  VAR_4->update_streaming(VAR_4);
  VAR_2->stream_state = VAR_1;
 }
}
