
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct vesa_mode {int v_modeattr; int v_width; int v_height; int v_bpp; int v_planes; int v_cwidth; int v_cheight; int v_ipages; int v_memmodel; int v_lfb; int v_offscreen; int v_offscreensize; int v_waseg; int v_waattr; int v_wbseg; int v_wbattr; int v_wsize; int v_wgran; } ;
struct TYPE_2__ {int v_version; int v_memsize; int v_flags; int v_modetable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_1 (int,struct vesa_mode*,int ) ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int* VAR_12 ;

__attribute__((used)) static int
FUNC_2(int VAR_13)
{




 uint16_t VAR_14;

 VAR_14 = VAR_7->v_version;

 if (VAR_6) {

  FUNC_0(
 "VESA: v%d.%d, %dk memory, flags:0x%x, mode table:%p (%x)\n",
      (VAR_14 >> 12) * 10 + ((VAR_14 & 0x0f00) >> 8),
      ((VAR_14 & 0x00f0) >> 4) * 10 + (VAR_14 & 0x000f),
      VAR_7->v_memsize * 64, VAR_7->v_flags,
      VAR_12, VAR_7->v_modetable);


  if (VAR_8 != ((void*)0))
   FUNC_0("VESA: %s\n", VAR_8);
 }

 if (VAR_13 <= 0)
  return (0);

 if (VAR_14 >= 0x0200 && VAR_6) {

  FUNC_0("VESA: %s %s %s\n",
   (VAR_11 != ((void*)0)) ? VAR_11 : "unknown",
   (VAR_9 != ((void*)0)) ? VAR_9 : "unknown",
   (VAR_10 != ((void*)0)) ? VAR_10 : "?");
 }
 return (0);
}
