
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_long ;
typedef int term_color_t ;
struct vt_device {struct vga_softc* vd_softc; } ;
struct vga_softc {int vga_curbg; } ;


 int FUNC_0 (struct vga_softc*,int ) ;
 int FUNC_1 (struct vga_softc*,int ,int) ;
 int FUNC_2 (struct vt_device*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct vt_device *VAR_0, u_long VAR_1, term_color_t VAR_2,
    uint8_t VAR_3)
{
 struct vga_softc *VAR_4 = VAR_0->vd_softc;


 if (VAR_3 != 0x00) {
  FUNC_2(VAR_0, VAR_2);







  if (VAR_3 != 0xff) {
   FUNC_0(VAR_4, VAR_1);


   VAR_4->vga_curbg = 0xff;
  }
  FUNC_1(VAR_4, VAR_1, VAR_3);
 }
}
