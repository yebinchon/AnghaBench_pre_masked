
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {int xonar_u1_status; TYPE_1__* chip; } ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct usb_mixer_interface*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->chip->card,
     FUNC_1(&VAR_0, VAR_1));
 if (VAR_2 < 0)
  return VAR_2;
 VAR_1->xonar_u1_status = 0x05;
 return 0;
}
