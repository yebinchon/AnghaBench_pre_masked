
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_endpoint {int nurbs; int * syncbuf; int sync_dma; TYPE_1__* chip; int * urb; int * prepare_data_urb; int * retire_data_urb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_usb_endpoint*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (struct snd_usb_endpoint*) ;

__attribute__((used)) static void FUNC_4(struct snd_usb_endpoint *VAR_1, int VAR_2)
{
 int VAR_3;


 VAR_1->retire_data_urb = ((void*)0);
 VAR_1->prepare_data_urb = ((void*)0);


 FUNC_0(VAR_1, VAR_2, 1);
 FUNC_3(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_1->nurbs; VAR_3++)
  FUNC_1(&VAR_1->urb[VAR_3]);

 if (VAR_1->syncbuf)
  FUNC_2(VAR_1->chip->dev, VAR_0 * 4,
      VAR_1->syncbuf, VAR_1->sync_dma);

 VAR_1->syncbuf = ((void*)0);
 VAR_1->nurbs = 0;
}
