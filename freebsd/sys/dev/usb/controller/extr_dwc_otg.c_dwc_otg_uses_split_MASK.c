
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_device {scalar_t__ speed; TYPE_1__* parent_hs_hub; } ;
struct TYPE_2__ {int * parent_hub; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint8_t
FUNC_0(struct usb_device *VAR_1)
{




 return (VAR_1->speed != VAR_0 &&
     VAR_1->parent_hs_hub != ((void*)0) &&
     VAR_1->parent_hs_hub->parent_hub != ((void*)0));
}
