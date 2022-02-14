
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_softc {int dummy; } ;
struct bhnd_core_clkctl {int cc_dev; } ;
typedef scalar_t__ device_t ;
typedef int bhnd_clock ;


 int FUNC_0 (struct bhnd_core_clkctl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bhnd_core_clkctl*) ;
 int FUNC_2 (struct bhnd_core_clkctl*,int,int ) ;
 int FUNC_3 (struct bhnd_core_clkctl*) ;




 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct bhnd_core_clkctl*,int,int) ;
 struct bhnd_core_clkctl* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 struct bhnd_softc* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,char*,int ,int) ;
 int FUNC_10 (char*) ;

int
FUNC_11(device_t VAR_8, device_t VAR_9, bhnd_clock VAR_10)
{
 struct bhnd_softc *VAR_11;
 struct bhnd_core_clkctl *VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 VAR_11 = FUNC_8(VAR_8);

 if (FUNC_7(VAR_9) != VAR_8)
  return (VAR_6);

 if ((VAR_12 = FUNC_5(VAR_9)) == ((void*)0))
  FUNC_10("no active PMU allocation");

 FUNC_0(VAR_12);

 VAR_13 = 0x0;
 VAR_14 = 0x0;

 switch (VAR_10) {
 case 130:
  break;
 case 128:
  VAR_14 |= VAR_3;
  break;
 case 131:
  VAR_14 |= VAR_1;
  VAR_13 |= VAR_0;
  break;
 case 129:
  VAR_14 |= VAR_2;
  VAR_13 |= VAR_5;
  break;
 default:
  FUNC_9(VAR_8, "%s requested unknown clock: %#x\n",
      FUNC_6(VAR_12->cc_dev), VAR_10);
  return (VAR_7);
 }

 FUNC_1(VAR_12);


 FUNC_2(VAR_12, VAR_14, VAR_4);


 VAR_15 = FUNC_4(VAR_12, VAR_13, VAR_13);

 FUNC_3(VAR_12);

 return (VAR_15);
}
