
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* ptb_pages; int ptb_pages_addr; int silent_page_addr; int * silent_page; int ptb_map; int silent_map; int blocks; struct emu_sc_info* card; int dmat; } ;
struct emu_sc_info {int dev; scalar_t__ is_ca0108; scalar_t__ is_ca0102; scalar_t__ is_emu10k2; scalar_t__ broken_digital; TYPE_1__ mem; scalar_t__ has_71; scalar_t__ has_51; } ;


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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int FUNC_0 (int *) ;
 int VAR_79 ;
 scalar_t__ VAR_80 ;
 scalar_t__ FUNC_1 (int ,int,int ,unsigned int,int ,int *,int *,int ,int,int,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_81 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (TYPE_1__*,int*,int ) ;
 int FUNC_7 (struct emu_sc_info*) ;
 void* FUNC_8 (TYPE_1__*,int,int*,int *) ;
 int FUNC_9 (struct emu_sc_info*,int ,int) ;
 int FUNC_10 (struct emu_sc_info*,int ,int) ;
 int FUNC_11 (struct emu_sc_info*,int ,int,int) ;
 int FUNC_12 (struct emu_sc_info*,int ,int ,int) ;
 int FUNC_13 (struct emu_sc_info*,int,int,int) ;
 int FUNC_14 (struct emu_sc_info*,int) ;
 int FUNC_15 (struct emu_sc_info*,int ) ;
 int FUNC_16 (char*,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_17(struct emu_sc_info *VAR_82)
{
 uint32_t VAR_83, VAR_84;
 uint32_t VAR_85;
 uint32_t VAR_86;
 int VAR_87;
 int VAR_88;


 FUNC_11(VAR_82, VAR_53, VAR_54 | VAR_55 | VAR_56, 4);


 FUNC_13(VAR_82, 0, VAR_66, VAR_68);
 FUNC_13(VAR_82, 0, VAR_65, 0);
 FUNC_13(VAR_82, 0, VAR_52, VAR_68);
 FUNC_13(VAR_82, 0, VAR_51, 0);
 FUNC_13(VAR_82, 0, VAR_12, VAR_68);
 FUNC_13(VAR_82, 0, VAR_11, 0);


 FUNC_11(VAR_82, VAR_57, VAR_60 | VAR_62 | VAR_61, 4);
 FUNC_13(VAR_82, 0, VAR_50, 0);
 FUNC_13(VAR_82, 0, VAR_49, 0);
 FUNC_13(VAR_82, 0, VAR_70, 0);
 FUNC_13(VAR_82, 0, VAR_69, 0);


 if ((VAR_82->is_ca0102) || (VAR_82->is_ca0108))
  FUNC_11(VAR_82, VAR_58, 0, 4);

 if (VAR_82->is_ca0102)
  FUNC_11(VAR_82, VAR_59, 0, 4);


 VAR_86 = 0;
 if (VAR_82->has_51)
  VAR_86 = VAR_7 | VAR_8;
 if (VAR_82->has_71)
  VAR_86 = VAR_7 | VAR_8 | VAR_9 | VAR_10;
 if (VAR_82->is_emu10k2)
  VAR_86 |= 0x40;
 FUNC_13(VAR_82, 0, VAR_6, VAR_86);

 if (VAR_82->is_emu10k2)
  FUNC_13(VAR_82, 0, VAR_71, 0xf00);


 if (FUNC_1( FUNC_3(VAR_82->dev),
                      2, 0,
                    (1U << 31) - 1,
                     VAR_0,
                   ((void*)0), ((void*)0),
                    VAR_64, 1, 0x3ffff,
                  0, VAR_81,
                    &VAR_75, &(VAR_82->mem.dmat)) != 0) {
  FUNC_5(VAR_82->dev, "unable to create dma tag\n");
  FUNC_2(VAR_82->mem.dmat);
  return (VAR_74);
 }

 VAR_82->mem.card = VAR_82;
 FUNC_0(&VAR_82->mem.blocks);
 VAR_82->mem.ptb_pages = FUNC_8(&VAR_82->mem, VAR_63 * sizeof(uint32_t), &VAR_82->mem.ptb_pages_addr, &VAR_82->mem.ptb_map);
 if (VAR_82->mem.ptb_pages == ((void*)0))
  return (VAR_74);

 VAR_82->mem.silent_page = FUNC_8(&VAR_82->mem, VAR_1, &VAR_82->mem.silent_page_addr, &VAR_82->mem.silent_map);
 if (VAR_82->mem.silent_page == ((void*)0)) {
  FUNC_6(&VAR_82->mem, VAR_82->mem.ptb_pages, VAR_82->mem.ptb_map);
  return (VAR_74);
 }

 FUNC_4(VAR_82->mem.silent_page, VAR_1);
 VAR_84 = (uint32_t) (VAR_82->mem.silent_page_addr) << 1;
 for (VAR_88 = 0; VAR_88 < VAR_63; VAR_88++)
  VAR_82->mem.ptb_pages[VAR_88] = VAR_84 | VAR_88;

 for (VAR_83 = 0; VAR_83 < VAR_78; VAR_83++) {
  FUNC_13(VAR_82, VAR_83, VAR_38, VAR_84 | VAR_40);
  FUNC_13(VAR_82, VAR_83, VAR_39, VAR_84 | VAR_40);
 }
 FUNC_13(VAR_82, 0, VAR_67, (VAR_82->mem.ptb_pages_addr));
 FUNC_13(VAR_82, 0, VAR_72, 0);
 FUNC_13(VAR_82, 0, VAR_73, 0);


 for (VAR_83 = 0; VAR_83 < VAR_78; VAR_83++) {
  FUNC_13(VAR_82, VAR_83, VAR_27, 0);
  FUNC_13(VAR_82, VAR_83, VAR_35, 0);
  FUNC_13(VAR_82, VAR_83, VAR_46, 0xffff);
  FUNC_13(VAR_82, VAR_83, VAR_25, 0xffff);
  FUNC_13(VAR_82, VAR_83, VAR_43, 0);
  FUNC_13(VAR_82, VAR_83, VAR_24, 0);
  FUNC_13(VAR_82, VAR_83, VAR_23, 0);

  FUNC_13(VAR_82, VAR_83, VAR_42, 0);
  FUNC_13(VAR_82, VAR_83, VAR_28, 0x10);
  FUNC_13(VAR_82, VAR_83, VAR_22, 0);
  FUNC_13(VAR_82, VAR_83, VAR_47, 0);
  FUNC_13(VAR_82, VAR_83, VAR_48, 0);
  FUNC_13(VAR_82, VAR_83, VAR_33, 0xd01c0000);

  FUNC_13(VAR_82, VAR_83, VAR_20, 0);
  FUNC_13(VAR_82, VAR_83, VAR_26, 0);
  FUNC_13(VAR_82, VAR_83, VAR_34, 0xffff);
  FUNC_13(VAR_82, VAR_83, VAR_41, 0);
  FUNC_13(VAR_82, VAR_83, VAR_32, 0);
  FUNC_13(VAR_82, VAR_83, VAR_45, 24);
  FUNC_13(VAR_82, VAR_83, VAR_31, 24);
  FUNC_13(VAR_82, VAR_83, VAR_44, 0);


  FUNC_13(VAR_82, VAR_83, VAR_37, 0);
  FUNC_13(VAR_82, VAR_83, VAR_36, 0);
  FUNC_13(VAR_82, VAR_83, VAR_21, 0);
  FUNC_13(VAR_82, VAR_83, VAR_30, 0);
  FUNC_13(VAR_82, VAR_83, VAR_29, 0);

  if ((VAR_82->is_emu10k2) || (VAR_82->is_ca0102) || (VAR_82->is_ca0108)) {
   FUNC_13(VAR_82, VAR_83, 0x4c, 0x0);
   FUNC_13(VAR_82, VAR_83, 0x4d, 0x0);
   FUNC_13(VAR_82, VAR_83, 0x4e, 0x0);
   FUNC_13(VAR_82, VAR_83, 0x4f, 0x0);
   FUNC_13(VAR_82, VAR_83, VAR_13, 0x3f3f3f3f);
   FUNC_13(VAR_82, VAR_83, VAR_14, 0x3f3f3f3f);
   FUNC_13(VAR_82, VAR_83, VAR_15, 0x0);
  }
 }

 FUNC_15(VAR_82, VAR_79);

 if ((VAR_82->is_emu10k2) || (VAR_82->is_ca0102) || (VAR_82->is_ca0108))
  FUNC_13(VAR_82, 0, VAR_19, VAR_18);







 if ((VAR_82->is_ca0102) || (VAR_82->is_ca0108)) {

  VAR_85 = FUNC_10(VAR_82, 0, VAR_19);
  VAR_85 &= 0xfffff1ff;
  VAR_85 |= VAR_16;
  FUNC_13(VAR_82, 0, VAR_19, VAR_85);


  FUNC_12(VAR_82, 0, VAR_5, 0x14);


  if (VAR_82->is_ca0102)
   FUNC_12(VAR_82, 0, VAR_4, 0xFF00FF00);
  else {
   FUNC_12(VAR_82, 0, VAR_2, 0xFF000000);
   FUNC_12(VAR_82, 0, VAR_3, 0xFF000000);

   VAR_84 = FUNC_9(VAR_82, VAR_17, 2);
   FUNC_11(VAR_82, VAR_17, VAR_84 & ~0x8, 2);
  }
 }
 FUNC_7(VAR_82);

 VAR_87 = VAR_76;
 if ((VAR_82->is_emu10k2) || (VAR_82->is_ca0102) || (VAR_82->is_ca0108))
  VAR_87 = VAR_77;
 if (((VAR_82->is_emu10k2) || (VAR_82->is_ca0102) || (VAR_82->is_ca0108)) && (VAR_82->broken_digital)) {
  FUNC_5(VAR_82->dev, "Audigy card initialized in analog mode.\n");
  VAR_87 = VAR_76;
 }
 FUNC_14(VAR_82, VAR_87);

 if (VAR_80) {
  VAR_84 = FUNC_9(VAR_82, VAR_53, 4);
  FUNC_5(VAR_82->dev, "Card Configuration (   0x%08x )\n", VAR_84);
  FUNC_5(VAR_82->dev, "Card Configuration ( & 0xff000000 ) : %s%s%s%s%s%s%s%s\n",
      (VAR_84 & 0x80000000 ? "[Legacy MPIC] " : ""),
      (VAR_84 & 0x40000000 ? "[0x40] " : ""),
      (VAR_84 & 0x20000000 ? "[0x20] " : ""),
      (VAR_84 & 0x10000000 ? "[0x10] " : ""),
      (VAR_84 & 0x08000000 ? "[0x08] " : ""),
      (VAR_84 & 0x04000000 ? "[0x04] " : ""),
      (VAR_84 & 0x02000000 ? "[0x02] " : ""),
      (VAR_84 & 0x01000000 ? "[0x01]" : " "));
  FUNC_5(VAR_82->dev, "Card Configuration ( & 0x00ff0000 ) : %s%s%s%s%s%s%s%s\n",
      (VAR_84 & 0x00800000 ? "[0x80] " : ""),
      (VAR_84 & 0x00400000 ? "[0x40] " : ""),
      (VAR_84 & 0x00200000 ? "[Legacy INT] " : ""),
      (VAR_84 & 0x00100000 ? "[0x10] " : ""),
      (VAR_84 & 0x00080000 ? "[0x08] " : ""),
      (VAR_84 & 0x00040000 ? "[Codec4] " : ""),
      (VAR_84 & 0x00020000 ? "[Codec2] " : ""),
      (VAR_84 & 0x00010000 ? "[I2S Codec]" : " "));
  FUNC_5(VAR_82->dev, "Card Configuration ( & 0x0000ff00 ) : %s%s%s%s%s%s%s%s\n",
      (VAR_84 & 0x00008000 ? "[0x80] " : ""),
      (VAR_84 & 0x00004000 ? "[GPINPUT0] " : ""),
      (VAR_84 & 0x00002000 ? "[GPINPUT1] " : ""),
      (VAR_84 & 0x00001000 ? "[GPOUT0] " : ""),
      (VAR_84 & 0x00000800 ? "[GPOUT1] " : ""),
      (VAR_84 & 0x00000400 ? "[GPOUT2] " : ""),
      (VAR_84 & 0x00000200 ? "[Joystick] " : ""),
      (VAR_84 & 0x00000100 ? "[0x01]" : " "));
  FUNC_5(VAR_82->dev, "Card Configuration ( & 0x000000ff ) : %s%s%s%s%s%s%s%s\n",
      (VAR_84 & 0x00000080 ? "[0x80] " : ""),
      (VAR_84 & 0x00000040 ? "[0x40] " : ""),
      (VAR_84 & 0x00000020 ? "[0x20] " : ""),
      (VAR_84 & 0x00000010 ? "[AUTOMUTE] " : ""),
      (VAR_84 & 0x00000008 ? "[LOCKSOUNDCACHE] " : ""),
      (VAR_84 & 0x00000004 ? "[LOCKTANKCACHE] " : ""),
      (VAR_84 & 0x00000002 ? "[MUTEBUTTONENABLE] " : ""),
      (VAR_84 & 0x00000001 ? "[AUDIOENABLE]" : " "));

  if ((VAR_82->is_emu10k2) || (VAR_82->is_ca0102) || (VAR_82->is_ca0108)) {
   VAR_84 = FUNC_9(VAR_82, VAR_17, 2);
   FUNC_5(VAR_82->dev, "Audigy Card Configuration (    0x%04x )\n", VAR_84);
   FUNC_5(VAR_82->dev, "Audigy Card Configuration (  & 0xff00 )");
   FUNC_16(" : %s%s%s%s%s%s%s%s\n",
       (VAR_84 & 0x8000 ? "[Rear Speakers] " : ""),
       (VAR_84 & 0x4000 ? "[Front Speakers] " : ""),
       (VAR_84 & 0x2000 ? "[0x20] " : ""),
       (VAR_84 & 0x1000 ? "[0x10] " : ""),
       (VAR_84 & 0x0800 ? "[0x08] " : ""),
       (VAR_84 & 0x0400 ? "[0x04] " : ""),
       (VAR_84 & 0x0200 ? "[0x02] " : ""),
       (VAR_84 & 0x0100 ? "[AudigyDrive Phones]" : " "));
   FUNC_5(VAR_82->dev, "Audigy Card Configuration (  & 0x00ff )");
   FUNC_16(" : %s%s%s%s%s%s%s%s\n",
       (VAR_84 & 0x0080 ? "[0x80] " : ""),
       (VAR_84 & 0x0040 ? "[Mute AnalogOut] " : ""),
       (VAR_84 & 0x0020 ? "[0x20] " : ""),
       (VAR_84 & 0x0010 ? "[0x10] " : ""),
       (VAR_84 & 0x0008 ? "[0x08] " : ""),
       (VAR_84 & 0x0004 ? "[GPOUT0] " : ""),
       (VAR_84 & 0x0002 ? "[GPOUT1] " : ""),
       (VAR_84 & 0x0001 ? "[GPOUT2]" : " "));
  }
 }
 return (0);
}
