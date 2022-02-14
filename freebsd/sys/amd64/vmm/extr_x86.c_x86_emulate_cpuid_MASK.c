
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct xsave_limits {unsigned int xcr0_allowed; unsigned int xsave_max_size; int xsave_enabled; } ;
struct vm {int dummy; } ;
typedef enum x2apic_state { ____Placeholder_x2apic_state } x2apic_state ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;


 int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 unsigned int VAR_43 ;
 unsigned int VAR_44 ;
 unsigned int VAR_45 ;
 unsigned int VAR_46 ;
 unsigned int VAR_47 ;
 unsigned int VAR_48 ;
 unsigned int VAR_49 ;
 unsigned int VAR_50 ;
 unsigned int VAR_51 ;
 int FUNC_0 (int ) ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 unsigned int VAR_55 ;
 int VAR_56 ;
 void* FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct vm*,int,char*,int,int) ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,unsigned int*,int) ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int FUNC_5 (int,int,unsigned int*) ;
 int VAR_65 ;
 int FUNC_6 (int,unsigned int*) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (char*,int) ;
 int VAR_66 ;
 int VAR_67 ;
 int FUNC_9 (struct vm*,int,int ,int*) ;
 int FUNC_10 (struct vm*,int,int ,int*) ;
 int FUNC_11 (struct vm*,int*,int*,int*,int*) ;
 int FUNC_12 (struct vm*,int,int*) ;
 struct xsave_limits* FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;

int
FUNC_16(struct vm *VAR_68, int VAR_69,
    uint32_t *VAR_70, uint32_t *VAR_71, uint32_t *VAR_72, uint32_t *VAR_73)
{
 const struct xsave_limits *VAR_74;
 uint64_t VAR_75;
 int VAR_76, VAR_77, VAR_78, VAR_79, VAR_80;
 unsigned int VAR_81, VAR_82[4], VAR_83;
 enum x2apic_state VAR_84;
 uint16_t VAR_85, VAR_86, VAR_87, VAR_88;

 FUNC_2(VAR_68, VAR_69, "cpuid %#x,%#x", *VAR_70, *VAR_72);





 if (VAR_62 != 0 && *VAR_70 >= 0x80000000) {
  if (*VAR_70 > VAR_62)
   *VAR_70 = VAR_62;
 } else if (*VAR_70 >= 0x40000000) {
  if (*VAR_70 > VAR_54)
   *VAR_70 = VAR_54;
 } else if (*VAR_70 > VAR_63) {
  *VAR_70 = VAR_63;
 }

 VAR_81 = *VAR_70;






 switch (VAR_81) {



  case 147:
  case 145:
  case 144:
  case 137:
  case 135:
  case 134:
  case 133:
  case 132:
   FUNC_5(*VAR_70, *VAR_72, VAR_82);
   break;
  case 130:
   FUNC_5(*VAR_70, *VAR_72, VAR_82);
   if (FUNC_14()) {





    VAR_82[1] &= (VAR_0 | VAR_1 |
        VAR_2);

    FUNC_11(VAR_68, &VAR_87, &VAR_85, &VAR_88,
        &VAR_86);
    VAR_79 = FUNC_1(0xF, FUNC_7(VAR_88 * VAR_85));
    if (VAR_79 < 0x4)
     VAR_79 = 0;
    VAR_83 = FUNC_1(0xFF, VAR_88 * VAR_85 - 1);
    VAR_82[2] = (VAR_79 << VAR_11) | VAR_83;
   }
   break;

  case 136:
   FUNC_5(*VAR_70, *VAR_72, VAR_82);




   VAR_82[2] &= ~VAR_10;





   VAR_82[2] &= ~VAR_7;
   VAR_82[2] &= ~VAR_8;
   VAR_82[2] &= ~VAR_9;




   VAR_82[2] &= ~VAR_3;


   VAR_82[2] &= ~VAR_5;


   VAR_82[2] &= ~VAR_6;


   VAR_82[2] &= ~VAR_4;





   VAR_82[3] &= ~VAR_12;
   break;

  case 131:
   VAR_82[0] = 0;
   VAR_82[1] = 0;
   VAR_82[2] = 0;
   VAR_82[3] = 0;
   if (VAR_67 && VAR_66)
    VAR_82[3] |= VAR_13;
   break;

  case 129:

   if (!FUNC_14())
    goto default_leaf;






   FUNC_11(VAR_68, &VAR_87, &VAR_85, &VAR_88,
       &VAR_86);
   switch (*VAR_72) {
   case 0:
    VAR_83 = VAR_88;
    VAR_78 = 1;
    VAR_81 = 1;
    break;
   case 1:
    VAR_83 = VAR_88;
    VAR_78 = 2;
    VAR_81 = 3;
    break;
   case 2:
    VAR_83 = VAR_88 * VAR_85;
    VAR_78 = 3;
    VAR_81 = 3;
    break;
   default:
    VAR_83 = 0;
    VAR_78 = 0;
    VAR_81 = 0;
    break;
   }

   VAR_83 = FUNC_1(0xfff, VAR_83 - 1);
   VAR_82[0] = (VAR_83 << 14) | (1 << 8) |
       (VAR_78 << 5) | VAR_81;
   VAR_82[1] = (VAR_81 > 0) ? (VAR_14 - 1) : 0;
   VAR_82[2] = 0;
   VAR_82[3] = 0;
   break;

  case 128:

   if (!FUNC_14() || FUNC_0(VAR_64) < 0x16)
    goto default_leaf;

   FUNC_11(VAR_68, &VAR_87, &VAR_85, &VAR_88,
       &VAR_86);
   VAR_82[0] = VAR_69;
   VAR_88 = FUNC_1(0xFF, VAR_88 - 1);
   VAR_82[1] = (VAR_88 << 8) |
       (VAR_69 >> FUNC_7(VAR_88 + 1));




   VAR_82[2] = 0;
   VAR_82[3] = 0;
   break;

  case 146:
   FUNC_6(1, VAR_82);

   VAR_76 = FUNC_12(VAR_68, VAR_69, &VAR_84);
   if (VAR_76) {
    FUNC_8("x86_emulate_cpuid: error %d "
          "fetching x2apic state", VAR_76);
   }




   VAR_82[1] &= ~(VAR_32);
   VAR_82[1] |= (VAR_69 << VAR_26);





   VAR_82[2] &= ~(VAR_23 | VAR_15 | VAR_21);
   VAR_82[2] &= ~(VAR_20);

   VAR_82[2] |= VAR_16;

   if (VAR_84 != VAR_59)
    VAR_82[2] |= VAR_24;
   else
    VAR_82[2] &= ~VAR_24;





   if (!(VAR_82[2] & VAR_18))
    VAR_82[2] &= ~VAR_25;






   VAR_82[2] &= ~VAR_18;
   if (VAR_82[2] & VAR_25) {
    VAR_76 = FUNC_10(VAR_68, VAR_69,
        VAR_58, &VAR_75);
    if (VAR_76)
     FUNC_8("x86_emulate_cpuid: error %d "
           "fetching %%cr4", VAR_76);
    if (VAR_75 & VAR_56)
     VAR_82[2] |= VAR_18;
   }





   VAR_82[2] &= ~VAR_17;




   VAR_82[2] &= ~VAR_19;




   VAR_82[2] &= ~VAR_22;




   VAR_82[3] &= ~(VAR_27 | VAR_51);




   VAR_82[3] &= ~VAR_28;







   VAR_82[3] |= (VAR_33 | VAR_34 | VAR_35);

   FUNC_11(VAR_68, &VAR_87, &VAR_85, &VAR_88,
       &VAR_86);
   VAR_83 = VAR_88 * VAR_85;
   VAR_82[1] &= ~VAR_31;
   VAR_82[1] |= (VAR_83 & 0xff) << 16;
   VAR_82[3] |= VAR_30;
   break;

  case 143:
   FUNC_5(*VAR_70, *VAR_72, VAR_82);

   if (VAR_82[0] || VAR_82[1] || VAR_82[2] || VAR_82[3]) {
    FUNC_11(VAR_68, &VAR_87, &VAR_85, &VAR_88,
        &VAR_86);
    VAR_82[0] &= 0x3ff;
    VAR_82[0] |= (VAR_85 - 1) << 26;







    VAR_83 = VAR_88;
    VAR_78 = (VAR_82[0] >> 5) & 0x7;
    if (VAR_78 >= 3)
     VAR_83 *= VAR_85;
    VAR_82[0] |= (VAR_83 - 1) << 14;
   }
   break;

  case 141:
   VAR_82[0] = 0;
   VAR_82[1] = 0;
   VAR_82[2] = 0;
   VAR_82[3] = 0;


   if (*VAR_72 == 0) {
    FUNC_5(*VAR_70, *VAR_72, VAR_82);


    VAR_82[0] = 0;




    VAR_82[1] &= (VAR_45 |
        VAR_42 | VAR_46 |
        VAR_37 | VAR_43 |
        VAR_44 | VAR_49 |
        VAR_40 |
        VAR_48 |
        VAR_41 |
        VAR_39 |
        VAR_38 | VAR_50);
    VAR_82[2] = 0;
    VAR_82[3] &= VAR_36;


    VAR_76 = FUNC_9(VAR_68, VAR_69,
        VAR_57, &VAR_77);
    if (VAR_76 == 0 && VAR_77)
     VAR_82[1] |= VAR_47;
   }
   break;

  case 142:
   VAR_82[0] = VAR_55;
   VAR_82[1] = 0;
   VAR_82[2] = 0;
   VAR_82[3] = 0;
   break;

  case 140:




   VAR_82[0] = 0;
   VAR_82[1] = 0;
   VAR_82[2] = 0;
   VAR_82[3] = 0;
   break;

  case 139:



   if (FUNC_15()) {
    FUNC_11(VAR_68, &VAR_87, &VAR_85, &VAR_88,
        &VAR_86);
    if (*VAR_72 == 0) {
     VAR_83 = VAR_88;
     VAR_79 = FUNC_7(VAR_83);
     VAR_78 = VAR_53;
     VAR_80 = VAR_69;
    }

    if (*VAR_72 == 1) {
     VAR_83 = VAR_88 * VAR_85;
     VAR_79 = FUNC_7(VAR_83);
     VAR_78 = VAR_52;
     VAR_80 = VAR_69;
    }

    if (!VAR_65 || *VAR_72 >= 2) {
     VAR_79 = 0;
     VAR_83 = 0;
     VAR_78 = 0;
     VAR_80 = 0;
    }

    VAR_82[0] = VAR_79 & 0x1f;
    VAR_82[1] = VAR_83 & 0xffff;
    VAR_82[2] = (VAR_78 << 8) | (*VAR_72 & 0xff);
    VAR_82[3] = VAR_80;
   } else {
    VAR_82[0] = 0;
    VAR_82[1] = 0;
    VAR_82[2] = 0;
    VAR_82[3] = 0;
   }
   break;

  case 138:
   VAR_74 = FUNC_13();
   if (!VAR_74->xsave_enabled) {
    VAR_82[0] = 0;
    VAR_82[1] = 0;
    VAR_82[2] = 0;
    VAR_82[3] = 0;
    break;
   }

   FUNC_5(*VAR_70, *VAR_72, VAR_82);
   switch (*VAR_72) {
   case 0:
    VAR_82[0] &= VAR_74->xcr0_allowed;
    VAR_82[2] = VAR_74->xsave_max_size;
    VAR_82[3] &= (VAR_74->xcr0_allowed >> 32);
    break;
   case 1:

    VAR_82[0] &= VAR_29;
    VAR_82[1] = 0;
    VAR_82[2] = 0;
    VAR_82[3] = 0;
    break;
   default:





    if (!(VAR_74->xcr0_allowed & (1ul << *VAR_72))) {
     VAR_82[0] = 0;
     VAR_82[1] = 0;
     VAR_82[2] = 0;
     VAR_82[3] = 0;
    }
    break;
   }
   break;

  case 0x40000000:
   VAR_82[0] = VAR_54;
   FUNC_4(VAR_60, &VAR_82[1], 4);
   FUNC_4(VAR_60 + 4, &VAR_82[2], 4);
   FUNC_4(VAR_60 + 8, &VAR_82[3], 4);
   break;

  default:
default_leaf:





   FUNC_3(&VAR_61, 1);
   FUNC_5(*VAR_70, *VAR_72, VAR_82);
   break;
 }

 *VAR_70 = VAR_82[0];
 *VAR_71 = VAR_82[1];
 *VAR_72 = VAR_82[2];
 *VAR_73 = VAR_82[3];

 return (1);
}
