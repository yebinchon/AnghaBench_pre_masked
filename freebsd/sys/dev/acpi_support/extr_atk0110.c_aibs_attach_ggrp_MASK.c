
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct aibs_softc {int sc_dev; struct sysctl_oid* sc_fan_sysctl; struct sysctl_oid* sc_temp_sysctl; struct sysctl_oid* sc_volt_sysctl; struct aibs_sensor* sc_asens_all; int sc_ah; } ;
struct aibs_sensor {int t; } ;
struct TYPE_13__ {TYPE_4__* Pointer; int Length; } ;
struct TYPE_10__ {int Count; int * Elements; } ;
struct TYPE_9__ {int Value; } ;
struct TYPE_12__ {TYPE_2__ Package; int Type; TYPE_1__ Integer; } ;
struct TYPE_11__ {int Count; TYPE_4__* Pointer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OBJECT_LIST ;
typedef TYPE_4__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_5__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int ,char*,TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sysctl_oid* FUNC_4 (int ,int ,int,char const*,int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct aibs_softc*,int *,struct aibs_sensor*,char const**) ;
 int FUNC_7 (struct aibs_softc*,struct sysctl_oid*,char const*,int,struct aibs_sensor*,char const*) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 struct aibs_sensor* FUNC_11 (int,int ,int) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static int
FUNC_13(struct aibs_softc *VAR_10)
{
 ACPI_STATUS VAR_11;
 ACPI_BUFFER VAR_12;
 ACPI_HANDLE VAR_13;
 ACPI_OBJECT VAR_14;
 ACPI_OBJECT *VAR_15;
 ACPI_OBJECT_LIST VAR_16;
 int VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21;
 int *VAR_22;
 const char *VAR_23;
 const char *VAR_24;
 struct aibs_sensor *VAR_25;
 struct sysctl_oid **VAR_26;


 VAR_11 = FUNC_2(VAR_10->sc_ah, "GITM", &VAR_13);
 if (FUNC_0(VAR_11)) {
  if (VAR_9)
   FUNC_10(VAR_10->sc_dev, "GITM not found\n");
  return (VAR_5);
 }






 VAR_14.Integer.Value = VAR_3;
 VAR_14.Type = VAR_1;
 VAR_16.Count = 1;
 VAR_16.Pointer = &VAR_14;
 VAR_12.Length = VAR_0;
 VAR_12.Pointer = ((void*)0);
 VAR_11 = FUNC_1(VAR_10->sc_ah, "GGRP", &VAR_16, &VAR_12,
     VAR_2);
 if (FUNC_0(VAR_11)) {
  FUNC_10(VAR_10->sc_dev, "GGRP not found\n");
  return (VAR_5);
 }

 VAR_15 = VAR_12.Pointer;
 VAR_10->sc_asens_all = FUNC_11(sizeof(*VAR_10->sc_asens_all) * VAR_15->Package.Count,
     VAR_6, VAR_7 | VAR_8);
 VAR_19 = VAR_18 = VAR_20 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_15->Package.Count; VAR_17++) {
  VAR_25 = &VAR_10->sc_asens_all[VAR_17];
  VAR_21 = FUNC_6(VAR_10, &VAR_15->Package.Elements[VAR_17], VAR_25,
      &VAR_24);
  if (VAR_21 != 0)
   continue;

  switch (VAR_25->t) {
  case 128:
   VAR_23 = "volt";
   VAR_26 = &VAR_10->sc_volt_sysctl;
   VAR_22 = &VAR_19;
   break;
  case 129:
   VAR_23 = "temp";
   VAR_26 = &VAR_10->sc_temp_sysctl;
   VAR_22 = &VAR_18;
   break;
  case 130:
   VAR_23 = "fan";
   VAR_26 = &VAR_10->sc_fan_sysctl;
   VAR_22 = &VAR_20;
   break;
  default:
   FUNC_12("add_sensor succeeded for unknown sensor type %d",
       VAR_25->t);
  }

  if (*VAR_26 == ((void*)0)) {

   *VAR_26 = FUNC_4(FUNC_8(VAR_10->sc_dev),
       FUNC_5(FUNC_9(VAR_10->sc_dev)),
       VAR_25->t, VAR_23, VAR_4, ((void*)0), ((void*)0));
  }
  FUNC_7(VAR_10, *VAR_26, VAR_23, *VAR_22, VAR_25, VAR_24);
  *VAR_22 += 1;
 }

 FUNC_3(VAR_12.Pointer);
 return (0);
}
