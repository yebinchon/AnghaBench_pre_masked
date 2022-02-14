
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int chip_id; int chip_rev; } ;
struct TYPE_3__ {int board_flags; int board_type; } ;
struct bhnd_pmu_softc {int caps; int chipc_dev; TYPE_2__ cid; TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bhnd_pmu_softc*,char*,int) ;
 int FUNC_4 (struct bhnd_pmu_softc*,char*,int ,int) ;
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
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (struct bhnd_pmu_softc*) ;

__attribute__((used)) static int
FUNC_8(struct bhnd_pmu_softc *VAR_45, uint32_t *VAR_46, uint32_t *VAR_47)
{
 uint32_t VAR_48, VAR_49;
 uint32_t VAR_50, VAR_51;
 uint32_t VAR_52;
 uint8_t VAR_53;
 int VAR_54;

 VAR_48 = 0;
 VAR_49 = 0;


 VAR_53 = FUNC_1(VAR_45->caps, VAR_4);


 switch (VAR_45->cid.chip_id) {
 case 139:

  if (!FUNC_7(VAR_45))
   VAR_49 |= FUNC_2(VAR_24);

  VAR_50 = FUNC_0(VAR_45->chipc_dev);
  if (FUNC_1(VAR_50, VAR_5))
   VAR_49 |= FUNC_2(VAR_25);


  VAR_51 = FUNC_1(VAR_50, VAR_6);
  if (VAR_51 != VAR_8)
   VAR_49 |= FUNC_2(VAR_27);


  if (VAR_45->board.board_flags & VAR_1) {
   switch (VAR_45->board.board_type) {
   case 157:
   case 158:
    VAR_49 |= FUNC_2(
        VAR_26);
    break;
   }
  }


  VAR_48 = ~(~0 << VAR_53);
  break;

 case 154:

  VAR_49 = 0xcbb;





  break;

 case 151:
 case 150:
 case 145:
 case 133:
  if (VAR_45->cid.chip_rev >= 2)
   break;


  VAR_49 = FUNC_2(VAR_21) |
      FUNC_2(VAR_23) |
      FUNC_2(VAR_16);

  if (FUNC_5(VAR_45->chipc_dev) == VAR_0) {
   VAR_49 |=
       FUNC_2(VAR_22) |
       FUNC_2(VAR_18) |
       FUNC_2(VAR_20) |
       FUNC_2(VAR_19) |
       FUNC_2(VAR_17);
   VAR_48 = 0x1ff;
  }
  break;

 case 149:
 case 156:
 case 155:
 case 148:
 case 147:
 case 131:
 case 146:
 case 132:
 case 143:
 case 142:
 case 140:
 case 144:
 case 141:
 case 135:
 case 130:
 case 128:

  break;

 case 138:
  VAR_49 =
      FUNC_2(VAR_28) |
      FUNC_2(VAR_29) |
      FUNC_2(VAR_30);
  VAR_48 = 0xfffffff;
  break;

 case 129:

  VAR_48 = 0xfffffff;
  break;

 case 137:

  if (VAR_45->cid.chip_rev >= 0x2) {
   VAR_49 =
       FUNC_2(VAR_31) |
       FUNC_2(VAR_33) |
       FUNC_2(VAR_32);
  } else {
   VAR_49 =
       FUNC_2(VAR_31) |
       FUNC_2(VAR_32);
  }


  VAR_50 = FUNC_0(VAR_45->chipc_dev);
  VAR_51 = FUNC_1(VAR_50, VAR_7);
  if (VAR_51 != VAR_8)
   VAR_49 |= FUNC_2(VAR_34);


  VAR_48 = 0x3ff63e;
  break;

 case 152:

  VAR_49 = FUNC_2(VAR_14) |
      FUNC_2(VAR_15);


  VAR_48 = ~(~0 << VAR_53);
  break;

 case 134:

  VAR_49 =
      FUNC_2(VAR_40) |
      FUNC_2(VAR_41) |
      FUNC_2(VAR_43) |
      FUNC_2(VAR_44) |
      FUNC_2(VAR_42);

  VAR_48 = 0x1ffffff;
  break;

 case 136:

  VAR_49 =
      FUNC_2(VAR_35) | FUNC_2(VAR_36)
      | FUNC_2(VAR_37) |
      FUNC_2(VAR_38) | FUNC_2(VAR_39);

  VAR_48 = 0xfffffff;
  break;

 case 153:
  VAR_49 = FUNC_2(VAR_12) |
      FUNC_2(VAR_13) |
      FUNC_2(VAR_10) |
      FUNC_2(VAR_11);
  VAR_48 = 0xffff;
  break;
 default:
  break;
 }


 VAR_54 = FUNC_6(VAR_45->chipc_dev, VAR_3, &VAR_52);
 if (VAR_54 && VAR_54 != VAR_9) {
  FUNC_4(VAR_45, "NVRAM error reading %s: %d\n",
      VAR_3, VAR_54);
  return (VAR_54);
 } else if (!VAR_54) {
  FUNC_3(VAR_45, "Applying rmin=%#x to min_mask\n", VAR_52);
  VAR_49 = VAR_52;
 }


 VAR_54 = FUNC_6(VAR_45->chipc_dev, VAR_2, &VAR_52);
 if (VAR_54 && VAR_54 != VAR_9) {
  FUNC_4(VAR_45, "NVRAM error reading %s: %d\n",
      VAR_2, VAR_54);
  return (VAR_54);
 } else if (!VAR_54) {
  FUNC_3(VAR_45, "Applying rmax=%#x to max_mask\n", VAR_52);
  VAR_49 = VAR_52;
 }

 if (VAR_46 != ((void*)0))
  *VAR_46 = VAR_49;

 if (VAR_47 != ((void*)0))
  *VAR_47 = VAR_48;

 return (0);
}
