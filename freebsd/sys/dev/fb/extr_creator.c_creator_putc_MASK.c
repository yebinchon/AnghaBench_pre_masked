
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_4__ {int vi_width; int vi_cheight; int vi_cwidth; } ;
struct TYPE_5__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint16_t ;
typedef int u_int8_t ;
struct creator_softc {int sc_ymargin; int sc_xmargin; scalar_t__ sc_font; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct creator_softc*,int ,int ,int) ;
 int * VAR_3 ;
 int FUNC_1 (struct creator_softc*,int) ;
 int FUNC_2 (struct creator_softc*,int ) ;
 int FUNC_3 (struct creator_softc*,int ) ;
 int FUNC_4 (struct creator_softc*,int) ;
 int FUNC_5 (struct creator_softc*,int) ;

__attribute__((used)) static int
FUNC_6(video_adapter_t *VAR_4, vm_offset_t VAR_5, u_int8_t VAR_6, u_int8_t VAR_7)
{
 struct creator_softc *VAR_8;
 const uint16_t *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_8 = (struct creator_softc *)VAR_4;
 VAR_10 = (VAR_5 / VAR_4->va_info.vi_width) * VAR_4->va_info.vi_cheight;
 VAR_11 = (VAR_5 % VAR_4->va_info.vi_width) * VAR_4->va_info.vi_cwidth;
 VAR_9 = (const uint16_t *)VAR_8->sc_font + (VAR_6 * VAR_4->va_info.vi_cheight);
 FUNC_3(VAR_8, VAR_3[VAR_7 & 0xf]);
 FUNC_2(VAR_8, VAR_3[(VAR_7 >> 4) & 0xf]);
 FUNC_1(VAR_8, 1 + VAR_4->va_info.vi_cheight);
 FUNC_0(VAR_8, VAR_0, VAR_2,
     ((VAR_10 + VAR_8->sc_ymargin) << 16) | (VAR_11 + VAR_8->sc_xmargin));
 FUNC_5(VAR_8, VAR_4->va_info.vi_cwidth);
 FUNC_4(VAR_8, 0x10000);
 for (VAR_12 = 0; VAR_12 < VAR_4->va_info.vi_cheight; VAR_12++) {
  FUNC_0(VAR_8, VAR_0, VAR_1, *VAR_9++ << 16);
 }
 return (0);
}
