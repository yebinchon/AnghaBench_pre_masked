
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t term_color_t ;
struct vt_device {struct vga_softc* vd_softc; } ;
struct vga_softc {size_t vga_curbg; int vga_curfg; } ;


 int FUNC_0 (struct vga_softc*,int ) ;
 int FUNC_1 (struct vga_softc*,int ,int) ;
 int FUNC_2 (struct vga_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (struct vt_device*,int) ;

__attribute__((used)) static inline void
FUNC_4(struct vt_device *VAR_5, term_color_t VAR_6)
{
 struct vga_softc *VAR_7 = VAR_5->vd_softc;

 FUNC_3(VAR_5, 3);

 if (VAR_7->vga_curbg == VAR_6)
  return;

 FUNC_2(VAR_7, VAR_0, VAR_2);
 FUNC_2(VAR_7, VAR_1, VAR_4[VAR_6]);





 FUNC_1(VAR_7, VAR_3, 0xff);





 FUNC_0(VAR_7, VAR_3);

 VAR_7->vga_curbg = VAR_6;





 VAR_7->vga_curfg = 0xff;
}
