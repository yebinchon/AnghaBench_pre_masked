
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int dummy; } ;
struct urb {int dummy; } ;
struct TYPE_2__ {int data_alignment; } ;
struct snd_usb_caiaqdev {TYPE_1__ spec; } ;


 int FUNC_0 (struct snd_usb_caiaqdev*,struct urb*,struct usb_iso_packet_descriptor const*) ;
 int FUNC_1 (struct snd_usb_caiaqdev*,struct urb*,struct usb_iso_packet_descriptor const*) ;

__attribute__((used)) static inline void FUNC_2(struct snd_usb_caiaqdev *VAR_0,
    struct urb *VAR_1,
    const struct usb_iso_packet_descriptor *VAR_2)
{
 switch (VAR_0->spec.data_alignment) {
 case 0:
 case 2:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 case 3:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 }
}
