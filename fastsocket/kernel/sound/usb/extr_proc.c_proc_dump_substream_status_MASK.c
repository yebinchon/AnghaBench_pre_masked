
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {int sync_endpoint; int data_endpoint; int altset_idx; int interface; scalar_t__ running; } ;
struct snd_info_buffer {int dummy; } ;


 int FUNC_0 (struct snd_usb_substream*,int ,struct snd_info_buffer*) ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_substream *VAR_0, struct snd_info_buffer *VAR_1)
{
 if (VAR_0->running) {
  FUNC_1(VAR_1, "  Status: Running\n");
  FUNC_1(VAR_1, "    Interface = %d\n", VAR_0->interface);
  FUNC_1(VAR_1, "    Altset = %d\n", VAR_0->altset_idx);
  FUNC_0(VAR_0, VAR_0->data_endpoint, VAR_1);
  FUNC_0(VAR_0, VAR_0->sync_endpoint, VAR_1);
 } else {
  FUNC_1(VAR_1, "  Status: Stop\n");
 }
}
