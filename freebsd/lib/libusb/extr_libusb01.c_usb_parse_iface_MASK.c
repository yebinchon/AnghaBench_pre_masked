
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {struct libusb20_interface* currifc; } ;
struct TYPE_4__ {int currifc; int currifcw; } ;
struct usb_parse_state {scalar_t__ preparse; TYPE_1__ a; TYPE_2__ b; } ;
struct usb_interface {scalar_t__ num_altsetting; int altsetting; } ;
struct libusb20_interface {scalar_t__ num_altsetting; scalar_t__ altsetting; } ;


 int FUNC_0 (struct usb_parse_state*) ;

__attribute__((used)) static void
FUNC_1(struct usb_parse_state *VAR_0)
{
 struct libusb20_interface *VAR_1;
 struct usb_interface *VAR_2;
 uint8_t VAR_3;

 VAR_1 = VAR_0->a.currifc;
 VAR_2 = VAR_0->b.currifcw++;

 if (VAR_0->preparse == 0) {

  VAR_2->altsetting = VAR_0->b.currifc;
  VAR_2->num_altsetting = VAR_1->num_altsetting + 1;
 }
 FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 != VAR_1->num_altsetting; VAR_3++) {
  VAR_0->a.currifc = VAR_1->altsetting + VAR_3;
  FUNC_0(VAR_0);
 }
 return;
}
