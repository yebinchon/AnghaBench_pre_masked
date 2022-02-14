
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_1__* chip; struct usb_mixer_elem_info** id_elems; } ;
struct usb_mixer_elem_info {int elem_id; struct usb_mixer_elem_info* next_id_elem; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct usb_mixer_interface *VAR_1, int VAR_2)
{
 struct usb_mixer_elem_info *VAR_3;

 for (VAR_3 = VAR_1->id_elems[VAR_2]; VAR_3; VAR_3 = VAR_3->next_id_elem)
  FUNC_0(VAR_1->chip->card, VAR_0,
          VAR_3->elem_id);
}
