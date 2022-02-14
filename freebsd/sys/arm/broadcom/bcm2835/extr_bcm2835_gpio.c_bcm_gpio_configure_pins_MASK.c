
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_gpio_softc {int dummy; } ;
typedef int phandle_t ;
typedef int name ;
typedef int function ;
typedef int device_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*,int,void**) ;
 int FUNC_2 (int ,char*,char**,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int,int) ;
 scalar_t__ VAR_4 ;
 struct bcm_gpio_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5, phandle_t VAR_6)
{
 phandle_t VAR_7;
 int VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11;
 uint32_t *VAR_12;
 uint32_t *VAR_13;
 uint32_t VAR_14;
 static struct bcm_gpio_softc *VAR_15;

 VAR_15 = FUNC_7(VAR_5);
 VAR_7 = FUNC_3(VAR_6);

 VAR_12 = ((void*)0);
 VAR_9 = FUNC_1(VAR_7, "brcm,pins",
     sizeof(*VAR_12), (void **)&VAR_12);

 char VAR_16[32];
 FUNC_2(VAR_7, "name", &VAR_16, sizeof(VAR_16));

 if (VAR_9 < 0)
  return (VAR_1);

 if (VAR_9 == 0)
  return (0);

 if (FUNC_0(VAR_7, "brcm,function", &VAR_14,
     sizeof(VAR_14)) <= 0) {
  FUNC_4(VAR_12);
  return (VAR_0);
 }

 VAR_13 = ((void*)0);
 VAR_10 = FUNC_1(VAR_7, "brcm,pull",
     sizeof(*VAR_13), (void **)&VAR_13);

 if ((VAR_13 != ((void*)0)) && (VAR_10 != VAR_9)) {
  FUNC_4(VAR_12);
  FUNC_4(VAR_13);
  return (VAR_0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_11 = VAR_12[VAR_8];
  FUNC_6(VAR_5, VAR_11, VAR_14);
  if (VAR_4)
   FUNC_8(VAR_5, "set pin %d to func %d", VAR_11, VAR_14);
  if (VAR_13) {
   if (VAR_4)
    FUNC_9(", pull %d", VAR_13[VAR_8]);
   switch (VAR_13[VAR_8]) {

   case 129:
    FUNC_5(VAR_5, VAR_11, 0);
    break;
   case 128:
    FUNC_5(VAR_5, VAR_11, VAR_3);
    break;
   case 130:
    FUNC_5(VAR_5, VAR_11, VAR_2);
    break;
   default:
    FUNC_9("%s: invalid pull value for pin %d: %d\n",
        VAR_16, VAR_11, VAR_13[VAR_8]);
   }
  }
  if (VAR_4)
   FUNC_9("\n");
 }

 FUNC_4(VAR_12);
 if (VAR_13)
  FUNC_4(VAR_13);

 return (0);
}
