
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct atkbdc_device {int dummy; } ;
typedef scalar_t__ rman_res_t ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;
struct TYPE_9__ {int retry; int * port0; int * port1; } ;
typedef TYPE_1__ atkbdc_softc_t ;
struct TYPE_10__ {int resources; int rid; } ;
typedef TYPE_2__ atkbdc_device_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int,TYPE_1__*,int *,int *) ;
 TYPE_1__* FUNC_5 (int) ;
 void* FUNC_6 (int *,int ,int*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int,int *) ;
 int * FUNC_11 (int *,char*,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,...) ;
 int FUNC_15 (int *,TYPE_2__*) ;
 int FUNC_16 (int *,TYPE_1__*) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_18 (int,int ,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (char*,char*) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_13)
{
 atkbdc_softc_t *VAR_14;
 atkbdc_device_t *VAR_15;
 device_t VAR_16;
 phandle_t VAR_17;
 rman_res_t VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 char *VAR_25, *VAR_26;

 VAR_24 = FUNC_13(VAR_13);
 VAR_14 = *(atkbdc_softc_t **)FUNC_12(VAR_13);
 if (VAR_14 == ((void*)0)) {







  VAR_14 = FUNC_5(VAR_24);
  if (VAR_14 == ((void*)0))
   return (VAR_1);
  FUNC_16(VAR_13, VAR_14);
 }

 VAR_23 = 0;
 if (FUNC_8(VAR_13, VAR_12, VAR_23, &VAR_20, &VAR_18) != 0) {
  FUNC_14(VAR_13,
      "cannot determine command/data port resource\n");
  return (VAR_2);
 }
 VAR_14->retry = 5000;
 VAR_14->port0 = FUNC_6(VAR_13, VAR_12, &VAR_23, VAR_20, VAR_20,
     1, VAR_10);
 if (VAR_14->port0 == ((void*)0)) {
  FUNC_14(VAR_13,
      "cannot allocate command/data port resource\n");
  return (VAR_2);
 }

 VAR_23 = 1;
 if (FUNC_8(VAR_13, VAR_12, VAR_23, &VAR_20, &VAR_18) != 0) {
  FUNC_14(VAR_13, "cannot determine status port resource\n");
  VAR_22 = VAR_2;
  goto fail_port0;
 }
 VAR_20 += VAR_5;
 VAR_14->port1 = FUNC_6(VAR_13, VAR_12, &VAR_23, VAR_20, VAR_20,
     1, VAR_10);
 if (VAR_14->port1 == ((void*)0)) {
  FUNC_14(VAR_13, "cannot allocate status port resource\n");
  VAR_22 = VAR_2;
  goto fail_port0;
 }

 VAR_22 = FUNC_4(VAR_24, VAR_14, VAR_14->port0, VAR_14->port1);
 if (VAR_22 != 0) {
  FUNC_14(VAR_13, "atkbdc_attach_unit failed\n");
  goto fail_port1;
 }


 VAR_21 = 0;
 for (VAR_17 = FUNC_0(FUNC_19(VAR_13)); VAR_17 != 0;
     VAR_17 = FUNC_2(VAR_17)) {
  if ((FUNC_1(VAR_17, "name", (void **)&VAR_25)) == -1)
   continue;
  if (VAR_21 >= 2) {
   FUNC_14(VAR_13,
       "<%s>: only two children per 8042 supported\n",
       VAR_25);
   FUNC_3(VAR_25);
   continue;
  }
  VAR_15 = FUNC_18(sizeof(struct atkbdc_device), VAR_6,
      VAR_7 | VAR_8);
  if (VAR_15 == ((void*)0)) {
   FUNC_14(VAR_13, "<%s>: malloc failed\n", VAR_25);
   FUNC_3(VAR_25);
   continue;
  }
  if (FUNC_23(VAR_25, "kb_ps2") == 0) {
   VAR_15->rid = VAR_4;
   VAR_26 = VAR_0;
  } else if (FUNC_23(VAR_25, "kdmouse") == 0) {
   VAR_15->rid = VAR_3;
   VAR_26 = VAR_9;
  } else {
   FUNC_14(VAR_13, "<%s>: unknown device\n", VAR_25);
   FUNC_17(VAR_15, VAR_6);
   FUNC_3(VAR_25);
   continue;
  }
  VAR_19 = FUNC_9(VAR_13, VAR_11, VAR_15->rid);
  if (VAR_19 == 0) {
   FUNC_14(VAR_13,
       "<%s>: cannot determine interrupt resource\n",
       VAR_25);
   FUNC_17(VAR_15, VAR_6);
   FUNC_3(VAR_25);
   continue;
  }
  FUNC_22(&VAR_15->resources);
  FUNC_20(&VAR_15->resources, VAR_11, VAR_15->rid,
      VAR_19, VAR_19, 1);
  if ((VAR_16 = FUNC_11(VAR_13, VAR_26, -1)) == ((void*)0)) {
   FUNC_14(VAR_13, "<%s>: device_add_child failed\n",
       VAR_25);
   FUNC_21(&VAR_15->resources);
   FUNC_17(VAR_15, VAR_6);
   FUNC_3(VAR_25);
   continue;
  }
  FUNC_15(VAR_16, VAR_15);
  VAR_21++;
 }

 VAR_22 = FUNC_7(VAR_13);
 if (VAR_22 != 0) {
  FUNC_14(VAR_13, "bus_generic_attach failed\n");
  goto fail_port1;
 }

 return (0);

 fail_port1:
 FUNC_10(VAR_13, VAR_12, 1, VAR_14->port1);
 fail_port0:
 FUNC_10(VAR_13, VAR_12, 0, VAR_14->port0);

 return (VAR_22);
}
