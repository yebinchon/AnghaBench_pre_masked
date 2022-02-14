
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct bcma_erom {int dummy; } ;
typedef int bhnd_erom_t ;


 int FUNC_0 (scalar_t__,int ) ;



 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_2 (struct bcma_erom*,char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct bcma_erom*,scalar_t__*) ;
 int FUNC_5 (struct bcma_erom*) ;

__attribute__((used)) static int
FUNC_6(bhnd_erom_t *VAR_23)
{
 struct bcma_erom *VAR_24;
 uint32_t VAR_25;
 int VAR_26;

 VAR_24 = (struct bcma_erom *)VAR_23;

 FUNC_5(VAR_24);

 while (!(VAR_26 = FUNC_4(VAR_24, &VAR_25))) {

  if (VAR_25 == VAR_1) {
   FUNC_2(VAR_24, "EOF\n");
   return (0);
  }


  if (!FUNC_1(VAR_25, VAR_12)) {
   FUNC_2(VAR_24, "invalid EROM entry %#x\n", VAR_25);
   return (VAR_10);
  }

  switch (FUNC_1(VAR_25, VAR_13)) {
  case 130: {

   FUNC_2(VAR_24, "coreA (0x%x)\n", VAR_25);
   FUNC_2(VAR_24, "\tdesigner:\t0x%x\n",
       FUNC_1(VAR_25, VAR_4));
   FUNC_2(VAR_24, "\tid:\t\t0x%x\n",
       FUNC_1(VAR_25, VAR_5));
   FUNC_2(VAR_24, "\tclass:\t\t0x%x\n",
       FUNC_1(VAR_25, VAR_3));


   if ((VAR_26 = FUNC_4(VAR_24, &VAR_25))) {
    FUNC_2(VAR_24, "error reading CoreDescB: %d\n",
        VAR_26);
    return (VAR_26);
   }

   if (!FUNC_0(VAR_25, VAR_2)) {
    FUNC_2(VAR_24, "invalid core descriptor; found "
        "unexpected entry %#x (type=%s)\n",
        VAR_25, FUNC_3(VAR_25));
    return (VAR_10);
   }

   FUNC_2(VAR_24, "coreB (0x%x)\n", VAR_25);
   FUNC_2(VAR_24, "\trev:\t0x%x\n",
       FUNC_1(VAR_25, VAR_9));
   FUNC_2(VAR_24, "\tnummp:\t0x%x\n",
       FUNC_1(VAR_25, VAR_7));
   FUNC_2(VAR_24, "\tnumdp:\t0x%x\n",
       FUNC_1(VAR_25, VAR_6));
   FUNC_2(VAR_24, "\tnumwmp:\t0x%x\n",
       FUNC_1(VAR_25, VAR_8));
   FUNC_2(VAR_24, "\tnumwsp:\t0x%x\n",
       FUNC_1(VAR_25, VAR_8));

   break;
  }
  case 129:
   FUNC_2(VAR_24, "\tmport 0x%x\n", VAR_25);
   FUNC_2(VAR_24, "\t\tport:\t0x%x\n",
       FUNC_1(VAR_25, VAR_15));
   FUNC_2(VAR_24, "\t\tid:\t\t0x%x\n",
       FUNC_1(VAR_25, VAR_14));
   break;

  case 128: {
   bool VAR_27;
   uint8_t VAR_28;

   VAR_27 = (FUNC_1(VAR_25, VAR_16) != 0);
   VAR_28 = FUNC_1(VAR_25, VAR_19);

   FUNC_2(VAR_24, "\tregion 0x%x:\n", VAR_25);
   FUNC_2(VAR_24, "\t\t%s:\t0x%x\n",
       VAR_27 ? "baselo" : "base",
       FUNC_1(VAR_25, VAR_17));
   FUNC_2(VAR_24, "\t\tport:\t0x%x\n",
       FUNC_1(VAR_25, VAR_18));
   FUNC_2(VAR_24, "\t\ttype:\t0x%x\n",
       FUNC_1(VAR_25, VAR_20));
   FUNC_2(VAR_24, "\t\tsztype:\t0x%hhx\n", VAR_28);


   if (VAR_27) {
    if ((VAR_26 = FUNC_4(VAR_24, &VAR_25))) {
     FUNC_2(VAR_24, "error reading region "
         "base address high bits %d\n",
         VAR_26);
     return (VAR_26);
    }

    FUNC_2(VAR_24, "\t\tbasehi:\t0x%x\n", VAR_25);
   }


   if (VAR_28 == VAR_0) {
    bool VAR_29;

    if ((VAR_26 = FUNC_4(VAR_24, &VAR_25))) {
     FUNC_2(VAR_24, "error reading region "
         "size descriptor %d\n",
         VAR_26);
     return (VAR_26);
    }

    if (FUNC_1(VAR_25, VAR_21))
     VAR_29 = 1;
    else
     VAR_29 = 0;

    FUNC_2(VAR_24, "\t\t%s:\t0x%x\n",
        VAR_29 ? "sizelo" : "size",
        FUNC_1(VAR_25, VAR_22));

    if (VAR_29) {
     VAR_26 = FUNC_4(VAR_24, &VAR_25);
     if (VAR_26) {
      FUNC_2(VAR_24, "error reading "
          "region size high bits: "
          "%d\n", VAR_26);
      return (VAR_26);
     }

     FUNC_2(VAR_24, "\t\tsizehi:\t0x%x\n",
         VAR_25);
    }
   }
   break;
  }

  default:
   FUNC_2(VAR_24, "unknown EROM entry 0x%x (type=%s)\n",
       VAR_25, FUNC_3(VAR_25));
   return (VAR_10);
  }
 }

 if (VAR_26 == VAR_11)
  FUNC_2(VAR_24, "BCMA EROM table missing terminating EOF\n");
 else if (VAR_26)
  FUNC_2(VAR_24, "EROM read failed: %d\n", VAR_26);

 return (VAR_26);
}
