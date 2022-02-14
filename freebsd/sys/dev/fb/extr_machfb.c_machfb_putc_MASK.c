
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_4__ {int vi_cheight; int const vi_cwidth; int vi_width; } ;
struct TYPE_5__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint8_t ;
struct machfb_softc {scalar_t__ sc_draw_cache; int sc_cbwidth; int sc_xmargin; int sc_ymargin; int* sc_font; } ;


 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int const VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 scalar_t__ VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;
 scalar_t__ VAR_21 ;
 int const VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_0 (struct machfb_softc*,int) ;
 int FUNC_1 (struct machfb_softc*,int) ;
 int FUNC_2 (struct machfb_softc*,scalar_t__,int const) ;
 int FUNC_3 (struct machfb_softc*,int) ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_25, vm_offset_t VAR_26, uint8_t VAR_27, uint8_t VAR_28)
{
 struct machfb_softc *VAR_29;
 const uint8_t *VAR_30;
 int VAR_31;

 VAR_29 = (struct machfb_softc *)VAR_25;

 if (VAR_29->sc_draw_cache != VAR_17) {
  FUNC_3(VAR_29, 8);
  FUNC_2(VAR_29, VAR_5, 0xff);
  FUNC_2(VAR_29, VAR_3, VAR_6 | VAR_20 | VAR_13);
  FUNC_2(VAR_29, VAR_4, VAR_19 | VAR_0 |
      VAR_12);
  FUNC_2(VAR_29, VAR_2 ,((VAR_18 & 0xffff) << 16) | VAR_18);
  FUNC_2(VAR_29, VAR_1, 0);
  FUNC_2(VAR_29, VAR_21, VAR_22);
  FUNC_2(VAR_29, VAR_7, VAR_10 | VAR_9);
  FUNC_2(VAR_29, VAR_15, VAR_14);
  VAR_29->sc_draw_cache = VAR_17;
 }
 FUNC_0(VAR_29, (VAR_28 >> 4) & 0xf);
 FUNC_1(VAR_29, VAR_28 & 0xf);
 FUNC_3(VAR_29, 4 + (VAR_25->va_info.vi_cheight / VAR_29->sc_cbwidth));
 FUNC_2(VAR_29, VAR_24, 0);
 FUNC_2(VAR_29, VAR_23, VAR_25->va_info.vi_cwidth);
 FUNC_2(VAR_29, VAR_11, ((((VAR_26 % VAR_25->va_info.vi_width) *
     VAR_25->va_info.vi_cwidth) + VAR_29->sc_xmargin) << 16) |
     (((VAR_26 / VAR_25->va_info.vi_width) * VAR_25->va_info.vi_cheight) +
     VAR_29->sc_ymargin));
 FUNC_2(VAR_29, VAR_8, (VAR_25->va_info.vi_cwidth << 16) |
     VAR_25->va_info.vi_cheight);
 VAR_30 = VAR_29->sc_font + (VAR_27 * VAR_25->va_info.vi_cheight * VAR_29->sc_cbwidth);
 for (VAR_31 = 0; VAR_31 < VAR_25->va_info.vi_cheight * VAR_29->sc_cbwidth; VAR_31 += 4)
  FUNC_2(VAR_29, VAR_16 + VAR_31, (VAR_30[VAR_31 + 3] << 24 | VAR_30[VAR_31 + 2] << 16 |
      VAR_30[VAR_31 + 1] << 8 | VAR_30[VAR_31]));

 return (0);
}
