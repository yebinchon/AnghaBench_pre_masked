
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct sysctl_oid_list {int dummy; } ;
struct acpi_uhub_softc {struct acpi_uhub_port* port; } ;
struct acpi_uhub_port {scalar_t__ upc; } ;
typedef int device_t ;
typedef scalar_t__ UINT64 ;
struct TYPE_3__ {int * Pointer; int Length; } ;
typedef int ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,struct sysctl_oid_list*,int ,char*,int,int ,scalar_t__,char*) ;
 int VAR_6 ;
 int FUNC_3 (int *,int,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 struct acpi_uhub_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,unsigned int,char*,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_8, unsigned int VAR_9, ACPI_HANDLE VAR_10, struct sysctl_oid_list *VAR_11)
{
 ACPI_BUFFER VAR_12;
 struct acpi_uhub_softc *VAR_13 = FUNC_5(VAR_8);
 struct acpi_uhub_port *VAR_14 = &VAR_13->port[VAR_9 - 1];

 VAR_12.Pointer = ((void*)0);
 VAR_12.Length = VAR_0;

 if (FUNC_0(VAR_10, "_UPC", ((void*)0), &VAR_12) == VAR_2) {
  ACPI_OBJECT *VAR_15 = VAR_12.Pointer;
  UINT64 VAR_16, VAR_17;
  uint8_t *VAR_18;

  FUNC_3(VAR_15, 0, &VAR_17);
  FUNC_3(VAR_15, 1, &VAR_16);
  VAR_18 = VAR_17 ? "" : "non";

  VAR_14->upc = VAR_16;
  VAR_14->upc |= (VAR_17) ? (VAR_1) : 0;

  if (VAR_7)
   FUNC_7(VAR_8, "Port %u %sconnectable %s\n",
       VAR_9, VAR_18,
       FUNC_4(VAR_16));

  FUNC_2(
      FUNC_6(VAR_8),
      VAR_11, VAR_5,
      "upc",
      VAR_4 | VAR_3,
      VAR_6, VAR_14->upc,
      "UPC value. MSB is visible flag");
 }
 FUNC_1(VAR_12.Pointer);

 return (0);
}
