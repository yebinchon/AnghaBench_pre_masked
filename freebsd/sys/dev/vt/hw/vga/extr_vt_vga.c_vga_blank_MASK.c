
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int term_color_t ;
struct vt_device {struct vga_softc* vd_softc; } ;
struct vga_softc {int dummy; } ;


 int FUNC_0 (struct vga_softc*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vt_device*,int ) ;

__attribute__((used)) static void
FUNC_2(struct vt_device *VAR_1, term_color_t VAR_2)
{
 struct vga_softc *VAR_3 = VAR_1->vd_softc;
 u_int VAR_4;

 FUNC_1(VAR_1, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_3, VAR_4, 0xff);
}
