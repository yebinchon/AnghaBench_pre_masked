
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ichwd_softc {int tco_rid; int gc_rid; int smi_rid; int * smi_res; int * gc_res; int * tco_res; int tco_version; int ich_version; } ;
struct ichwd_device {int tco_version; int ich_version; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int *,int ,int*,scalar_t__,scalar_t__,scalar_t__,int) ;
 void* FUNC_1 (int *,int ,int*,int) ;
 int * FUNC_2 (int *) ;
 struct ichwd_softc* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *,struct ichwd_device**) ;
 int * FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8)
{
 struct ichwd_softc *VAR_9;
 struct ichwd_device *VAR_10;
 device_t VAR_11, VAR_12;
 device_t VAR_13;
 uint32_t VAR_14;

 VAR_9 = FUNC_3(VAR_8);
 VAR_13 = FUNC_5(FUNC_2(VAR_8), &VAR_10);
 if (VAR_13 == ((void*)0))
  return (VAR_0);

 VAR_9->ich_version = VAR_10->ich_version;
 VAR_9->tco_version = VAR_10->tco_version;


 VAR_9->tco_rid = 0;
 VAR_9->tco_res = FUNC_1(VAR_8, VAR_6, &VAR_9->tco_rid,
     VAR_2 | VAR_3);
 if (VAR_9->tco_res == ((void*)0)) {
  FUNC_4(VAR_8, "unable to reserve TCO registers\n");
  return (VAR_0);
 }





 VAR_9->gc_rid = 1;
 VAR_9->gc_res = FUNC_1(VAR_8, VAR_7, &VAR_9->gc_rid,
     VAR_2 | VAR_3);
 if (VAR_9->gc_res == ((void*)0)) {
  FUNC_4(VAR_8, "unable to reserve hidden P2SB registers\n");
  return (VAR_0);
 }


 VAR_11 = FUNC_2(FUNC_2(VAR_8));
 VAR_12 = FUNC_6(FUNC_8(VAR_11), FUNC_7(VAR_11), 31, 2);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_8, "unable to find Power Management device\n");
  return (VAR_0);
 }
 VAR_14 = FUNC_9(VAR_12, VAR_1, 4) & 0xffffff00;
 if (VAR_14 == 0) {
  FUNC_4(VAR_8, "ACPI base address is not set\n");
  return (VAR_0);
 }


 VAR_9->smi_rid = 2;
 VAR_9->smi_res = FUNC_0(VAR_8, VAR_6, &VAR_9->smi_rid,
     VAR_14 + VAR_4, VAR_14 + VAR_4 + VAR_5 - 1, VAR_5,
     VAR_2 | VAR_3);
 if (VAR_9->smi_res == ((void*)0)) {
  FUNC_4(VAR_8, "unable to reserve SMI registers\n");
  return (VAR_0);
 }

 return (0);
}
