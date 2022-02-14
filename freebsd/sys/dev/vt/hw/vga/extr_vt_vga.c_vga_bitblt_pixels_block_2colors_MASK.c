
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int term_color_t ;
struct vt_device {struct vga_softc* vd_softc; } ;
struct vga_softc {int dummy; } ;


 int FUNC_0 (struct vga_softc*,unsigned int,int const) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct vt_device*,int ) ;
 int FUNC_2 (struct vt_device*,int ) ;

__attribute__((used)) static void
FUNC_3(struct vt_device *VAR_1, const uint8_t *VAR_2,
    term_color_t VAR_3, term_color_t VAR_4,
    unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct vga_softc *VAR_10;
 FUNC_1(VAR_1, VAR_4);
 FUNC_2(VAR_1, VAR_3);

 VAR_10 = VAR_1->vd_softc;
 VAR_9 = (VAR_0 * VAR_6 + VAR_5) / 8;

 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8, VAR_9 += VAR_0 / 8) {
  FUNC_0(VAR_10, VAR_9, VAR_2[VAR_8]);
 }
}
