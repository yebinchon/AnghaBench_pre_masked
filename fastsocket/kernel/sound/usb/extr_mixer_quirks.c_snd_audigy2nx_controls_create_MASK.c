
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {int* audigy2nx_leds; TYPE_1__* chip; } ;
struct TYPE_2__ {scalar_t__ usb_id; int card; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct usb_mixer_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_mixer_interface *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {

  if ((VAR_1->chip->usb_id == FUNC_1(0x041e, 0x3042)) && VAR_2 == 0)
   continue;

  if ((VAR_1->chip->usb_id == FUNC_1(0x041e, 0x30df)) && VAR_2 == 0)
   continue;
  if (VAR_2 > 1 &&
   (VAR_1->chip->usb_id == FUNC_1(0x041e, 0x3040) ||
    VAR_1->chip->usb_id == FUNC_1(0x041e, 0x3042) ||
    VAR_1->chip->usb_id == FUNC_1(0x041e, 0x30df) ||
    VAR_1->chip->usb_id == FUNC_1(0x041e, 0x3048)))
   break;
  VAR_3 = FUNC_2(VAR_1->chip->card,
      FUNC_3(&VAR_0[VAR_2], VAR_1));
  if (VAR_3 < 0)
   return VAR_3;
 }
 VAR_1->audigy2nx_leds[1] = 1;
 return 0;
}
