
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_5__ {int vi_width; int vi_cwidth; int vi_cheight; } ;
struct TYPE_6__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct machfb_softc {int sc_xmargin; int sc_ymargin; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int,int) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_1, vm_offset_t VAR_2, uint16_t *VAR_3, int VAR_4)
{
 struct machfb_softc *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 uint8_t VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_5 = (struct machfb_softc *)VAR_1;





 VAR_6 = VAR_14 = VAR_8 = VAR_10 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {






  VAR_13 = VAR_3[VAR_7] & 0xff;
  VAR_12 = (VAR_3[VAR_7] & 0xff00) >> 8;
  if (VAR_13 == 0x00 || VAR_13 == 0x20 || VAR_13 == 0xdb || VAR_13 == 0xff) {
   VAR_15 = (VAR_12 >> (VAR_13 == 0xdb ? 0 : 4) & 0xf);
   VAR_9 = (((VAR_2 + VAR_7) % VAR_1->va_info.vi_width) *
       VAR_1->va_info.vi_cwidth) + VAR_5->sc_xmargin;
   VAR_11 = (((VAR_2 + VAR_7) / VAR_1->va_info.vi_width) *
       VAR_1->va_info.vi_cheight) + VAR_5->sc_ymargin;
   if (VAR_6 == 0) {
    VAR_14 = VAR_15;
    VAR_8 = VAR_9;
    VAR_10 = VAR_11;
    VAR_6++;
   } else if (VAR_14 != VAR_15 || VAR_10 != VAR_11) {
    FUNC_0(VAR_1, VAR_14, VAR_8, VAR_10, VAR_6 * VAR_1->va_info.vi_cwidth, VAR_1->va_info.vi_cheight);
    VAR_14 = VAR_15;
    VAR_8 = VAR_9;
    VAR_10 = VAR_11;
    VAR_6 = 1;
   } else
    VAR_6++;
  } else {
   if (VAR_6 != 0) {
    FUNC_0(VAR_1, VAR_14, VAR_8, VAR_10, VAR_6 * VAR_1->va_info.vi_cwidth, VAR_1->va_info.vi_cheight);
    VAR_6 = 0;
   }
   FUNC_0(VAR_1, VAR_2 + VAR_7, VAR_13, VAR_12);
  }
 }
 if (VAR_6 != 0)
  FUNC_0(VAR_1, VAR_14, VAR_8, VAR_10, VAR_6 * VAR_1->va_info.vi_cwidth, VAR_1->va_info.vi_cheight);



 return (0);
}
