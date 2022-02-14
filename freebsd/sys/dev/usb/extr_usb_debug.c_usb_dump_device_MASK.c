
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int self_powered; } ;
struct usb_device {int address; int curr_config_no; int depth; int speed; int power; int langid; TYPE_1__ flags; int bus; } ;


 int FUNC_0 (char*,struct usb_device*,...) ;

void
FUNC_1(struct usb_device *VAR_0)
{
 FUNC_0("usb_dump_device: dev=%p\n", VAR_0);
 if (VAR_0 == ((void*)0)) {
  return;
 }
 FUNC_0(" bus=%p \n"
     " address=%d config=%d depth=%d speed=%d self_powered=%d\n"
     " power=%d langid=%d\n",
     VAR_0->bus,
     VAR_0->address, VAR_0->curr_config_no, VAR_0->depth, VAR_0->speed,
     VAR_0->flags.self_powered, VAR_0->power, VAR_0->langid);
}
