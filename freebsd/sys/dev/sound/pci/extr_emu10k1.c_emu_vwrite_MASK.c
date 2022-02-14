
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {scalar_t__ silent_page_addr; } ;
struct sc_info {TYPE_1__ mem; scalar_t__ audigy; } ;
struct emu_voice {int start; int end; int vol; int fxrt1; int fxrt2; struct emu_voice* slave; int vnum; scalar_t__ b16; scalar_t__ stereo; scalar_t__ ismaster; } ;


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
 int FUNC_0 (struct sc_info*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_35, struct emu_voice *VAR_36)
{
 int VAR_37;
 int VAR_38, VAR_39, VAR_40, VAR_41;
 u_int32_t VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;

 VAR_37 = (VAR_36->stereo ? 1 : 0) + (VAR_36->b16 ? 1 : 0);

 VAR_42 = VAR_36->start >> VAR_37;
 VAR_43 = VAR_36->end >> VAR_37;

 VAR_38 = VAR_39 = VAR_40 = VAR_41 = VAR_36->vol;
 if (VAR_36->stereo) {
  VAR_38 = VAR_36->ismaster ? VAR_38 : 0;
  VAR_39 = VAR_36->ismaster ? 0 : VAR_39;
 }

 FUNC_0(VAR_35, VAR_36->vnum, VAR_9, VAR_36->stereo ? VAR_10 : 0);
 VAR_45 = VAR_36->stereo ? 28 : 30;
 VAR_45 *= VAR_36->b16 ? 1 : 2;
 VAR_44 = VAR_42 + VAR_45;

 if (VAR_35->audigy) {
  FUNC_0(VAR_35, VAR_36->vnum, VAR_0, VAR_36->fxrt1);
  FUNC_0(VAR_35, VAR_36->vnum, VAR_1, VAR_36->fxrt2);
  FUNC_0(VAR_35, VAR_36->vnum, VAR_2, 0);
 }
 else
  FUNC_0(VAR_35, VAR_36->vnum, VAR_20, VAR_36->fxrt1 << 16);

 FUNC_0(VAR_35, VAR_36->vnum, VAR_29, (VAR_40 << 8) | VAR_39);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_15, VAR_43 | (VAR_41 << 24));
 FUNC_0(VAR_35, VAR_36->vnum, VAR_28, VAR_42 | (VAR_38 << 24));
 FUNC_0(VAR_35, VAR_36->vnum, VAR_7, VAR_44 | (VAR_36->b16 ? 0 : VAR_8));

 FUNC_0(VAR_35, VAR_36->vnum, VAR_33, 0);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_34, 0);

 VAR_46 = ((u_int32_t)(VAR_35->mem.silent_page_addr) << 1)
     | VAR_25;
 FUNC_0(VAR_35, VAR_36->vnum, VAR_23, VAR_46);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_24, VAR_46);

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

 FUNC_0(VAR_35, VAR_36->vnum, VAR_4,
     VAR_6 | VAR_5);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_17, 0x8000);

 FUNC_0(VAR_35, VAR_36->vnum, VAR_26, 0x7f);
 FUNC_0(VAR_35, VAR_36->vnum, VAR_27, 0);

 if (VAR_36->slave != ((void*)0))
  FUNC_1(VAR_35, VAR_36->slave);
}
