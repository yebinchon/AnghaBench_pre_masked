
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pwrctl_softc {int res; int chipc_dev; } ;
typedef int bhnd_clock ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct bhnd_pwrctl_softc*,int ) ;
 scalar_t__ FUNC_2 (struct bhnd_pwrctl_softc*,int ) ;
 int VAR_13 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int const) ;
 int FUNC_7 (int ,int const) ;

int
FUNC_8(struct bhnd_pwrctl_softc *VAR_14, bhnd_clock VAR_15)
{
 uint32_t VAR_16;

 FUNC_1(VAR_14, VAR_12);


 if (FUNC_2(VAR_14, VAR_10))
  return (VAR_9);


 if (FUNC_5(VAR_14->chipc_dev) == 10)
  return (VAR_9);

 if (FUNC_2(VAR_14, VAR_13))
  VAR_16 = FUNC_3(VAR_14->res, VAR_1);
 else
  VAR_16 = FUNC_3(VAR_14->res, VAR_8);

 switch (VAR_15) {
 case 128:

  if (FUNC_2(VAR_14, VAR_13)) {
   VAR_16 &= ~(VAR_6 | VAR_2 | VAR_3);
   VAR_16 |= VAR_3;


   FUNC_7(VAR_14->chipc_dev,
       128);
  } else if (FUNC_2(VAR_14, VAR_11)) {
   VAR_16 |= VAR_7;
  } else {
   return (VAR_9);
  }

  if (FUNC_2(VAR_14, VAR_13))
   FUNC_4(VAR_14->res, VAR_1, VAR_16);
  else
   FUNC_4(VAR_14->res, VAR_8, VAR_16);
  FUNC_0(VAR_0);

  break;

 case 129:

  if (FUNC_2(VAR_14, VAR_13)) {
   VAR_16 &= ~(VAR_2 | VAR_3 | VAR_6);
   if ((VAR_16 & VAR_4) != VAR_5)
    VAR_16 |= VAR_6;

   FUNC_4(VAR_14->res, VAR_1, VAR_16);



   if (VAR_16 & VAR_6) {
    FUNC_6(VAR_14->chipc_dev,
        128);
   }
  } else if (FUNC_2(VAR_14, VAR_11)) {

   VAR_16 &= ~VAR_7;
   FUNC_4(VAR_14->res, VAR_8, VAR_16);
  } else {
   return (VAR_9);
  }

  break;

 default:
  return (VAR_9);
 }

 return (0);
}
