
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t term_color_t ;
struct vt_device {struct vga_softc* vd_softc; } ;
struct vga_softc {size_t vga_curfg; } ;


 int FUNC_0 (struct vga_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct vt_device*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct vt_device *VAR_4, term_color_t VAR_5)
{
 struct vga_softc *VAR_6 = VAR_4->vd_softc;

 FUNC_1(VAR_4, 3);

 if (VAR_6->vga_curfg == VAR_5)
  return;

 FUNC_0(VAR_6, VAR_0, VAR_2);
 FUNC_0(VAR_6, VAR_1, VAR_3[VAR_5]);
 VAR_6->vga_curfg = VAR_5;
}
