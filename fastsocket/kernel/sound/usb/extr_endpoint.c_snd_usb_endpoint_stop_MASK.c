
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_endpoint {scalar_t__ use_count; int * prepare_data_urb; int * retire_data_urb; int * sync_slave; int * data_subs; } ;


 int FUNC_0 (struct snd_usb_endpoint*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_usb_endpoint*) ;

void FUNC_3(struct snd_usb_endpoint *VAR_0,
      int VAR_1, int VAR_2, int VAR_3)
{
 if (!VAR_0)
  return;

 if (FUNC_1(VAR_0->use_count == 0))
  return;

 if (--VAR_0->use_count == 0) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_0->data_subs = ((void*)0);
  VAR_0->sync_slave = ((void*)0);
  VAR_0->retire_data_urb = ((void*)0);
  VAR_0->prepare_data_urb = ((void*)0);

  if (VAR_3)
   FUNC_2(VAR_0);
 }
}
