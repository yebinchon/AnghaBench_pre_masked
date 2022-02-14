
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct aibs_softc {int sc_dev; struct aibs_sensor* sc_asens_fan; struct aibs_sensor* sc_asens_temp; struct aibs_sensor* sc_asens_volt; int sc_ah; struct sysctl_oid* sc_fan_sysctl; struct sysctl_oid* sc_temp_sysctl; struct sysctl_oid* sc_volt_sysctl; } ;
struct aibs_sensor {int dummy; } ;
struct TYPE_11__ {TYPE_3__* Pointer; int Length; } ;
struct TYPE_9__ {int Count; TYPE_3__* Elements; } ;
struct TYPE_8__ {int Value; } ;
struct TYPE_10__ {scalar_t__ Type; TYPE_2__ Package; TYPE_1__ Integer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int ,char*,int *,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sysctl_oid* FUNC_3 (int ,int ,int,char const*,int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct aibs_softc*,TYPE_3__*,struct aibs_sensor*,char const**) ;
 int FUNC_6 (struct aibs_softc*,struct sysctl_oid*,char const*,int,struct aibs_sensor*,char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,char*,...) ;
 struct aibs_sensor* FUNC_10 (int,int ,int) ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static int
FUNC_12(struct aibs_softc *VAR_8, int VAR_9)
{
 char VAR_10[] = "?SIF";
 ACPI_STATUS VAR_11;
 ACPI_BUFFER VAR_12;
 ACPI_OBJECT *VAR_13, *VAR_14;
 const char *VAR_15;
 struct aibs_sensor *VAR_16;
 struct sysctl_oid **VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 switch (VAR_9) {
 case 128:
  VAR_15 = "volt";
  VAR_10[0] = 'V';
  VAR_17 = &VAR_8->sc_volt_sysctl;
  break;
 case 129:
  VAR_15 = "temp";
  VAR_10[0] = 'T';
  VAR_17 = &VAR_8->sc_temp_sysctl;
  break;
 case 130:
  VAR_15 = "fan";
  VAR_10[0] = 'F';
  VAR_17 = &VAR_8->sc_fan_sysctl;
  break;
 default:
  FUNC_11("Unsupported sensor type %d", VAR_9);
 }

 VAR_12.Length = VAR_0;
 VAR_11 = FUNC_1(VAR_8->sc_ah, VAR_10, ((void*)0), &VAR_12,
     VAR_2);
 if (FUNC_0(VAR_11)) {
  FUNC_9(VAR_8->sc_dev, "%s not found\n", VAR_10);
  return (VAR_4);
 }

 VAR_13 = VAR_12.Pointer;
 VAR_14 = VAR_13->Package.Elements;
 if (VAR_14[0].Type != VAR_1) {
  FUNC_9(VAR_8->sc_dev, "%s[0]: invalid type\n", VAR_10);
  FUNC_2(VAR_12.Pointer);
  return (VAR_4);
 }

 VAR_19 = VAR_14[0].Integer.Value;
 if (VAR_13->Package.Count - 1 < VAR_19) {
  FUNC_9(VAR_8->sc_dev, "%s: invalid package\n", VAR_10);
  FUNC_2(VAR_12.Pointer);
  return (VAR_4);
 } else if (VAR_13->Package.Count - 1 > VAR_19) {
  int VAR_21 = VAR_19;




  FUNC_9(VAR_8->sc_dev, "%s: malformed package: %i/%i"
      ", assume %i\n", VAR_10, VAR_21, VAR_13->Package.Count - 1, VAR_19);
 }
 if (VAR_19 < 1) {
  FUNC_9(VAR_8->sc_dev, "%s: no members in the package\n",
      VAR_10);
  FUNC_2(VAR_12.Pointer);
  return (VAR_4);
 }

 VAR_16 = FUNC_10(sizeof(*VAR_16) * VAR_19, VAR_5, VAR_6 | VAR_7);
 switch (VAR_9) {
 case 128:
  VAR_8->sc_asens_volt = VAR_16;
  break;
 case 129:
  VAR_8->sc_asens_temp = VAR_16;
  break;
 case 130:
  VAR_8->sc_asens_fan = VAR_16;
  break;
 }


 *VAR_17 = FUNC_3(FUNC_7(VAR_8->sc_dev),
     FUNC_4(FUNC_8(VAR_8->sc_dev)), VAR_9,
     VAR_15, VAR_3, ((void*)0), ((void*)0));

 for (VAR_18 = 0, VAR_14++; VAR_18 < VAR_19; VAR_18++, VAR_14++) {
  const char *VAR_22;

  VAR_20 = FUNC_5(VAR_8, VAR_14, &VAR_16[VAR_18], &VAR_22);
  if (VAR_20 == 0)
   FUNC_6(VAR_8, *VAR_17, VAR_15, VAR_18, &VAR_16[VAR_18], VAR_22);
 }

 FUNC_2(VAR_12.Pointer);
 return (0);
}
