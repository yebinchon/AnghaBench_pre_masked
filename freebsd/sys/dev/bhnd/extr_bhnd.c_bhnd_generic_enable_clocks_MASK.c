
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_softc {int dummy; } ;
struct bhnd_core_clkctl {int cc_dev; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (struct bhnd_core_clkctl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bhnd_core_clkctl*) ;
 int FUNC_2 (struct bhnd_core_clkctl*,int,int ) ;
 int FUNC_3 (struct bhnd_core_clkctl*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct bhnd_core_clkctl*,int,int) ;
 struct bhnd_core_clkctl* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 struct bhnd_softc* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,char*,int ,int) ;
 int FUNC_10 (char*) ;

int
FUNC_11(device_t VAR_11, device_t VAR_12, uint32_t VAR_13)
{
 struct bhnd_softc *VAR_14;
 struct bhnd_core_clkctl *VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 int VAR_18;

 VAR_14 = FUNC_8(VAR_11);

 if (FUNC_7(VAR_12) != VAR_11)
  return (VAR_9);

 if ((VAR_15 = FUNC_5(VAR_12)) == ((void*)0))
  FUNC_10("no active PMU allocation");

 FUNC_0(VAR_15);

 VAR_14 = FUNC_8(VAR_11);

 VAR_16 = 0x0;
 VAR_17 = 0x0;


 if (VAR_13 & VAR_6)
  VAR_13 &= ~VAR_6;

 if (VAR_13 & VAR_8)
  VAR_13 &= ~VAR_8;

 if (VAR_13 & VAR_5) {
  VAR_17 |= VAR_0;
  VAR_16 |= VAR_1;
  VAR_13 &= ~VAR_5;
 }

 if (VAR_13 & VAR_7) {
  VAR_17 |= VAR_3;
  VAR_16 |= VAR_4;
  VAR_13 &= ~VAR_7;
 }


 if (VAR_13 != 0x0) {
  FUNC_9(VAR_11, "%s requested unknown clocks: %#x\n",
      FUNC_6(VAR_15->cc_dev), VAR_13);
  return (VAR_10);
 }

 FUNC_1(VAR_15);


 FUNC_2(VAR_15, VAR_17, VAR_2);


 VAR_18 = FUNC_4(VAR_15, VAR_16, VAR_16);

 FUNC_3(VAR_15);

 return (VAR_18);
}
