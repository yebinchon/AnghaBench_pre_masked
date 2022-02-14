
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int8_t ;
struct TYPE_17__ {scalar_t__* input; scalar_t__ vid; scalar_t__ offset; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;
typedef int bhnd_nvram_type ;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;





 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (TYPE_1__*,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__*) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_17(bhnd_sprom_opcode_state *VAR_16, uint8_t *VAR_17)
{
 int VAR_18;

 while (*VAR_16->input != VAR_3) {
  uint32_t VAR_19;
  uint8_t VAR_20, VAR_21, VAR_22;


  *VAR_17 = *VAR_16->input;
  VAR_20 = FUNC_2(*VAR_17);
  VAR_22 = FUNC_1(*VAR_17);


  if ((VAR_18 = FUNC_6(VAR_16)))
   return (VAR_18);


  VAR_21 = *VAR_17;
  if ((VAR_18 = FUNC_9(VAR_16, &VAR_21)))
   return (VAR_18);

  if (VAR_21 != *VAR_17) {

   *VAR_17 = VAR_21;



   if (!FUNC_7(VAR_16))
    continue;

   return (0);
  }


  VAR_16->input++;

  switch (VAR_20) {
  case 129:
   if ((VAR_18 = FUNC_16(VAR_16, VAR_22)))
    return (VAR_18);
   break;

  case 128:
   VAR_18 = FUNC_16(VAR_16,
       VAR_16->vid + VAR_22);
   if (VAR_18)
    return (VAR_18);
   break;

  case 131:
   VAR_18 = FUNC_8(VAR_16, VAR_22,
       &VAR_19);
   if (VAR_18)
    return (VAR_18);

   if ((VAR_18 = FUNC_16(VAR_16, VAR_19)))
    return (VAR_18);

   break;

  case 130:
   if ((VAR_18 = FUNC_5(VAR_16)))
    return (VAR_18);
   break;

  case 140:
   VAR_22 = *VAR_16->input;
   if ((VAR_18 = FUNC_12(VAR_16, VAR_22)))
    return (VAR_18);

   VAR_16->input++;
   break;

  case 145:
  case 144: {
   uint8_t VAR_23, VAR_24, VAR_25;
   bool VAR_26;


   VAR_24 = (VAR_22 & VAR_4) >>
       VAR_5;

   VAR_26 =
       ((VAR_22 & VAR_6) != 0);

   VAR_25 = (VAR_22 & VAR_7) >>
         VAR_8;


   if (VAR_20 == 144) {

    VAR_23 = *VAR_16->input;
    VAR_16->input++;
   } else {
    VAR_23 = 1;
   }


   VAR_18 = FUNC_10(VAR_16, VAR_23,
       VAR_24, VAR_26, VAR_25);
   if (VAR_18)
    return (VAR_18);

   break;
  }
  case 143: {
   uint8_t VAR_27, VAR_28, VAR_29;
   bool VAR_30;



   VAR_27 = VAR_22;
   VAR_28 = 1;
   VAR_29 = 1;
   VAR_30 = 0;

   VAR_18 = FUNC_10(VAR_16, VAR_27,
       VAR_28, VAR_30, VAR_29);
   if (VAR_18)
    return (VAR_18);
   break;
  }

  case 137:
   VAR_18 = FUNC_13(VAR_16, VAR_22, VAR_22);
   if (VAR_18)
    return (VAR_18);
   break;

  case 136: {
   uint8_t VAR_31;
   uint8_t VAR_32, VAR_33;



   VAR_31 = *VAR_16->input;
   VAR_32 = (VAR_31 & VAR_13) >>
       VAR_14;
   VAR_33 = (VAR_31 & VAR_11) >>
       VAR_12;


   VAR_18 = FUNC_13(VAR_16, VAR_32, VAR_33);
   if (VAR_18)
    return (VAR_18);


   VAR_16->input++;
   break;
  }
  case 141:
   if ((VAR_18 = FUNC_11(VAR_16, VAR_22)))
    return (VAR_18);
   break;

  case 142:
   VAR_18 = FUNC_8(VAR_16, VAR_22,
       &VAR_19);
   if (VAR_18)
    return (VAR_18);

   if ((VAR_18 = FUNC_11(VAR_16, VAR_19)))
    return (VAR_18);
   break;

  case 134:
   VAR_18 = FUNC_14(VAR_16, VAR_22 * 2);
   if (VAR_18)
    return (VAR_18);
   break;

  case 135: {
   int8_t VAR_34;

   if (VAR_22 == VAR_9) {
    VAR_34 = (int8_t)(*VAR_16->input);
   } else if (VAR_22 == VAR_10) {
    VAR_19 = *VAR_16->input;
    if (VAR_19 > VAR_2) {
     FUNC_3(VAR_16, "invalid shift "
         "value: %#x\n", VAR_19);
    }

    VAR_34 = VAR_19;
   } else {
    FUNC_3(VAR_16, "unsupported shift data "
        "type: %#hhx\n", VAR_22);
    return (VAR_0);
   }

   if ((VAR_18 = FUNC_14(VAR_16, VAR_34)))
    return (VAR_18);

   VAR_16->input++;
   break;
  }
  case 138:

   VAR_19 = VAR_22;


   VAR_18 = FUNC_4(VAR_16, &VAR_19);
   if (VAR_18)
    return (VAR_18);


   if (VAR_15 - VAR_16->offset < VAR_19) {
    FUNC_0("offset out of range\n");
    return (VAR_0);
   }


   VAR_16->offset += VAR_19;
   break;
  case 139:
   VAR_18 = FUNC_8(VAR_16, VAR_22,
       &VAR_19);
   if (VAR_18)
    return (VAR_18);

   VAR_16->offset = VAR_19;
   break;

  case 133:

   VAR_22 = *VAR_16->input;
   VAR_16->input++;


  case 132:
   switch (VAR_22) {
   case 146:
   case 149:
   case 148:
   case 147:
   case 151:
   case 154:
   case 153:
   case 152:
   case 155:
   case 150:
    VAR_18 = FUNC_15(VAR_16,
        (bhnd_nvram_type)VAR_22);
    if (VAR_18)
     return (VAR_18);
    break;
   default:
    FUNC_0("unrecognized type %#hhx\n", VAR_22);
    return (VAR_0);
   }
   break;

  default:
   FUNC_0("unrecognized opcode %#hhx\n", *VAR_17);
   return (VAR_0);
  }



  if (FUNC_7(VAR_16))
   return (0);
 }


 return (VAR_1);
}
