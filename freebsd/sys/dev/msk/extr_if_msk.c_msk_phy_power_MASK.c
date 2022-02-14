
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msk_softc {int msk_num_port; int msk_hw_rev; int msk_hw_id; } ;


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
 int FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int) ;
 int FUNC_2 (struct msk_softc*,int ) ;
 int FUNC_3 (struct msk_softc*,int ,int) ;
 int FUNC_4 (struct msk_softc*,int ,int ) ;
 int FUNC_5 (struct msk_softc*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int,int ) ;


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

__attribute__((used)) static void
FUNC_7(struct msk_softc *VAR_41, int VAR_42)
{
 uint32_t VAR_43, VAR_44;
 int VAR_45;

 switch (VAR_42) {
 case 128:

  FUNC_3(VAR_41, VAR_1,
      VAR_27 | VAR_30 | VAR_28 | VAR_32);

  FUNC_5(VAR_41, VAR_3, VAR_33);

  VAR_44 = 0;
  if (VAR_41->msk_hw_id == VAR_8 &&
      VAR_41->msk_hw_rev > VAR_9) {

   VAR_44 = VAR_39 | VAR_36 |
         VAR_34 | VAR_40 |
         VAR_37 | VAR_35;
  }



  FUNC_3(VAR_41, VAR_4, VAR_44);

  VAR_43 = FUNC_0(VAR_41, VAR_20);
  VAR_43 &= ~(VAR_24 | VAR_26);
  if (VAR_41->msk_hw_id == VAR_8) {
   if (VAR_41->msk_hw_rev > VAR_9) {

    VAR_43 |= VAR_23;
    if (VAR_41->msk_num_port > 1)
     VAR_43 |= VAR_25;
   }
  }
  if (VAR_41->msk_hw_id == VAR_5 ||
      VAR_41->msk_hw_id == VAR_6 ||
      VAR_41->msk_hw_id >= VAR_7) {
   VAR_44 = FUNC_0(VAR_41, VAR_21);
   VAR_44 &= (VAR_19 |
       VAR_15 | VAR_16 |
       VAR_14);

   FUNC_1(VAR_41, VAR_21, VAR_44);
   VAR_44 = FUNC_0(VAR_41, VAR_22);
   VAR_44 &= VAR_18;
   FUNC_1(VAR_41, VAR_22, VAR_44);
   FUNC_1(VAR_41, VAR_17, 0);
   FUNC_4(VAR_41, VAR_0, VAR_38);




   VAR_44 = FUNC_2(VAR_41, VAR_2);
   VAR_44 |= VAR_10;
   FUNC_5(VAR_41, VAR_2, VAR_44);
   FUNC_2(VAR_41, VAR_2);
  }

  FUNC_1(VAR_41, VAR_20, VAR_43);

  for (VAR_45 = 0; VAR_45 < VAR_41->msk_num_port; VAR_45++) {
   FUNC_4(VAR_41, FUNC_6(VAR_45, VAR_11),
       VAR_13);
   FUNC_4(VAR_41, FUNC_6(VAR_45, VAR_11),
       VAR_12);
  }
  break;
 case 129:
  VAR_44 = FUNC_0(VAR_41, VAR_20);
  VAR_44 |= VAR_24 | VAR_26;
  if (VAR_41->msk_hw_id == VAR_8 &&
      VAR_41->msk_hw_rev > VAR_9) {
   VAR_44 &= ~VAR_23;
   if (VAR_41->msk_num_port > 1)
    VAR_44 &= ~VAR_25;
  }
  FUNC_1(VAR_41, VAR_20, VAR_44);

  VAR_44 = VAR_39 | VAR_36 |
        VAR_34 | VAR_40 |
        VAR_37 | VAR_35;
  if (VAR_41->msk_hw_id == VAR_8 &&
      VAR_41->msk_hw_rev > VAR_9) {

   VAR_44 = 0;
  }




  FUNC_3(VAR_41, VAR_4, VAR_44);
  FUNC_3(VAR_41, VAR_1,
      VAR_27 | VAR_30 | VAR_29 | VAR_31);
  break;
 default:
  break;
 }
}
