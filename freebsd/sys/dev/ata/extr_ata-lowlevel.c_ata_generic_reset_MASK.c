
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ata_channel {int flags; int devices; } ;
typedef int device_t ;


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
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ata_channel*,int ) ;
 int FUNC_2 (struct ata_channel*,int ) ;
 int FUNC_3 (struct ata_channel*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_24 ;
 struct ata_channel* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,int,int,...) ;

void
FUNC_8(device_t VAR_25)
{
    struct ata_channel *VAR_26 = FUNC_6(VAR_25);

    u_int8_t VAR_27 = 0, VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;
    u_int8_t VAR_31 = 0, VAR_32 = 0, VAR_33 = 0;
    int VAR_34 = 0, VAR_35;


    FUNC_3(VAR_26, VAR_11, VAR_12 | VAR_13 | FUNC_0(VAR_17));
    FUNC_4(10);
    VAR_27 = FUNC_1(VAR_26, VAR_20);
    if (((VAR_27 & 0xf8) != 0xf8 || (VAR_26->flags & VAR_16)) &&
     VAR_27 != 0xa5) {
 VAR_28 = VAR_22;
 VAR_34 |= 0x01;
    }


    if (!(VAR_26->flags & VAR_18)) {
 FUNC_3(VAR_26, VAR_11, VAR_12 | VAR_13 | FUNC_0(VAR_19));
 FUNC_4(10);
 VAR_29 = FUNC_1(VAR_26, VAR_20);
 if (((VAR_29 & 0xf8) != 0xf8 || (VAR_26->flags & VAR_16)) &&
  VAR_29 != 0xa5) {
     VAR_30 = VAR_22;
     VAR_34 |= 0x02;
 }
    }

    if (VAR_24)
 FUNC_7(VAR_25, "reset tp1 mask=%02x ostat0=%02x ostat1=%02x\n",
        VAR_34, VAR_27, VAR_29);



    VAR_26->devices = 0;
    if (!VAR_34)
 return;


    FUNC_3(VAR_26, VAR_11, VAR_12 | VAR_13 | FUNC_0(VAR_17));
    FUNC_4(10);
    FUNC_3(VAR_26, VAR_8, VAR_6 | VAR_7);
    FUNC_5(10000);
    FUNC_3(VAR_26, VAR_8, VAR_6);
    FUNC_5(100000);
    FUNC_1(VAR_26, VAR_14);


    for (VAR_35 = 0; VAR_35 < 310; VAR_35++) {
 if ((VAR_34 & 0x01) && (VAR_28 & VAR_22)) {
     FUNC_3(VAR_26, VAR_11, VAR_12 | FUNC_0(VAR_17));
     FUNC_4(10);
     if (VAR_26->flags & VAR_21)
      VAR_28 = FUNC_2(VAR_26, VAR_20) & 0xff;
     else
      VAR_28 = FUNC_1(VAR_26, VAR_20);
     VAR_31 = FUNC_1(VAR_26, VAR_14);
     VAR_32 = FUNC_1(VAR_26, VAR_9);
     VAR_33 = FUNC_1(VAR_26, VAR_10);
     if (VAR_24)
  FUNC_7(VAR_25,
         "stat0=0x%02x err=0x%02x lsb=0x%02x msb=0x%02x\n",
         VAR_28, VAR_31, VAR_32, VAR_33);
     if (VAR_28 == VAR_31 && VAR_32 == VAR_31 && VAR_33 == VAR_31 &&
  VAR_35 > (VAR_28 & VAR_22 ? 100 : 10))
  VAR_34 &= ~0x01;
     if (!(VAR_28 & VAR_22)) {
  if ((VAR_31 & 0x7f) == VAR_15) {
      if (VAR_32 == VAR_0 && VAR_33 == VAR_1) {
   VAR_26->devices |= VAR_2;
      }
      else if (VAR_32 == 0 && VAR_33 == 0 && (VAR_28 & VAR_23)) {
   VAR_26->devices |= VAR_4;
      }
  }
  else if ((VAR_28 & 0x0f) && VAR_31 == VAR_32 && VAR_31 == VAR_33) {
      VAR_28 |= VAR_22;
  }
     }
 }

 if ((VAR_34 & 0x02) && (VAR_30 & VAR_22) &&
     !((VAR_34 & 0x01) && (VAR_28 & VAR_22))) {
     FUNC_3(VAR_26, VAR_11, VAR_12 | FUNC_0(VAR_19));
     FUNC_4(10);
     if (VAR_26->flags & VAR_21)
      VAR_30 = FUNC_2(VAR_26, VAR_20) & 0xff;
     else
      VAR_30 = FUNC_1(VAR_26, VAR_20);
     VAR_31 = FUNC_1(VAR_26, VAR_14);
     VAR_32 = FUNC_1(VAR_26, VAR_9);
     VAR_33 = FUNC_1(VAR_26, VAR_10);
     if (VAR_24)
  FUNC_7(VAR_25,
         "stat1=0x%02x err=0x%02x lsb=0x%02x msb=0x%02x\n",
         VAR_30, VAR_31, VAR_32, VAR_33);
     if (VAR_30 == VAR_31 && VAR_32 == VAR_31 && VAR_33 == VAR_31 &&
  VAR_35 > (VAR_30 & VAR_22 ? 100 : 10))
  VAR_34 &= ~0x02;
     if (!(VAR_30 & VAR_22)) {
  if ((VAR_31 & 0x7f) == VAR_15) {
      if (VAR_32 == VAR_0 && VAR_33 == VAR_1) {
   VAR_26->devices |= VAR_3;
      }
      else if (VAR_32 == 0 && VAR_33 == 0 && (VAR_30 & VAR_23)) {
   VAR_26->devices |= VAR_5;
      }
  }
  else if ((VAR_30 & 0x0f) && VAR_31 == VAR_32 && VAR_31 == VAR_33) {
      VAR_30 |= VAR_22;
  }
     }
 }

 if ((VAR_26->flags & VAR_16) == 0 &&
     VAR_35 > ((VAR_34 == 0x03) ? 20 : 10)) {
  if ((VAR_34 & 0x01) && VAR_28 == 0xff)
   VAR_34 &= ~0x01;
  if ((VAR_34 & 0x02) && VAR_30 == 0xff)
   VAR_34 &= ~0x02;
 }
 if (((VAR_34 & 0x01) == 0 || !(VAR_28 & VAR_22)) &&
     ((VAR_34 & 0x02) == 0 || !(VAR_30 & VAR_22)))
  break;
 FUNC_5(100000);
    }

    if (VAR_24)
 FUNC_7(VAR_25, "reset tp2 stat0=%02x stat1=%02x devices=0x%x\n",
        VAR_28, VAR_30, VAR_26->devices);
}
