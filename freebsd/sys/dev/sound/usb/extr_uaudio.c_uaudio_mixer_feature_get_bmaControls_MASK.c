
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint32_t ;
struct usb_audio_feature_unit {size_t bControlSize; size_t* bmaControls; } ;



__attribute__((used)) static uint32_t
FUNC_0(const struct usb_audio_feature_unit *VAR_0,
    uint8_t VAR_1)
{
 uint32_t VAR_2 = 0;
 uint32_t VAR_3 = (VAR_1 * VAR_0->bControlSize);

 if (VAR_0->bControlSize > 0) {
  VAR_2 |= VAR_0->bmaControls[VAR_3];
  if (VAR_0->bControlSize > 1) {
   VAR_2 |= VAR_0->bmaControls[VAR_3 + 1] << 8;
   if (VAR_0->bControlSize > 2) {
    VAR_2 |= VAR_0->bmaControls[VAR_3 + 2] << 16;
    if (VAR_0->bControlSize > 3) {
     VAR_2 |= VAR_0->bmaControls[VAR_3 + 3] << 24;
    }
   }
  }
 }
 return (VAR_2);
}
