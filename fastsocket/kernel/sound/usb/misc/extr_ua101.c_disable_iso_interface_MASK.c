
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bAlternateSetting; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct ua101 {TYPE_3__* dev; int states; TYPE_2__** intf; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct usb_host_interface* cur_altsetting; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ua101 *VAR_1, unsigned int VAR_2)
{
 struct usb_host_interface *VAR_3;

 if (!VAR_1->intf[VAR_2])
  return;

 VAR_3 = VAR_1->intf[VAR_2]->cur_altsetting;
 if (VAR_3->desc.bAlternateSetting != 0) {
  int VAR_4 = FUNC_3(VAR_1->dev,
         VAR_3->desc.bInterfaceNumber, 0);
  if (VAR_4 < 0 && !FUNC_1(VAR_0, &VAR_1->states))
   FUNC_0(&VAR_1->dev->dev,
     "interface reset failed; error %d: %s\n",
     VAR_4, FUNC_2(VAR_4));
 }
}
