
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_opcode {char* args; unsigned long mask; unsigned long match; int name; } ;


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
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,unsigned long,char*,...) ;

__attribute__((used)) static int
FUNC_3 (const struct mips_opcode *VAR_96)
{
  const char *VAR_97 = VAR_96->args;
  char VAR_98;
  unsigned long VAR_99 = VAR_96->mask;

  if ((VAR_99 & VAR_96->match) != VAR_96->match)
    {
      FUNC_2 (FUNC_1("internal: bad mips opcode (mask error): %s %s"),
       VAR_96->name, VAR_96->args);
      return 0;
    }

  while (*VAR_97)
    switch (VAR_98 = *VAR_97++)
      {
      case ',': break;
      case '(': break;
      case ')': break;
      case '^': (VAR_99 |= ((VAR_2) << (VAR_50))); break;
      case '~': (VAR_99 |= ((VAR_2) << (VAR_50))); break;
      case '+':
     switch (VAR_98 = *VAR_97++)
   {
   case '1': (VAR_99 |= ((VAR_40) << (VAR_88))); break;
   case '2': (VAR_99 |= ((VAR_41) << (VAR_89))); break;
   case '3': (VAR_99 |= ((VAR_42) << (VAR_90))); break;
   case '4': (VAR_99 |= ((VAR_43) << (VAR_91))); break;
   case 'A': (VAR_99 |= ((VAR_38) << (VAR_86))); break;
   case 'B': (VAR_99 |= ((VAR_24) << (VAR_72))); break;
   case 'C': (VAR_99 |= ((VAR_16) << (VAR_64))); break;
   case 'D': (VAR_99 |= ((VAR_31) << (VAR_79)));
      (VAR_99 |= ((VAR_37) << (VAR_85))); break;
   case 'E': (VAR_99 |= ((VAR_38) << (VAR_86))); break;
   case 'F': (VAR_99 |= ((VAR_24) << (VAR_72))); break;
   case 'G': (VAR_99 |= ((VAR_16) << (VAR_64))); break;
   case 'H': (VAR_99 |= ((VAR_16) << (VAR_64))); break;
   case 'I': break;
   case 't': (VAR_99 |= ((VAR_34) << (VAR_82))); break;
   case 'T': (VAR_99 |= ((VAR_34) << (VAR_82)));
      (VAR_99 |= ((VAR_37) << (VAR_85))); break;
   default:
     FUNC_2 (FUNC_1("internal: bad mips opcode (unknown extension operand type `+%c'): %s %s"),
      VAR_98, VAR_96->name, VAR_96->args);
     return 0;
   }
 break;
      case '<': (VAR_99 |= ((VAR_38) << (VAR_86))); break;
      case '>': (VAR_99 |= ((VAR_38) << (VAR_86))); break;
      case 'A': break;
      case 'B': (VAR_99 |= ((VAR_9) << (VAR_57))); break;
      case 'C': (VAR_99 |= ((VAR_10) << (VAR_58))); break;
      case 'D': (VAR_99 |= ((VAR_17) << (VAR_65))); break;
      case 'E': (VAR_99 |= ((VAR_34) << (VAR_82))); break;
      case 'F': break;
      case 'G': (VAR_99 |= ((VAR_31) << (VAR_79))); break;
      case 'H': (VAR_99 |= ((VAR_37) << (VAR_85))); break;
      case 'I': break;
      case 'J': (VAR_99 |= ((VAR_7) << (VAR_55))); break;
      case 'K': (VAR_99 |= ((VAR_31) << (VAR_79))); break;
      case 'L': break;
      case 'M': (VAR_99 |= ((VAR_5) << (VAR_53))); break;
      case 'N': (VAR_99 |= ((VAR_1) << (VAR_49))); break;
      case 'O': (VAR_99 |= ((VAR_0) << (VAR_48))); break;
      case 'Q': (VAR_99 |= ((VAR_46) << (VAR_94)));
  (VAR_99 |= ((VAR_20) << (VAR_68))); break;
      case 'R': (VAR_99 |= ((VAR_18) << (VAR_66))); break;
      case 'S': (VAR_99 |= ((VAR_19) << (VAR_67))); break;
      case 'T': (VAR_99 |= ((VAR_20) << (VAR_68))); break;
      case 'V': (VAR_99 |= ((VAR_19) << (VAR_67))); break;
      case 'W': (VAR_99 |= ((VAR_20) << (VAR_68))); break;
      case 'X': (VAR_99 |= ((VAR_17) << (VAR_65))); break;
      case 'Y': (VAR_99 |= ((VAR_19) << (VAR_67))); break;
      case 'Z': (VAR_99 |= ((VAR_20) << (VAR_68))); break;
      case 'a': (VAR_99 |= ((VAR_39) << (VAR_87))); break;
      case 'b': (VAR_99 |= ((VAR_33) << (VAR_81))); break;
      case 'c': (VAR_99 |= ((VAR_6) << (VAR_54))); break;
      case 'd': (VAR_99 |= ((VAR_31) << (VAR_79))); break;
      case 'f': break;
      case 'h': (VAR_99 |= ((VAR_30) << (VAR_78))); break;
      case 'i': (VAR_99 |= ((VAR_23) << (VAR_71))); break;
      case 'j': (VAR_99 |= ((VAR_11) << (VAR_59))); break;
      case 'k': (VAR_99 |= ((VAR_4) << (VAR_52))); break;
      case 'l': break;
      case 'o': (VAR_99 |= ((VAR_11) << (VAR_59))); break;
      case 'p': (VAR_99 |= ((VAR_11) << (VAR_59))); break;
      case 'q': (VAR_99 |= ((VAR_8) << (VAR_56))); break;
      case 'r': (VAR_99 |= ((VAR_33) << (VAR_81))); break;
      case 's': (VAR_99 |= ((VAR_33) << (VAR_81))); break;
      case 't': (VAR_99 |= ((VAR_34) << (VAR_82))); break;
      case 'u': (VAR_99 |= ((VAR_23) << (VAR_71))); break;
      case 'v': (VAR_99 |= ((VAR_33) << (VAR_81))); break;
      case 'w': (VAR_99 |= ((VAR_34) << (VAR_82))); break;
      case 'x': break;
      case 'y': (VAR_99 |= ((VAR_8) << (VAR_56))); break;
      case 'z': break;
      case 'P': (VAR_99 |= ((VAR_29) << (VAR_77))); break;
      case 'U': (VAR_99 |= ((VAR_31) << (VAR_79)));
         (VAR_99 |= ((VAR_34) << (VAR_82))); break;
      case 'e': (VAR_99 |= ((VAR_45) << (VAR_93))); break;
      case '%': (VAR_99 |= ((VAR_44) << (VAR_92))); break;
      case '[': break;
      case ']': break;
      case '2': (VAR_99 |= ((VAR_3) << (VAR_51))); break;
      case '3': (VAR_99 |= ((VAR_35) << (VAR_83))); break;
      case '4': (VAR_99 |= ((VAR_36) << (VAR_84))); break;
      case '5': (VAR_99 |= ((VAR_22) << (VAR_70))); break;
      case '6': (VAR_99 |= ((VAR_33) << (VAR_81))); break;
      case '7': (VAR_99 |= ((VAR_12) << (VAR_60))); break;
      case '8': (VAR_99 |= ((VAR_47) << (VAR_95))); break;
      case '9': (VAR_99 |= ((VAR_13) << (VAR_61)));break;
      case '0': (VAR_99 |= ((VAR_14) << (VAR_62))); break;
      case '\'': (VAR_99 |= ((VAR_32) << (VAR_80))); break;
      case ':': (VAR_99 |= ((VAR_15) << (VAR_63)));break;
      case '@': (VAR_99 |= ((VAR_21) << (VAR_69))); break;
      case '!': (VAR_99 |= ((VAR_28) << (VAR_76))); break;
      case '$': (VAR_99 |= ((VAR_27) << (VAR_75))); break;
      case '*': (VAR_99 |= ((VAR_26) << (VAR_74))); break;
      case '&': (VAR_99 |= ((VAR_25) << (VAR_73))); break;
      case 'g': (VAR_99 |= ((VAR_31) << (VAR_79))); break;
      default:
 FUNC_2 (FUNC_1("internal: bad mips opcode (unknown operand type `%c'): %s %s"),
  VAR_98, VAR_96->name, VAR_96->args);
 return 0;
      }

  if (VAR_99 != 0xffffffff)
    {
      FUNC_2 (FUNC_1("internal: bad mips opcode (bits 0x%lx undefined): %s %s"),
       ~VAR_99 & 0xffffffff, VAR_96->name, VAR_96->args);
      return 0;
    }
  return 1;
}
