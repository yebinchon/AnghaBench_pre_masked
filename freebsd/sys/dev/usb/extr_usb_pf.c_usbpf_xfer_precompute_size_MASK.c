
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct usb_xfer {size_t nframes; size_t aframes; int * frlengths; } ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct usb_xfer*,size_t) ;

__attribute__((used)) static uint32_t
FUNC_2(struct usb_xfer *VAR_3, int VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 if (VAR_4 == VAR_2)
  VAR_7 = VAR_3->nframes;
 else
  VAR_7 = VAR_3->aframes;

 VAR_5 = VAR_1 + (VAR_0 * VAR_7);


 for (VAR_6 = 0; VAR_6 != VAR_7; VAR_6++) {
  if (FUNC_1(VAR_3, VAR_6)) {
   if (VAR_4 != VAR_2) {
    VAR_5 += FUNC_0(
        VAR_3->frlengths[VAR_6]);
   }
  } else {
   if (VAR_4 == VAR_2) {
    VAR_5 += FUNC_0(
        VAR_3->frlengths[VAR_6]);
   }
  }
 }
 return (VAR_5);
}
