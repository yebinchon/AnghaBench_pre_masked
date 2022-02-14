
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usb_midi_out_endpoint {TYPE_2__* urbs; TYPE_3__* umidi; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* urb; } ;
struct TYPE_4__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,void*,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void const*,int,int ) ;
 int FUNC_3 (int ,int ,void*,int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct snd_usb_midi_out_endpoint* VAR_2,
     const void *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 void *VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_0("sending", VAR_6, VAR_4);
 if (VAR_2->urbs[0].urb)
  VAR_5 = FUNC_3(VAR_2->umidi->dev, VAR_2->urbs[0].urb->pipe,
       VAR_6, VAR_4, ((void*)0), 250);
 FUNC_1(VAR_6);
 return VAR_5;
}
