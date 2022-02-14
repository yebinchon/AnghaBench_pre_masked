
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vesa_mode {int v_modeattr; int v_bpp; int v_planes; int v_width; int v_linbpscanline; int v_bpscanline; } ;
struct TYPE_2__ {int v_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct vesa_mode *VAR_3)
{
 int VAR_4;

 if ((VAR_3->v_modeattr & VAR_0) != 0) {

  switch (VAR_3->v_bpp / VAR_3->v_planes) {
  case 1:
   VAR_4 = VAR_3->v_width / 8;
   break;
  case 2:
   VAR_4 = VAR_3->v_width / 4;
   break;
  case 4:
   VAR_4 = VAR_3->v_width / 2;
   break;
  default:
   VAR_4 = VAR_3->v_width * ((VAR_3->v_bpp + 7) / 8);
   VAR_4 /= VAR_3->v_planes;
   break;
  }


  if ((VAR_3->v_modeattr & VAR_1) != 0 &&
      VAR_2->v_version >= 0x0300 &&
      VAR_3->v_linbpscanline > VAR_4)
   return (VAR_3->v_linbpscanline);


  if (VAR_3->v_bpscanline < VAR_4)
   return (VAR_4);
 }

 return (VAR_3->v_bpscanline);
}
