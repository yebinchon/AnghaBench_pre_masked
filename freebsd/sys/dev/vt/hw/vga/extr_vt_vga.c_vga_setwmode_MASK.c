
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {struct vga_softc* vd_softc; } ;
struct vga_softc {int vga_wmode; } ;


 int FUNC_0 (struct vga_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static inline void
FUNC_1(struct vt_device *VAR_10, int VAR_11)
{
 struct vga_softc *VAR_12 = VAR_10->vd_softc;

 if (VAR_12->vga_wmode == VAR_11)
  return;

 FUNC_0(VAR_12, VAR_0, VAR_2);
 FUNC_0(VAR_12, VAR_1, VAR_11);
 VAR_12->vga_wmode = VAR_11;

 switch (VAR_11) {
 case 3:

  FUNC_0(VAR_12, VAR_3, VAR_5);
  FUNC_0(VAR_12, VAR_4, VAR_9 | VAR_8 |
      VAR_7 | VAR_6);
  break;
 }
}
