
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct snd_usb_caiaq_cb_info* context; } ;
struct snd_usb_caiaqdev {int output_running; int outurb_active_mask; int prepare_wait_queue; } ;
struct snd_usb_caiaq_cb_info {int index; struct snd_usb_caiaqdev* dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct snd_usb_caiaq_cb_info *VAR_1 = VAR_0->context;
 struct snd_usb_caiaqdev *VAR_2 = VAR_1->dev;

 if (!VAR_2->output_running) {
  VAR_2->output_running = 1;
  FUNC_1(&VAR_2->prepare_wait_queue);
 }

 FUNC_0(VAR_1->index, &VAR_2->outurb_active_mask);
}
