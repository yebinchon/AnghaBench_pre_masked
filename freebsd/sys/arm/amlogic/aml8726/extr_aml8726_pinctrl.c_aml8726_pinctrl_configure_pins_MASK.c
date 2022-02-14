
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int pud_ctrl; struct aml8726_pinctrl_function* func; struct aml8726_pinctrl_pkg_pin* ppin; } ;
struct aml8726_pinctrl_softc {TYPE_1__ soc; } ;
struct aml8726_pinctrl_pkg_pin {int pull_bits; int aobus; int pull_addr; int * pkg_name; } ;
struct aml8726_pinctrl_pin {char* name; int mux_bits; int mux_addr; int * pkg_name; } ;
struct aml8726_pinctrl_function {char* name; struct aml8726_pinctrl_pin* pins; } ;
typedef scalar_t__ ssize_t ;
typedef int phandle_t ;
typedef enum aml8726_pinctrl_pull_mode { ____Placeholder_aml8726_pinctrl_pull_mode } aml8726_pinctrl_pull_mode ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_pinctrl_softc*) ;
 int FUNC_1 (struct aml8726_pinctrl_softc*) ;
 int FUNC_2 (struct aml8726_pinctrl_softc*,int ) ;
 int FUNC_3 (struct aml8726_pinctrl_softc*,int ,int) ;
 int FUNC_4 (struct aml8726_pinctrl_softc*,int ) ;
 int FUNC_5 (struct aml8726_pinctrl_softc*,int ,int) ;
 int FUNC_6 (struct aml8726_pinctrl_softc*,int ) ;
 int FUNC_7 (struct aml8726_pinctrl_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_8 (struct aml8726_pinctrl_softc*,int ) ;
 int FUNC_9 (struct aml8726_pinctrl_softc*,int ,int) ;
 scalar_t__ FUNC_10 (int ,char*,void**) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct aml8726_pinctrl_softc*,int ) ;
 int FUNC_14 (struct aml8726_pinctrl_softc*,int ,int) ;
 int FUNC_15 (struct aml8726_pinctrl_softc*,int ) ;
 int FUNC_16 (struct aml8726_pinctrl_softc*,int ,int) ;




 int VAR_1 ;
 struct aml8726_pinctrl_softc* FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,...) ;
 scalar_t__ FUNC_19 (int *,int *) ;
 scalar_t__ FUNC_20 (char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_2, phandle_t VAR_3)
{
 struct aml8726_pinctrl_softc *VAR_4 = FUNC_17(VAR_2);
 struct aml8726_pinctrl_function *VAR_5;
 struct aml8726_pinctrl_function *VAR_6;
 struct aml8726_pinctrl_pkg_pin *VAR_7;
 struct aml8726_pinctrl_pin *VAR_8;
 struct aml8726_pinctrl_pin *VAR_9;
 enum aml8726_pinctrl_pull_mode VAR_10;
 char *VAR_11;
 char *VAR_12;
 char *VAR_13;
 char *VAR_14;
 phandle_t VAR_15;
 ssize_t VAR_16;
 uint32_t VAR_17;

 VAR_15 = FUNC_11(VAR_3);

 VAR_16 = FUNC_10(VAR_15, "amlogic,function",
     (void **)&VAR_11);

 if (VAR_16 < 0) {
  FUNC_18(VAR_2,
      "missing amlogic,function attribute in FDT\n");
  return (VAR_0);
 }

 for (VAR_6 = VAR_4->soc.func; VAR_6->name != ((void*)0); VAR_6++)
  if (FUNC_20(VAR_6->name, VAR_11, VAR_16) == 0)
   break;

 if (VAR_6->name == ((void*)0)) {
  FUNC_18(VAR_2, "unknown function attribute %.*s in FDT\n",
      VAR_16, VAR_11);
  FUNC_12(VAR_11);
  return (VAR_0);
 }

 FUNC_12(VAR_11);

 VAR_16 = FUNC_10(VAR_15, "amlogic,pull",
     (void **)&VAR_14);

 VAR_10 = VAR_1;

 if (VAR_16 > 0) {
  if (FUNC_20(VAR_14, "enable", VAR_16) == 0)
   VAR_10 = 129;
  else if (FUNC_20(VAR_14, "disable", VAR_16) == 0)
   VAR_10 = 131;
  else if (FUNC_20(VAR_14, "down", VAR_16) == 0)
   VAR_10 = 130;
  else if (FUNC_20(VAR_14, "up", VAR_16) == 0)
   VAR_10 = 128;
  else {
   FUNC_18(VAR_2,
       "unknown pull attribute %.*s in FDT\n",
       VAR_16, VAR_14);
   FUNC_12(VAR_14);
   return (VAR_0);
  }
 }

 FUNC_12(VAR_14);




 switch (VAR_10) {
 case 130:
 case 128:
  if (VAR_4->soc.pud_ctrl == 0) {
   FUNC_18(VAR_2,
       "SoC doesn't support setting pull direction.\n");
   return (VAR_0);
  }
  break;
 default:
  break;
 }

 VAR_16 = FUNC_10(VAR_15, "amlogic,pins",
     (void **)&VAR_12);

 if (VAR_16 < 0) {
  FUNC_18(VAR_2, "missing amlogic,pins attribute in FDT\n");
  return (VAR_0);
 }

 VAR_13 = VAR_12;

 while (VAR_16) {
  for (VAR_9 = VAR_6->pins; VAR_9->name != ((void*)0); VAR_9++)
   if (FUNC_20(VAR_9->name, VAR_13, VAR_16) == 0)
    break;

  if (VAR_9->name == ((void*)0)) {

   FUNC_18(VAR_2, "unknown pin attribute %.*s in FDT\n",
       VAR_16, VAR_13);
  }


  while (*VAR_13 && VAR_16) {
   VAR_13++;
   VAR_16--;
  }
  if (VAR_16) {
   VAR_13++;
   VAR_16--;
  }

  if (VAR_9->name == ((void*)0))
   continue;

  for (VAR_7 = VAR_4->soc.ppin; VAR_7->pkg_name != ((void*)0); VAR_7++)
   if (FUNC_19(VAR_7->pkg_name, VAR_9->pkg_name) == 0)
    break;

  if (VAR_7->pkg_name == ((void*)0)) {
   FUNC_18(VAR_2,
       "missing entry for package pin %s\n",
       VAR_9->pkg_name);
   continue;
  }

  if (VAR_10 != VAR_1 && VAR_7->pull_bits == 0x00000000) {
   FUNC_18(VAR_2,
       "missing pull info for package pin %s\n",
       VAR_9->pkg_name);
   continue;
  }

  FUNC_0(VAR_4);
  for (VAR_5 = VAR_4->soc.func; VAR_5->name != ((void*)0); VAR_5++)
   for (VAR_8 = VAR_5->pins; VAR_8->name != ((void*)0); VAR_8++) {
    if (VAR_8 == VAR_9)
     continue;
    if (FUNC_19(VAR_8->pkg_name, VAR_9->pkg_name) != 0)
     continue;
    if (VAR_8->mux_bits == 0)
     continue;
    if (VAR_7->aobus == 0) {
     VAR_17 = FUNC_8(VAR_4, VAR_8->mux_addr);
     VAR_17 &= ~VAR_8->mux_bits;
     FUNC_9(VAR_4, VAR_8->mux_addr, VAR_17);
    } else {
     VAR_17 = FUNC_2(VAR_4, VAR_8->mux_addr);
     VAR_17 &= ~VAR_8->mux_bits;
     FUNC_3(VAR_4, VAR_8->mux_addr, VAR_17);
    }
   }







  if (VAR_9->mux_bits != 0) {
   if (VAR_7->aobus == 0) {
    VAR_17 = FUNC_8(VAR_4, VAR_9->mux_addr);
    VAR_17 |= VAR_9->mux_bits;
    FUNC_9(VAR_4, VAR_9->mux_addr, VAR_17);
   } else {
    VAR_17 = FUNC_2(VAR_4, VAR_9->mux_addr);
    VAR_17 |= VAR_9->mux_bits;
    FUNC_3(VAR_4, VAR_9->mux_addr, VAR_17);
   }
  }





  switch (VAR_10) {
  case 130:
  case 128:
   if (VAR_7->aobus == 0) {
    VAR_17 = FUNC_15(VAR_4, VAR_7->pull_addr);
    if (VAR_10 == 130)
     VAR_17 &= ~VAR_7->pull_bits;
    else
     VAR_17 |= VAR_7->pull_bits;
    FUNC_16(VAR_4, VAR_7->pull_addr, VAR_17);
   } else {
    VAR_17 = FUNC_6(VAR_4, VAR_7->pull_addr);
    if (VAR_10 == 130)
     VAR_17 &= ~(VAR_7->pull_bits << 16);
    else
     VAR_17 |= (VAR_7->pull_bits << 16);
    FUNC_7(VAR_4, VAR_7->pull_addr, VAR_17);
   }

  case 131:
  case 129:
   if (VAR_7->aobus == 0) {
    VAR_17 = FUNC_13(VAR_4, VAR_7->pull_addr);
    if (VAR_10 == 131)
     VAR_17 &= ~VAR_7->pull_bits;
    else
     VAR_17 |= VAR_7->pull_bits;
    FUNC_14(VAR_4, VAR_7->pull_addr, VAR_17);
   } else {
    VAR_17 = FUNC_4(VAR_4, VAR_7->pull_addr);
    if (VAR_10 == 131)
     VAR_17 &= ~VAR_7->pull_bits;
    else
     VAR_17 |= VAR_7->pull_bits;
    FUNC_5(VAR_4, VAR_7->pull_addr, VAR_17);
   }
   break;
  default:
   break;
  }

  FUNC_1(VAR_4);
 }

 FUNC_12(VAR_12);

 return (0);
}
