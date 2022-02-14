
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {scalar_t__ nvram_src; int flash_type; int num_uarts; scalar_t__ pwr_ctrl; int aob; scalar_t__ pmu; } ;
struct chipc_softc {int dev; TYPE_1__ caps; } ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,int ,char const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct chipc_softc*,int *,int,int ) ;
 int FUNC_5 (struct chipc_softc*,int *,int,int ,int ,int,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct chipc_softc *VAR_11)
{
 device_t VAR_12;
 const char *VAR_13;
 int VAR_14;


 if (VAR_11->caps.nvram_src == VAR_2 ||
     VAR_11->caps.nvram_src == VAR_1)
 {
  VAR_12 = FUNC_0(VAR_11->dev, 0, "bhnd_nvram", -1);
  if (VAR_12 == ((void*)0)) {
   FUNC_6(VAR_11->dev, "failed to add nvram device\n");
   return (VAR_9);
  }


  VAR_14 = FUNC_5(VAR_11, VAR_12, 0, VAR_5,
      VAR_6, 0, 0);
  if (VAR_14) {
   FUNC_6(VAR_11->dev, "failed to set OTP memory "
       "resource: %d\n", VAR_14);
   return (VAR_14);
  }
 }







 if (VAR_11->caps.pmu && !VAR_11->caps.aob) {
  VAR_12 = FUNC_0(VAR_11->dev, 0, "bhnd_pmu", -1);
  if (VAR_12 == ((void*)0)) {
   FUNC_6(VAR_11->dev, "failed to add pmu\n");
   return (VAR_9);
  }
 } else if (VAR_11->caps.pwr_ctrl) {
  VAR_12 = FUNC_0(VAR_11->dev, 0, "bhnd_pwrctl", -1);
  if (VAR_12 == ((void*)0)) {
   FUNC_6(VAR_11->dev, "failed to add pwrctl\n");
   return (VAR_9);
  }
 }


 VAR_12 = FUNC_0(VAR_11->dev, 0, "gpio", -1);
 if (VAR_12 == ((void*)0)) {
  FUNC_6(VAR_11->dev, "failed to add gpio\n");
  return (VAR_9);
 }

 VAR_14 = FUNC_5(VAR_11, VAR_12, 0, 0, VAR_10, 0, 0);
 if (VAR_14) {
  FUNC_6(VAR_11->dev, "failed to set gpio memory resource: "
      "%d\n", VAR_14);
  return (VAR_14);
 }


 if (FUNC_2(VAR_11->dev) != VAR_0)
  return (0);


 for (u_int VAR_15 = 0; VAR_15 < FUNC_7(VAR_11->caps.num_uarts, VAR_7); VAR_15++) {
  int VAR_16, VAR_17;

  VAR_16 = 0;
  VAR_17 = 0;

  VAR_12 = FUNC_0(VAR_11->dev, 0, "uart", -1);
  if (VAR_12 == ((void*)0)) {
   FUNC_6(VAR_11->dev, "failed to add uart%u\n", VAR_15);
   return (VAR_9);
  }


  VAR_14 = FUNC_4(VAR_11, VAR_12, VAR_16, 0);
  if (VAR_14) {
   FUNC_6(VAR_11->dev, "failed to set uart%u irq %u\n",
       VAR_15, 0);
   return (VAR_14);
  }


  VAR_14 = FUNC_5(VAR_11, VAR_12, VAR_17,
      FUNC_1(VAR_15), VAR_8, 0, 0);
  if (VAR_14) {
   FUNC_6(VAR_11->dev, "failed to set uart%u memory "
       "resource: %d\n", VAR_15, VAR_14);
   return (VAR_14);
  }
 }


 VAR_13 = FUNC_3(VAR_11->caps.flash_type);
 if (VAR_13 != ((void*)0)) {
  int VAR_18;

  VAR_12 = FUNC_0(VAR_11->dev, 0, VAR_13, -1);
  if (VAR_12 == ((void*)0)) {
   FUNC_6(VAR_11->dev, "failed to add %s device\n",
       VAR_13);
   return (VAR_9);
  }


  VAR_18 = 0;
  VAR_14 = FUNC_5(VAR_11, VAR_12, VAR_18, 0, VAR_10, 1,
      1);
  if (VAR_14) {
   FUNC_6(VAR_11->dev, "failed to set flash memory "
       "resource %d: %d\n", VAR_18, VAR_14);
   return (VAR_14);
  }


  VAR_18++;
  VAR_14 = FUNC_5(VAR_11, VAR_12, VAR_18,
      VAR_3, VAR_4, 0, 0);
  if (VAR_14) {
   FUNC_6(VAR_11->dev, "failed to set flash memory "
       "resource %d: %d\n", VAR_18, VAR_14);
   return (VAR_14);
  }
 }

 return (0);
}
