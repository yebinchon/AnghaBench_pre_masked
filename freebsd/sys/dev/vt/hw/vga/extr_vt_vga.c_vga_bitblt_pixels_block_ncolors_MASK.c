
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vt_device {struct vga_softc* vd_softc; } ;
struct vga_softc {int dummy; } ;
typedef int plans ;


 int FUNC_0 (struct vga_softc*,unsigned int,int) ;
 int FUNC_1 (struct vga_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct vt_device*,int ) ;

__attribute__((used)) static void
FUNC_4(struct vt_device *VAR_4, const uint8_t *VAR_5,
    unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct vga_softc *VAR_14;
 uint8_t VAR_15, VAR_16[VAR_8 * 4];

 VAR_14 = VAR_4->vd_softc;

 FUNC_2(VAR_16, 0, sizeof(VAR_16));
 for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
  for (VAR_12 = 0; VAR_12 < 16; ++VAR_12) {
   VAR_15 = VAR_5[VAR_9 * 16 + VAR_12];
   if (VAR_15 == 0x00)
    continue;

   for (VAR_10 = 0; VAR_10 < 8; ++VAR_10) {
    if (!((VAR_15 >> (7 - VAR_10)) & 0x1))
     continue;


    for (VAR_11 = 0; VAR_11 < 4; ++VAR_11)
     VAR_16[VAR_9 * 4 + VAR_11] |=
         ((VAR_12 >> VAR_11) & 0x1) << (7 - VAR_10);
   }
  }
 }





 FUNC_3(VAR_4, 0);

 FUNC_1(VAR_14, VAR_0, VAR_2);
 for (VAR_11 = 0; VAR_11 < 4; ++VAR_11) {

  FUNC_1(VAR_14, VAR_1, 1 << VAR_11);


  for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
   VAR_13 = (VAR_3 * (VAR_7 + VAR_9) + VAR_6) / 8;
   FUNC_0(VAR_14, VAR_13, VAR_16[VAR_9 * 4 + VAR_11]);
  }
 }
}
