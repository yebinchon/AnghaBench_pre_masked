
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
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
 int FUNC_0 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static elink_status_t FUNC_1(struct bxe_softc *VAR_11,
        uint8_t VAR_12,
        uint32_t VAR_13, uint8_t VAR_14)
{
 uint32_t VAR_15 = 0;

 switch (VAR_12) {
 case 0:
      VAR_15 = (VAR_14) ?
   VAR_8 :
   VAR_2;
      break;
 case 1:
     VAR_15 = (VAR_14) ?
  VAR_9 :
  VAR_3;
     break;
 case 2:
     VAR_15 = (VAR_14) ?
  VAR_10 :
  VAR_4;
     break;
 case 3:
     if (VAR_14)
  return VAR_0;
     VAR_15 = VAR_5;
     break;
 case 4:
     if (VAR_14)
  return VAR_0;
     VAR_15 = VAR_6;
     break;
 case 5:
     if (VAR_14)
  return VAR_0;
     VAR_15 = VAR_7;
     break;
 }

 FUNC_0(VAR_11, VAR_15, VAR_13);

 return VAR_1;
}
