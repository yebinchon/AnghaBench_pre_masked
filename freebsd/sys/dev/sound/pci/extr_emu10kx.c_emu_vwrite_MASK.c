
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct emu_voice {int sa; int start; int ea; int end; int* routing; int* amounts; struct emu_voice* slave; scalar_t__ stereo; int vnum; scalar_t__ b16; } ;
struct TYPE_2__ {scalar_t__ silent_page_addr; } ;
struct emu_sc_info {TYPE_1__ mem; scalar_t__ is_emu10k1; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (struct emu_sc_info*,int ,int ,int) ;

void
FUNC_1(struct emu_sc_info *VAR_35, struct emu_voice *VAR_36)
{
 int VAR_37;
 uint32_t VAR_38, VAR_39, VAR_40;

 VAR_37 = (VAR_36->stereo ? 1 : 0) + (VAR_36->b16 ? 1 : 0);

 VAR_36->sa = VAR_36->start >> VAR_37;
 VAR_36->ea = VAR_36->end >> VAR_37;


 if (VAR_36->stereo) {
  FUNC_0(VAR_35, VAR_36->vnum, VAR_9, VAR_10);
 } else {
  FUNC_0(VAR_35, VAR_36->vnum, VAR_9, 0);
 }
 VAR_39 = VAR_36->stereo ? 28 : 30;
 VAR_39 *= VAR_36->b16 ? 1 : 2;
 VAR_38 = VAR_36->sa + VAR_39;

 if (VAR_35->is_emu10k1) {
  FUNC_0(VAR_35, VAR_36->vnum, VAR_20, ((VAR_36->routing[3] << 12) |
      (VAR_36->routing[2] << 8) |
      (VAR_36->routing[1] << 4) |
      (VAR_36->routing[0] << 0)) << 16);
 } else {
  FUNC_0(VAR_35, VAR_36->vnum, VAR_0, (VAR_36->routing[3] << 24) |
      (VAR_36->routing[2] << 16) |
      (VAR_36->routing[1] << 8) |
      (VAR_36->routing[0] << 0));
  FUNC_0(VAR_35, VAR_36->vnum, VAR_1, (VAR_36->routing[7] << 24) |
      (VAR_36->routing[6] << 16) |
      (VAR_36->routing[5] << 8) |
      (VAR_36->routing[4] << 0));
  FUNC_0(VAR_35, VAR_36->vnum, VAR_2, (VAR_36->amounts[7] << 24) |
      (VAR_36->amounts[6] << 26) |
      (VAR_36->amounts[5] << 8) |
      (VAR_36->amounts[4] << 0));
 }
 FUNC_0(VAR_35, VAR_36->vnum, VAR_29, (VAR_36->amounts[0] << 8) | (VAR_36->amounts[1] << 0));
 FUNC_0(VAR_35, VAR_36->vnum, VAR_15, VAR_36->ea | (VAR_36->amounts[3] << 24));
 FUNC_0(VAR_35, VAR_36->vnum, VAR_28, VAR_36->sa | (VAR_36->amounts[2] << 24));

 FUNC_0(VAR_35, VAR_36->vnum, VAR_7, VAR_38 | (VAR_36->b16 ? 0 : VAR_8));
 FUNC_0(VAR_35, VAR_36->vnum, VAR_33, 0);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_34, 0);

 VAR_40 = ((uint32_t) (VAR_35->mem.silent_page_addr) << 1) | VAR_25;
 FUNC_0(VAR_35, VAR_36->vnum, VAR_23, VAR_40);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_24, VAR_40);

 FUNC_0(VAR_35, VAR_36->vnum, VAR_11, VAR_12);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_31, VAR_32);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_3, 0);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_13, VAR_14);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_21, 0x8000);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_22, 0x8000);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_19, 0);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_30, 0);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_18, 0);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_16, 0x8000);

 FUNC_0(VAR_35, VAR_36->vnum, VAR_4, VAR_6 | VAR_5);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_17, 0x8000);

 FUNC_0(VAR_35, VAR_36->vnum, VAR_26, 0x7f);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_27, 0);
 if ((VAR_36->stereo) && (VAR_36->slave != ((void*)0)))
  FUNC_1(VAR_35, VAR_36->slave);
}
