
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ usb_mode; } ;
struct TYPE_5__ {scalar_t__* type_refs; scalar_t__ write_refs; scalar_t__ read_refs; } ;
struct usb_device {scalar_t__ power_mode; scalar_t__ driver_added_refcount; scalar_t__ re_enumerate_wait; TYPE_3__ flags; TYPE_2__ pwr_save; TYPE_1__* bus; } ;
struct TYPE_4__ {scalar_t__ driver_added_refcount; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct usb_device*) ;

__attribute__((used)) static uint8_t
FUNC_1(struct usb_device *VAR_4)
{
 return (((VAR_4->power_mode == VAR_2) &&
     (VAR_4->flags.usb_mode == VAR_1)) ||
     (VAR_4->driver_added_refcount != VAR_4->bus->driver_added_refcount) ||
     (VAR_4->re_enumerate_wait != VAR_3) ||
     (VAR_4->pwr_save.type_refs[VAR_0] != 0) ||
     (VAR_4->pwr_save.write_refs != 0) ||
     ((VAR_4->pwr_save.read_refs != 0) &&
     (VAR_4->flags.usb_mode == VAR_1) &&
     (FUNC_0(VAR_4) == 0)));
}
