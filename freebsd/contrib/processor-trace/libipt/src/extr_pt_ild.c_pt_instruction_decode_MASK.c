
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct pt_insn_ext {void* iclass; int variant; } ;
struct pt_insn {void* iclass; } ;
struct TYPE_3__ {int osz; int f3; int rex_r; scalar_t__ vex; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct pt_ild {scalar_t__ nominal_opcode; scalar_t__ map; TYPE_2__ u; int modrm_byte; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_36 ;
 int FUNC_1 (struct pt_ild const*) ;
 int FUNC_2 (struct pt_ild const*) ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 void* VAR_41 ;
 void* VAR_42 ;
 void* VAR_43 ;
 void* VAR_44 ;
 void* VAR_45 ;
 int FUNC_3 (struct pt_insn_ext*,struct pt_ild const*) ;

__attribute__((used)) static int FUNC_4(struct pt_insn *VAR_46, struct pt_insn_ext *VAR_47,
     const struct pt_ild *VAR_48)
{
 uint8_t VAR_49, VAR_50;

 if (!VAR_47 || !VAR_48)
  return -VAR_36;

 VAR_47->iclass = VAR_8;
 FUNC_0(&VAR_47->variant, 0, sizeof(VAR_47->variant));

 VAR_46->iclass = VAR_43;

 VAR_49 = VAR_48->nominal_opcode;
 VAR_50 = VAR_48->map;

 if (VAR_50 > VAR_35)
  return 0;
 if (VAR_48->u.s.vex)
  return 0;


 if (VAR_49 >= 0x70 && VAR_49 <= 0x7F) {
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_38;
   VAR_47->iclass = VAR_10;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;
 }
 if (VAR_49 >= 0x80 && VAR_49 <= 0x8F) {
  if (VAR_50 == VAR_35) {
   VAR_46->iclass = VAR_38;
   VAR_47->iclass = VAR_10;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;
 }

 switch (VAR_48->nominal_opcode) {
 case 0x9A:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_39;
   VAR_47->iclass = VAR_0;
  }
  return 0;

 case 0xFF:
  if (VAR_50 == VAR_34) {
   uint8_t VAR_51 = FUNC_2(VAR_48);

   if (VAR_51 == 2) {
    VAR_46->iclass = VAR_37;
    VAR_47->iclass = VAR_2;
   } else if (VAR_51 == 3) {
    VAR_46->iclass = VAR_39;
    VAR_47->iclass = VAR_3;
   } else if (VAR_51 == 4) {
    VAR_46->iclass = VAR_42;
    VAR_47->iclass = VAR_14;
   } else if (VAR_51 == 5) {
    VAR_46->iclass = VAR_40;
    VAR_47->iclass = VAR_15;
   }
  }
  return 0;

 case 0xE8:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_37;
   VAR_47->iclass = VAR_1;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;

 case 0xCD:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_39;
   VAR_47->iclass = VAR_4;
  }

  return 0;

 case 0xCC:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_39;
   VAR_47->iclass = VAR_6;
  }

  return 0;

 case 0xCE:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_39;
   VAR_47->iclass = VAR_7;
  }

  return 0;

 case 0xF1:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_39;
   VAR_47->iclass = VAR_5;
  }

  return 0;

 case 0xCF:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_41;
   VAR_47->iclass = VAR_9;
  }
  return 0;

 case 0xE9:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_42;
   VAR_47->iclass = VAR_11;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;

 case 0xEA:
  if (VAR_50 == VAR_34) {

   VAR_46->iclass = VAR_40;
   VAR_47->iclass = VAR_12;
  }
  return 0;

 case 0xEB:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_42;
   VAR_47->iclass = VAR_13;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;

 case 0xE3:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_38;
   VAR_47->iclass = VAR_16;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;

 case 0xE0:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_38;
   VAR_47->iclass = VAR_19;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;

 case 0xE1:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_38;
   VAR_47->iclass = VAR_18;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;

 case 0xE2:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_38;
   VAR_47->iclass = VAR_17;

   return FUNC_3(VAR_47, VAR_48);
  }
  return 0;

 case 0x22:
  if (VAR_50 == VAR_35)
   if (FUNC_2(VAR_48) == 3)
    if (!VAR_48->u.s.rex_r)
     VAR_47->iclass = VAR_20;

  return 0;

 case 0xC3:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_45;
   VAR_47->iclass = VAR_23;
  }
  return 0;

 case 0xC2:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_45;
   VAR_47->iclass = VAR_22;
  }
  return 0;

 case 0xCB:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_41;
   VAR_47->iclass = VAR_25;
  }
  return 0;

 case 0xCA:
  if (VAR_50 == VAR_34) {
   VAR_46->iclass = VAR_41;
   VAR_47->iclass = VAR_24;
  }
  return 0;

 case 0x05:
  if (VAR_50 == VAR_35) {
   VAR_46->iclass = VAR_39;
   VAR_47->iclass = VAR_26;
  }
  return 0;

 case 0x34:
  if (VAR_50 == VAR_35) {
   VAR_46->iclass = VAR_39;
   VAR_47->iclass = VAR_27;
  }
  return 0;

 case 0x35:
  if (VAR_50 == VAR_35) {
   VAR_46->iclass = VAR_41;
   VAR_47->iclass = VAR_28;
  }
  return 0;

 case 0x07:
  if (VAR_50 == VAR_35) {
   VAR_46->iclass = VAR_41;
   VAR_47->iclass = VAR_29;
  }
  return 0;

 case 0x01:
  if (VAR_50 == VAR_35) {
   switch (VAR_48->modrm_byte) {
   case 0xc1:
    VAR_46->iclass = VAR_39;
    VAR_47->iclass = VAR_30;
    break;

   case 0xc2:
    VAR_46->iclass = VAR_41;
    VAR_47->iclass = VAR_31;
    break;

   case 0xc3:
    VAR_46->iclass = VAR_41;
    VAR_47->iclass = VAR_33;
    break;

   default:
    break;
   }
  }
  return 0;

 case 0xc7:
  if (VAR_50 == VAR_35 &&
      FUNC_1(VAR_48) != 3 &&
      FUNC_2(VAR_48) == 6)
   VAR_47->iclass = VAR_32;

  return 0;

 case 0xae:
  if (VAR_50 == VAR_35 && VAR_48->u.s.f3 && !VAR_48->u.s.osz &&
      FUNC_2(VAR_48) == 4) {
   VAR_46->iclass = VAR_44;
   VAR_47->iclass = VAR_21;
  }
  return 0;

 default:
  return 0;
 }
}
