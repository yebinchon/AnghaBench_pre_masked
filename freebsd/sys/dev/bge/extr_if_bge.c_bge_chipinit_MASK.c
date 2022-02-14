
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bge_softc {int bge_flags; scalar_t__ bge_chiprev; scalar_t__ bge_asicrev; int bge_mps; scalar_t__ bge_chipid; int bge_asf_mode; int bge_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct bge_softc*,int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_1 (struct bge_softc*) ;
 scalar_t__ FUNC_2 (struct bge_softc*) ;
 int FUNC_3 (struct bge_softc*) ;
 int FUNC_4 (struct bge_softc*,int,int ) ;
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
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_9 (struct bge_softc*,int ) ;
 int FUNC_10 (struct bge_softc*,int ,int) ;
 int FUNC_11 (int) ;
 int VAR_55 ;
 int FUNC_12 (int ,int ,int ,int) ;
 int FUNC_13 (struct bge_softc*) ;
 int FUNC_14 (int ,scalar_t__,int) ;
 int FUNC_15 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_16(struct bge_softc *VAR_56)
{
 uint32_t VAR_57, VAR_58, VAR_59;
 uint16_t VAR_60;
 int VAR_61;


 VAR_58 = VAR_24;
 if (VAR_56->bge_flags & VAR_23)
  VAR_58 |= VAR_45;
 FUNC_15(VAR_56->bge_dev, VAR_49, VAR_58, 4);





 for (VAR_61 = VAR_51;
     VAR_61 < VAR_52 + 1; VAR_61 += sizeof(uint32_t))
  FUNC_4(VAR_56, VAR_61, 0);

 for (VAR_61 = VAR_53;
     VAR_61 < VAR_54 + 1; VAR_61 += sizeof(uint32_t))
  FUNC_4(VAR_56, VAR_61, 0);

 if (VAR_56->bge_chiprev == VAR_17) {





  VAR_60 = FUNC_14(VAR_56->bge_dev, VAR_50 + 2, 2);
  VAR_60 |= (1 << 10) | (1 << 12) | (1 << 13);
  FUNC_15(VAR_56->bge_dev, VAR_50 + 2, VAR_60, 2);
 }

 if (VAR_56->bge_asicrev == VAR_11 ||
     VAR_56->bge_asicrev == VAR_12) {





  if (VAR_56->bge_chiprev != VAR_18) {
   FUNC_10(VAR_56, VAR_19,
       FUNC_9(VAR_56, VAR_19) |
       VAR_20);
  }
 }




 VAR_57 = FUNC_5(6) |
     FUNC_7(7);
 if (VAR_56->bge_flags & VAR_21) {
  if (VAR_56->bge_mps >= 256)
   VAR_57 |= FUNC_8(7);
  else
   VAR_57 |= FUNC_8(3);
 } else if (VAR_56->bge_flags & VAR_22) {
  if (FUNC_1(VAR_56)) {

   VAR_57 |= FUNC_6(2) |
       FUNC_8(2);
   VAR_57 |= (VAR_56->bge_asicrev == VAR_13) ?
       VAR_41 :
       VAR_42;
  } else if (VAR_56->bge_asicrev == VAR_4) {






   VAR_57 |= FUNC_6(4) |
       FUNC_8(3);
  } else if (VAR_56->bge_asicrev == VAR_5) {

   VAR_57 |= FUNC_6(7) |
       FUNC_8(3);
  } else {

   VAR_57 |= FUNC_6(3) |
       FUNC_8(3) |
       0x0F;
  }
  if (VAR_56->bge_asicrev == VAR_4 ||
      VAR_56->bge_asicrev == VAR_5) {
   uint32_t VAR_62;


   VAR_62 = FUNC_9(VAR_56, VAR_46) & 0x1F;
   if (VAR_62 == 6 || VAR_62 == 7)
    VAR_57 |=
        VAR_41;


   VAR_57 |= VAR_37;
  }
 } else {

  VAR_57 |= FUNC_6(7) |
      FUNC_8(7);

  if (VAR_56->bge_asicrev != VAR_6 &&
      VAR_56->bge_asicrev != VAR_9)
   VAR_57 |= 0x0F;
 }
 if (VAR_56->bge_asicrev == VAR_2 ||
     VAR_56->bge_asicrev == VAR_3)
  VAR_57 |= VAR_44 |
      VAR_37;
 if (VAR_56->bge_asicrev == VAR_4 ||
     VAR_56->bge_asicrev == VAR_5)
  VAR_57 &= ~VAR_40;
 if (FUNC_2(VAR_56)) {
  VAR_57 &= ~VAR_39;
  if (VAR_56->bge_chipid == VAR_16)
   VAR_57 &= ~VAR_38;





  if (!FUNC_3(VAR_56) &&
      VAR_56->bge_asicrev != VAR_7 &&
      VAR_56->bge_asicrev != VAR_10)
   VAR_57 |= VAR_43;
 }
 FUNC_15(VAR_56->bge_dev, VAR_48, VAR_57, 4);




 VAR_59 = FUNC_13(VAR_56);
 if (VAR_56->bge_asicrev == VAR_8 ||
     VAR_56->bge_asicrev == VAR_10) {

  VAR_59 |= FUNC_9(VAR_56, VAR_36) &
      (VAR_28 |
      VAR_35 |
      VAR_27 | VAR_31);
 }
 VAR_59 |= VAR_32 | VAR_30 |
     VAR_34;







 if (VAR_56->bge_asicrev == VAR_3 &&
     VAR_56->bge_chipid == VAR_15)
  VAR_59 |= VAR_29;




 if (VAR_56->bge_asf_mode & VAR_0)
  VAR_59 |= VAR_33;

 FUNC_10(VAR_56, VAR_36, VAR_59);





 FUNC_12(VAR_56->bge_dev, VAR_47, VAR_55, 4);


 FUNC_10(VAR_56, VAR_26, VAR_1);


 if (VAR_56->bge_asicrev == VAR_14) {
  FUNC_11(40);


  FUNC_0(VAR_56, VAR_26, VAR_25);
  FUNC_9(VAR_56, VAR_26);
  FUNC_11(40);
 }

 return (0);
}
