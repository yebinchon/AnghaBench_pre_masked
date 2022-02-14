
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_voice {struct emu_voice* slave; scalar_t__ stereo; int vnum; int speed; scalar_t__ b16; } ;
struct emu_sc_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct emu_sc_info*,int ,int) ;
 int FUNC_3 (struct emu_sc_info*,int ,scalar_t__,int) ;

void
FUNC_4(struct emu_sc_info *VAR_10, struct emu_voice *VAR_11, int VAR_12)
{
 uint32_t VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;

 if (VAR_12) {
  VAR_15 = 64;
  VAR_16 = VAR_11->stereo ? 4 : 2;
  VAR_17 = VAR_11->stereo ? 28 : 30;
  VAR_17 *= VAR_11->b16 ? 1 : 2;
  VAR_18 = VAR_11->b16 ? 0x00000000 : 0x80808080;
  for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++)
   FUNC_3(VAR_10, VAR_11->vnum, VAR_2 + VAR_19, VAR_18);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_0, 0);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_1, VAR_15);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_0, VAR_17);

  FUNC_3(VAR_10, VAR_11->vnum, VAR_6, 0xff00);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_9, 0xffffffff);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_4, 0xffffffff);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_5, 0x00007f7f);
  FUNC_2(VAR_10, VAR_11->vnum, 0);

  VAR_13 = FUNC_0(VAR_11->speed);
  VAR_14 = FUNC_1(VAR_11->speed) >> 8;
  FUNC_3(VAR_10, VAR_11->vnum, VAR_8, VAR_13);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_3, VAR_13);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_7, VAR_14);
 } else {
  FUNC_3(VAR_10, VAR_11->vnum, VAR_8, 0);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_3, 0);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_6, 0xffff);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_9, 0x0000ffff);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_4, 0x0000ffff);
  FUNC_3(VAR_10, VAR_11->vnum, VAR_7, 0);
  FUNC_2(VAR_10, VAR_11->vnum, 1);
 }
 if ((VAR_11->stereo) && (VAR_11->slave != ((void*)0)))
  FUNC_4(VAR_10, VAR_11->slave, VAR_12);
}
