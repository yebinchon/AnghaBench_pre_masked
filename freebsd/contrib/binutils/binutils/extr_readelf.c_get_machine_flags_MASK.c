
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
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
 unsigned int VAR_26 ;
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
 unsigned int VAR_52 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (unsigned int,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *
FUNC_4 (unsigned VAR_53, unsigned VAR_54)
{
  static char VAR_55[1024];

  VAR_55[0] = '\0';

  if (VAR_53)
    {
      switch (VAR_54)
 {
 default:
   break;

 case 169:
   FUNC_1 (VAR_53, VAR_55);
   break;

 case 168:
   switch (VAR_53 & VAR_0)
     {
     case 201:
       break;

     default:
       FUNC_2 (VAR_55, ", fr???");
       break;

     case 207:
       FUNC_2 (VAR_55, ", fr300");
       break;

     case 206:
       FUNC_2 (VAR_55, ", fr400");
       break;
     case 205:
       FUNC_2 (VAR_55, ", fr405");
       break;

     case 204:
       FUNC_2 (VAR_55, ", fr450");
       break;

     case 203:
       FUNC_2 (VAR_55, ", fr500");
       break;
     case 202:
       FUNC_2 (VAR_55, ", fr550");
       break;

     case 200:
       FUNC_2 (VAR_55, ", simple");
       break;
     case 199:
       FUNC_2 (VAR_55, ", tomcat");
       break;
     }
   break;

 case 170:
   if ((VAR_53 & VAR_7) == VAR_13)
     FUNC_2 (VAR_55, ", m68000");
   else if ((VAR_53 & VAR_7) == VAR_11)
     FUNC_2 (VAR_55, ", cpu32");
   else if ((VAR_53 & VAR_7) == VAR_12)
     FUNC_2 (VAR_55, ", fido_a");
   else
     {
       char const *VAR_56 = FUNC_0("unknown");
       char const *VAR_57 = FUNC_0("unknown mac");
       char const *VAR_58 = ((void*)0);

       switch (VAR_53 & VAR_9)
  {
  case 196:
    VAR_56 = "A";
    VAR_58 = ", nodiv";
    break;
  case 197:
    VAR_56 = "A";
    break;
  case 195:
    VAR_56 = "A+";
    break;
  case 193:
    VAR_56 = "B";
    VAR_58 = ", nousp";
    break;
  case 194:
    VAR_56 = "B";
    break;
  }
       FUNC_2 (VAR_55, ", cf, isa ");
       FUNC_2 (VAR_55, VAR_56);
       if (VAR_58)
  FUNC_2 (VAR_55, VAR_58);
       if (VAR_53 & VAR_8)
  FUNC_2 (VAR_55, ", float");
       switch (VAR_53 & VAR_10)
  {
  case 0:
    VAR_57 = ((void*)0);
    break;
  case 192:
    VAR_57 = "mac";
    break;
  case 198:
    VAR_57 = "emac";
    break;
  }
       if (VAR_57)
  {
    FUNC_2 (VAR_55, ", ");
    FUNC_2 (VAR_55, VAR_57);
  }
     }
   break;

 case 158:
   if (VAR_53 & VAR_35)
     FUNC_2 (VAR_55, ", emb");

   if (VAR_53 & VAR_36)
     FUNC_2 (VAR_55, ", relocatable");

   if (VAR_53 & VAR_37)
     FUNC_2 (VAR_55, ", relocatable-lib");
   break;

 case 155:
 case 166:
   switch (VAR_53 & VAR_48)
     {
     case 130:
       FUNC_2 (VAR_55, ", v850e1");
       break;
     case 129:
       FUNC_2 (VAR_55, ", v850e");
       break;
     case 128:
       FUNC_2 (VAR_55, ", v850");
       break;
     default:
       FUNC_2 (VAR_55, ", unknown v850 architecture variant");
       break;
     }
   break;

 case 164:
 case 167:
   if ((VAR_53 & VAR_6) == VAR_52)
     FUNC_2 (VAR_55, ", m32r");
   break;

 case 163:
 case 162:
   if (VAR_53 & VAR_22)
     FUNC_2 (VAR_55, ", noreorder");

   if (VAR_53 & VAR_24)
     FUNC_2 (VAR_55, ", pic");

   if (VAR_53 & VAR_20)
     FUNC_2 (VAR_55, ", cpic");

   if (VAR_53 & VAR_25)
     FUNC_2 (VAR_55, ", ugen_reserved");

   if (VAR_53 & VAR_16)
     FUNC_2 (VAR_55, ", abi2");

   if (VAR_53 & VAR_23)
     FUNC_2 (VAR_55, ", odk first");

   if (VAR_53 & VAR_14)
     FUNC_2 (VAR_55, ", 32bitmode");

   switch ((VAR_53 & VAR_21))
     {
     case 140: FUNC_2 (VAR_55, ", 3900"); break;
     case 139: FUNC_2 (VAR_55, ", 4010"); break;
     case 138: FUNC_2 (VAR_55, ", 4100"); break;
     case 137: FUNC_2 (VAR_55, ", 4111"); break;
     case 136: FUNC_2 (VAR_55, ", 4120"); break;
     case 135: FUNC_2 (VAR_55, ", 4650"); break;
     case 134: FUNC_2 (VAR_55, ", 5400"); break;
     case 133: FUNC_2 (VAR_55, ", 5500"); break;
     case 131: FUNC_2 (VAR_55, ", sb1"); break;
     case 132: FUNC_2 (VAR_55, ", 9000"); break;
     case 0:



       break;
     default: FUNC_2 (VAR_55, ", unknown CPU"); break;
     }

   switch ((VAR_53 & VAR_15))
     {
     case 151: FUNC_2 (VAR_55, ", o32"); break;
     case 150: FUNC_2 (VAR_55, ", o64"); break;
     case 153: FUNC_2 (VAR_55, ", eabi32"); break;
     case 152: FUNC_2 (VAR_55, ", eabi64"); break;
     case 0:




       break;
     default: FUNC_2 (VAR_55, ", unknown ABI"); break;
     }

   if (VAR_53 & VAR_19)
     FUNC_2 (VAR_55, ", mdmx");

   if (VAR_53 & VAR_18)
     FUNC_2 (VAR_55, ", mips16");

   switch ((VAR_53 & VAR_17))
     {
     case 149: FUNC_2 (VAR_55, ", mips1"); break;
     case 148: FUNC_2 (VAR_55, ", mips2"); break;
     case 147: FUNC_2 (VAR_55, ", mips3"); break;
     case 144: FUNC_2 (VAR_55, ", mips4"); break;
     case 143: FUNC_2 (VAR_55, ", mips5"); break;
     case 146: FUNC_2 (VAR_55, ", mips32"); break;
     case 145: FUNC_2 (VAR_55, ", mips32r2"); break;
     case 142: FUNC_2 (VAR_55, ", mips64"); break;
     case 141: FUNC_2 (VAR_55, ", mips64r2"); break;
     default: FUNC_2 (VAR_55, ", unknown ISA"); break;
     }

   break;

 case 157:
   switch ((VAR_53 & VAR_38))
     {
     case 191: FUNC_2 (VAR_55, ", sh1"); break;
     case 190: FUNC_2 (VAR_55, ", sh2"); break;
     case 182: FUNC_2 (VAR_55, ", sh3"); break;
     case 171: FUNC_2 (VAR_55, ", sh-dsp"); break;
     case 180: FUNC_2 (VAR_55, ", sh3-dsp"); break;
     case 176: FUNC_2 (VAR_55, ", sh4al-dsp"); break;
     case 181: FUNC_2 (VAR_55, ", sh3e"); break;
     case 178: FUNC_2 (VAR_55, ", sh4"); break;
     case 172: FUNC_2 (VAR_55, ", sh5"); break;
     case 183: FUNC_2 (VAR_55, ", sh2e"); break;
     case 177: FUNC_2 (VAR_55, ", sh4a"); break;
     case 189: FUNC_2 (VAR_55, ", sh2a"); break;
     case 174: FUNC_2 (VAR_55, ", sh4-nofpu"); break;
     case 175: FUNC_2 (VAR_55, ", sh4a-nofpu"); break;
     case 188: FUNC_2 (VAR_55, ", sh2a-nofpu"); break;
     case 179: FUNC_2 (VAR_55, ", sh3-nommu"); break;
     case 173: FUNC_2 (VAR_55, ", sh4-nommu-nofpu"); break;
     case 184: FUNC_2 (VAR_55, ", sh2a-nofpu-or-sh4-nommu-nofpu"); break;
     case 186: FUNC_2 (VAR_55, ", sh2a-nofpu-or-sh3-nommu"); break;
     case 185: FUNC_2 (VAR_55, ", sh2a-or-sh4"); break;
     case 187: FUNC_2 (VAR_55, ", sh2a-or-sh3e"); break;
     default: FUNC_2 (VAR_55, ", unknown ISA"); break;
     }

   break;

 case 156:
   if (VAR_53 & VAR_43)
     FUNC_2 (VAR_55, ", v8+");

   if (VAR_53 & VAR_46)
     FUNC_2 (VAR_55, ", ultrasparcI");

   if (VAR_53 & VAR_47)
     FUNC_2 (VAR_55, ", ultrasparcIII");

   if (VAR_53 & VAR_44)
     FUNC_2 (VAR_55, ", halr1");

   if (VAR_53 & VAR_45)
     FUNC_2 (VAR_55, ", ledata");

   if ((VAR_53 & VAR_39) == VAR_42)
     FUNC_2 (VAR_55, ", tso");

   if ((VAR_53 & VAR_39) == VAR_40)
     FUNC_2 (VAR_55, ", pso");

   if ((VAR_53 & VAR_39) == VAR_41)
     FUNC_2 (VAR_55, ", rmo");
   break;

 case 161:
   switch (VAR_53 & VAR_26)
     {
     case 210:
       FUNC_3 (VAR_55, ", PA-RISC 1.0");
       break;
     case 209:
       FUNC_3 (VAR_55, ", PA-RISC 1.1");
       break;
     case 208:
       FUNC_3 (VAR_55, ", PA-RISC 2.0");
       break;
     default:
       break;
     }
   if (VAR_53 & VAR_31)
     FUNC_2 (VAR_55, ", trapnil");
   if (VAR_53 & VAR_27)
     FUNC_2 (VAR_55, ", ext");
   if (VAR_53 & VAR_29)
     FUNC_2 (VAR_55, ", lsb");
   if (VAR_53 & VAR_32)
     FUNC_2 (VAR_55, ", wide");
   if (VAR_53 & VAR_30)
     FUNC_2 (VAR_55, ", no kabp");
   if (VAR_53 & VAR_28)
     FUNC_2 (VAR_55, ", lazyswap");
   break;

 case 160:
 case 159:
   if ((VAR_53 & VAR_34) == VAR_34)
     FUNC_2 (VAR_55, ", new calling convention");

   if ((VAR_53 & VAR_33) == VAR_33)
     FUNC_2 (VAR_55, ", gnu calling convention");
   break;

 case 165:
   if ((VAR_53 & VAR_1))
     FUNC_2 (VAR_55, ", 64-bit");
   else
     FUNC_2 (VAR_55, ", 32-bit");
   if ((VAR_53 & VAR_5))
     FUNC_2 (VAR_55, ", reduced fp model");
   if ((VAR_53 & VAR_4))
     FUNC_2 (VAR_55, ", no function descriptors, constant gp");
   else if ((VAR_53 & VAR_3))
     FUNC_2 (VAR_55, ", constant gp");
   if ((VAR_53 & VAR_2))
     FUNC_2 (VAR_55, ", absolute");
   break;

 case 154:
   if ((VAR_53 & VAR_51))
     FUNC_2 (VAR_55, ", non-PIC");
   if ((VAR_53 & VAR_49))
     FUNC_2 (VAR_55, ", D-Float");
   if ((VAR_53 & VAR_50))
     FUNC_2 (VAR_55, ", G-Float");
   break;
 }
    }

  return VAR_55;
}
