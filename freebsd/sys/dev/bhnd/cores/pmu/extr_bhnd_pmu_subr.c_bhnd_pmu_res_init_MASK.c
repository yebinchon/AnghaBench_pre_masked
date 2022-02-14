
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int chip_id; } ;
struct bhnd_pmu_softc {int chipc_dev; int caps; TYPE_1__ cid; } ;
struct TYPE_6__ {scalar_t__ resnum; scalar_t__ updown; } ;
typedef TYPE_2__ pmu_res_updown_t ;
typedef int (* pmu_res_filter ) (struct bhnd_pmu_softc*) ;
struct TYPE_7__ {int res_mask; int action; scalar_t__ depend_mask; int (* filter ) (struct bhnd_pmu_softc*) ;} ;
typedef TYPE_3__ pmu_res_depend_t ;
typedef int name ;
struct TYPE_8__ {int depend_mask; } ;
 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct bhnd_pmu_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bhnd_pmu_softc*,int ,scalar_t__) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct bhnd_pmu_softc*,char*,scalar_t__,...) ;
 int FUNC_7 (struct bhnd_pmu_softc*,char*,char*,int) ;



 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_8 (int ,char*,scalar_t__*) ;
 int FUNC_9 (struct bhnd_pmu_softc*,scalar_t__*,scalar_t__*) ;
 size_t FUNC_10 (void*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,int,char*,scalar_t__) ;
 TYPE_4__* VAR_21 ;

int
FUNC_13(struct bhnd_pmu_softc *VAR_22)
{
 const pmu_res_updown_t *VAR_23;
 const pmu_res_depend_t *VAR_24;
 size_t VAR_25;
 size_t VAR_26;
 uint32_t VAR_27, VAR_28;
 uint8_t VAR_29;
 int VAR_30;

 VAR_24 = ((void*)0);
 VAR_26 = 0;

 VAR_23 = ((void*)0);
 VAR_25 = 0;

 switch (VAR_22->cid.chip_id) {
 case 137:

  VAR_23 = VAR_8;
  VAR_25 = FUNC_10(VAR_8);


  VAR_24 = VAR_7;
  VAR_26 = FUNC_10(VAR_7);
  break;

 case 135:

  VAR_23 = VAR_12;
  VAR_25 = FUNC_10(VAR_12);


  VAR_24 = VAR_11;
  VAR_26 = FUNC_10(VAR_11);
  break;

 case 134:

  VAR_23 = VAR_14;
  VAR_25 = FUNC_10(VAR_14);


  VAR_24 = VAR_13;
  VAR_26 = FUNC_10(VAR_13);
  break;

 case 133:

  VAR_23 = VAR_16;
  VAR_25 = FUNC_10(VAR_16);


  VAR_24 = VAR_15;
  VAR_26 = FUNC_10(VAR_15);
  break;

 case 136:

  VAR_23 = VAR_10;
  VAR_25 = FUNC_10(VAR_10);


  VAR_24 = VAR_9;
  VAR_26 = FUNC_10(VAR_9);
  break;

 case 131:

  VAR_23 = VAR_20;
  VAR_25 = FUNC_10(VAR_20);


  VAR_24 = VAR_19;
  VAR_26 = FUNC_10(VAR_19);
  break;

 case 132:

  VAR_23 = VAR_18;
  VAR_25 = FUNC_10(VAR_18);


  VAR_24 = VAR_17;
  VAR_26 = FUNC_10(VAR_17);
  break;
 default:
  break;
 }


 VAR_29 = FUNC_1(VAR_22->caps, VAR_0);


 for (size_t VAR_31 = 0; VAR_31 < VAR_25; VAR_31++) {
  const pmu_res_updown_t *VAR_32;

  FUNC_5(VAR_23 != ((void*)0), ("no updown tables"));

  VAR_32 = &VAR_23[VAR_25 - VAR_31 - 1];

  FUNC_6(VAR_22, "Changing rsrc %d res_updn_timer to %#x\n",
      VAR_32->resnum, VAR_32->updown);

  FUNC_3(VAR_22, VAR_4, VAR_32->resnum);
  FUNC_3(VAR_22, VAR_5, VAR_32->updown);
 }


 for (uint8_t VAR_33 = 0; VAR_33 < VAR_29; VAR_33++) {
  char VAR_34[6];
  uint32_t VAR_35;

  FUNC_12(VAR_34, sizeof(VAR_34), "r%dt", VAR_33);
  VAR_30 = FUNC_8(VAR_22->chipc_dev, VAR_34, &VAR_35);

  if (VAR_30 == VAR_6) {
   continue;
  } else if (VAR_30) {
   FUNC_7(VAR_22, "NVRAM error reading %s: %d\n",
       VAR_34, VAR_30);
   return (VAR_30);
  }

  FUNC_6(VAR_22, "Applying %s=%d to rsrc %d res_updn_timer\n",
      VAR_34, VAR_35, VAR_33);

  FUNC_3(VAR_22, VAR_4, VAR_33);
  FUNC_3(VAR_22, VAR_5, VAR_35);
 }


 for (size_t VAR_36 = 0; VAR_36 < VAR_26; VAR_36++) {
  const pmu_res_depend_t *VAR_37;
  pmu_res_filter VAR_38;
  uint32_t VAR_39;

  FUNC_5(VAR_24 != ((void*)0), ("no depend tables"));

  VAR_37 = &VAR_24[VAR_26 - VAR_36 - 1];
  VAR_38 = VAR_37->filter;

  if (VAR_38 != ((void*)0) && !VAR_38(VAR_22))
   continue;

  for (uint8_t VAR_40 = 0; VAR_40 < VAR_29; VAR_40++) {
   if ((VAR_37->res_mask & FUNC_0(VAR_40)) == 0)
    continue;

   FUNC_3(VAR_22, VAR_4, VAR_40);
   VAR_39 = FUNC_2(VAR_22,
       VAR_3);
   switch (VAR_37->action) {
   case 128:
    FUNC_6(VAR_22, "Changing rsrc %hhu res_dep_mask to "
        "%#x\n", VAR_40, VAR_21->depend_mask);
    VAR_39 = VAR_37->depend_mask;
    break;

   case 130:
    FUNC_6(VAR_22, "Adding %#x to rsrc %hhu "
        "res_dep_mask\n", VAR_21->depend_mask, VAR_40);

    VAR_39 |= VAR_37->depend_mask;
    break;

   case 129:
    FUNC_6(VAR_22, "Removing %#x from rsrc %hhu "
        "res_dep_mask\n", VAR_21->depend_mask, VAR_40);

    VAR_39 &= ~(VAR_37->depend_mask);
    break;

   default:
    FUNC_11("unknown RES_DEPEND action: %d\n",
        VAR_37->action);
    break;
   }


  }
 }


 for (uint8_t VAR_41 = 0; VAR_41 < VAR_29; VAR_41++) {
  char VAR_42[6];
  uint32_t VAR_43;

  FUNC_12(VAR_42, sizeof(VAR_42), "r%dd", VAR_41);
  VAR_30 = FUNC_8(VAR_22->chipc_dev, VAR_42, &VAR_43);

  if (VAR_30 == VAR_6) {
   continue;
  } else if (VAR_30) {
   FUNC_7(VAR_22, "NVRAM error reading %s: %d\n", VAR_42,
       VAR_30);
   return (VAR_30);
  }

  FUNC_6(VAR_22, "Applying %s=%d to rsrc %d res_dep_mask\n", VAR_42,
      VAR_43, VAR_41);

  FUNC_3(VAR_22, VAR_4, VAR_41);
  FUNC_3(VAR_22, VAR_3, VAR_43);
 }


 if ((VAR_30 = FUNC_9(VAR_22, &VAR_28, &VAR_27)))
  return (VAR_30);




 if (VAR_27 != 0) {
  FUNC_6(VAR_22, "Changing max_res_mask to 0x%x\n", VAR_27);
  FUNC_3(VAR_22, VAR_1, VAR_27);
 }



 if (VAR_28 != 0) {
  FUNC_6(VAR_22, "Changing min_res_mask to 0x%x\n", VAR_28);
  FUNC_3(VAR_22, VAR_2, VAR_28);
 }


 FUNC_4(2000);

 return (0);
}
