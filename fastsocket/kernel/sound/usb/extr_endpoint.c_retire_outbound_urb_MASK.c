
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_endpoint {int data_subs; int (* retire_data_urb ) (int ,int ) ;} ;
struct snd_urb_ctx {int urb; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_endpoint *VAR_0,
    struct snd_urb_ctx *VAR_1)
{
 if (VAR_0->retire_data_urb)
  VAR_0->retire_data_urb(VAR_0->data_subs, VAR_1->urb);
}
