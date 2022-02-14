
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_dma; int transfer_buffer; } ;
struct snd_usb_midi {int dev; } ;


 int FUNC_0 (int ,unsigned int,int ,int ) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct snd_usb_midi *VAR_0, struct urb *VAR_1,
    unsigned int VAR_2)
{
 FUNC_0(VAR_0->dev, VAR_2,
   VAR_1->transfer_buffer, VAR_1->transfer_dma);
 FUNC_1(VAR_1);
}
