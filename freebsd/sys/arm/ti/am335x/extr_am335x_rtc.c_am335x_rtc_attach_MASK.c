
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct am335x_rtc_softc {int sc_mem_res; int sc_irq_res; int sc_dev; } ;
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
 int FUNC_0 (struct am335x_rtc_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct am335x_rtc_softc*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct am335x_rtc_softc*,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 struct am335x_rtc_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 struct am335x_rtc_softc* VAR_20 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_21)
{
 int VAR_22;
 struct am335x_rtc_softc *VAR_23;
 uint32_t VAR_24;

 if (VAR_20 != ((void*)0))
  return (VAR_0);
 VAR_20 = VAR_23 = FUNC_6(VAR_21);
 VAR_23->sc_dev = VAR_21;
 VAR_22 = 0;
 VAR_23->sc_mem_res = FUNC_3(VAR_21, VAR_18, &VAR_22,
     VAR_2);
 if (!VAR_23->sc_mem_res) {
  FUNC_7(VAR_21, "cannot allocate memory resources\n");
  return (VAR_0);
 }
 if (FUNC_4(VAR_21, VAR_19, VAR_23->sc_irq_res) != 0) {
  FUNC_5(VAR_21, VAR_18, 0, VAR_23->sc_mem_res);
  FUNC_7(VAR_21, "cannot allocate irq resources\n");
  return (VAR_0);
 }
 FUNC_0(VAR_23);


 FUNC_8(VAR_3);
 VAR_24 = FUNC_1(VAR_23, VAR_14);
 FUNC_7(VAR_21, "AM335X RTC v%d.%d.%d\n",
            (VAR_24 >> 8) & 0x7, (VAR_24 >> 6) & 0x3, VAR_24 & 0x3f);

 FUNC_2(VAR_23, VAR_6, VAR_7);
 FUNC_2(VAR_23, VAR_8, VAR_9);

 FUNC_2(VAR_23, VAR_4, 0);

 FUNC_2(VAR_23, VAR_5, 0);

 FUNC_2(VAR_23, VAR_15, VAR_17 | VAR_16);

 FUNC_2(VAR_23, VAR_10, VAR_11 | VAR_12);

 FUNC_2(VAR_23, VAR_13, VAR_1);

 return (0);
}
