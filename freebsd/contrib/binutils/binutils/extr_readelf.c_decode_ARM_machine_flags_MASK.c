
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;






 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;







 unsigned int VAR_2 ;



 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2 (unsigned VAR_3, char VAR_4[])
{
  unsigned VAR_5;
  int VAR_6 = 0;

  VAR_5 = FUNC_0 (VAR_3);
  VAR_3 &= ~ VAR_0;


  if (VAR_3 & VAR_2)
    {
      FUNC_1 (VAR_4, ", relocatable executable");
      VAR_3 &= ~ VAR_2;
    }

  if (VAR_3 & VAR_1)
    {
      FUNC_1 (VAR_4, ", has entry point");
      VAR_3 &= ~ VAR_1;
    }


  switch (VAR_5)
    {
    default:
      FUNC_1 (VAR_4, ", <unrecognized EABI>");
      if (VAR_3)
 VAR_6 = 1;
      break;

    case 142:
      FUNC_1 (VAR_4, ", Version1 EABI");
      while (VAR_3)
 {
   unsigned VAR_7;


   VAR_7 = VAR_3 & - VAR_3;
   VAR_3 &= ~ VAR_7;

   switch (VAR_7)
     {
     case 129:
       FUNC_1 (VAR_4, ", sorted symbol tables");
       break;

     default:
       VAR_6 = 1;
       break;
     }
 }
      break;

    case 141:
      FUNC_1 (VAR_4, ", Version2 EABI");
      while (VAR_3)
 {
   unsigned VAR_8;


   VAR_8 = VAR_3 & - VAR_3;
   VAR_3 &= ~ VAR_8;

   switch (VAR_8)
     {
     case 129:
       FUNC_1 (VAR_4, ", sorted symbol tables");
       break;

     case 144:
       FUNC_1 (VAR_4, ", dynamic symbols use segment index");
       break;

     case 135:
       FUNC_1 (VAR_4, ", mapping symbols precede others");
       break;

     default:
       VAR_6 = 1;
       break;
     }
 }
      break;

    case 140:
      FUNC_1 (VAR_4, ", Version3 EABI");
      break;

    case 139:
      FUNC_1 (VAR_4, ", Version4 EABI");
      goto eabi;

    case 138:
      FUNC_1 (VAR_4, ", Version5 EABI");
    eabi:
      while (VAR_3)
 {
   unsigned VAR_9;


   VAR_9 = VAR_3 & - VAR_3;
   VAR_3 &= ~ VAR_9;

   switch (VAR_9)
     {
     case 145:
       FUNC_1 (VAR_4, ", BE8");
       break;

     case 136:
       FUNC_1 (VAR_4, ", LE8");
       break;

     default:
       VAR_6 = 1;
       break;
     }
 }
      break;

    case 143:
      FUNC_1 (VAR_4, ", GNU EABI");
      while (VAR_3)
 {
   unsigned VAR_10;


   VAR_10 = VAR_3 & - VAR_3;
   VAR_3 &= ~ VAR_10;

   switch (VAR_10)
     {
     case 137:
       FUNC_1 (VAR_4, ", interworking enabled");
       break;

     case 147:
       FUNC_1 (VAR_4, ", uses APCS/26");
       break;

     case 146:
       FUNC_1 (VAR_4, ", uses APCS/float");
       break;

     case 131:
       FUNC_1 (VAR_4, ", position independent");
       break;

     case 148:
       FUNC_1 (VAR_4, ", 8 bit structure alignment");
       break;

     case 133:
       FUNC_1 (VAR_4, ", uses new ABI");
       break;

     case 132:
       FUNC_1 (VAR_4, ", uses old ABI");
       break;

     case 130:
       FUNC_1 (VAR_4, ", software FP");
       break;

     case 128:
       FUNC_1 (VAR_4, ", VFP");
       break;

     case 134:
       FUNC_1 (VAR_4, ", Maverick FP");
       break;

     default:
       VAR_6 = 1;
       break;
     }
 }
    }

  if (VAR_6)
    FUNC_1 (VAR_4,", <unknown>");
}
