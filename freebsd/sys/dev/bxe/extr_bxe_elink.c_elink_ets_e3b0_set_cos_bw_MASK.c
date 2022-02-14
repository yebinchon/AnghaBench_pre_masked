
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


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
 int FUNC_0 (struct bxe_softc*,int,int const) ;

__attribute__((used)) static elink_status_t FUNC_1(struct bxe_softc *VAR_20,
         const uint8_t VAR_21,
         const uint32_t VAR_22,
         const uint32_t VAR_23,
         const uint16_t VAR_24,
         const uint8_t VAR_25,
         const uint8_t VAR_26)
{
 uint32_t VAR_27 = 0;
 uint32_t VAR_28 = 0;

 const uint32_t VAR_29 = ((VAR_25 ? VAR_25 : 1) * VAR_22) / VAR_24;
 const uint32_t VAR_30 = ((VAR_25 ? VAR_25 : 1) * VAR_23) / VAR_24;

 switch (VAR_21) {
 case 0:
     VAR_27 =
   (VAR_26) ? VAR_8 :
       VAR_2;
      VAR_28 = (VAR_26) ?
   VAR_12 : VAR_11;
      break;
 case 1:
      VAR_27 = (VAR_26) ?
   VAR_9 :
   VAR_3;
      VAR_28 = (VAR_26) ?
   VAR_14 : VAR_13;
      break;
 case 2:
      VAR_27 = (VAR_26) ?
   VAR_10 :
   VAR_4;

   VAR_28 = (VAR_26) ?
       VAR_16 : VAR_15;
      break;
 case 3:
     if (VAR_26)
   return VAR_0;
      VAR_27 =
   VAR_5;
      VAR_28 =
   VAR_17;
      break;
 case 4:
     if (VAR_26)
  return VAR_0;
      VAR_27 =
   VAR_6;
      VAR_28 = VAR_18;
      break;
 case 5:
     if (VAR_26)
  return VAR_0;
      VAR_27 =
   VAR_7;
      VAR_28 = VAR_19;
      break;
 }

 FUNC_0(VAR_20, VAR_27, VAR_29);

 FUNC_0(VAR_20, VAR_28, VAR_30);

 return VAR_1;
}
