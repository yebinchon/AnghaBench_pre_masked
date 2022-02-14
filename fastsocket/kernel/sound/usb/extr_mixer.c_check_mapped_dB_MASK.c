
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbmix_name_map {TYPE_1__* dB; } ;
struct usb_mixer_elem_info {int initialized; int dBmax; int dBmin; } ;
struct TYPE_2__ {int max; int min; } ;



__attribute__((used)) static inline void FUNC_0(const struct usbmix_name_map *VAR_0,
       struct usb_mixer_elem_info *VAR_1)
{
 if (VAR_0 && VAR_0->dB) {
  VAR_1->dBmin = VAR_0->dB->min;
  VAR_1->dBmax = VAR_0->dB->max;
  VAR_1->initialized = 1;
 }
}
