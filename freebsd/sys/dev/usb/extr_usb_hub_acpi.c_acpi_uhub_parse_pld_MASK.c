
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct acpi_uhub_softc {struct acpi_uhub_port* port; } ;
struct acpi_uhub_port {int pld; } ;
typedef int resbuf ;
typedef int device_t ;
struct TYPE_10__ {TYPE_3__* Pointer; int Length; } ;
struct TYPE_8__ {int Length; unsigned char* Pointer; } ;
struct TYPE_7__ {TYPE_3__* Elements; } ;
struct TYPE_9__ {scalar_t__ Type; TYPE_2__ Buffer; TYPE_1__ Package; } ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*,int *,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,struct sysctl_oid_list*,int ,char*,int,int ,int,char*,char*) ;
 struct acpi_uhub_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_9, unsigned int VAR_10, ACPI_HANDLE VAR_11, struct sysctl_oid_list *VAR_12)
{
 ACPI_BUFFER VAR_13;
 struct acpi_uhub_softc *VAR_14 = FUNC_3(VAR_9);
 struct acpi_uhub_port *VAR_15 = &VAR_14->port[VAR_10 - 1];

 VAR_13.Pointer = ((void*)0);
 VAR_13.Length = VAR_0;

 if (FUNC_0(VAR_11, "_PLD", ((void*)0), &VAR_13) == VAR_4) {
  ACPI_OBJECT *VAR_16;
  unsigned char *VAR_17;
  int VAR_18;

  VAR_16 = VAR_13.Pointer;

  if (VAR_16->Type == VAR_3
      && VAR_16->Package.Elements[0].Type == VAR_2) {
   ACPI_OBJECT *VAR_19;

   VAR_19 = &VAR_16->Package.Elements[0];
   VAR_18 = VAR_19->Buffer.Length;
   VAR_17 = VAR_19->Buffer.Pointer;
  } else if (VAR_16->Type == VAR_2) {
   VAR_18 = VAR_16->Buffer.Length;
   VAR_17 = VAR_16->Buffer.Pointer;
  } else {
   goto skip;
  }
  VAR_18 = (VAR_18 < VAR_1) ? VAR_18 : VAR_1;
  FUNC_6(VAR_15->pld, VAR_17, VAR_18);
  FUNC_2(
      FUNC_4(VAR_9), VAR_12, VAR_7,
      "pldraw", VAR_6 | VAR_5,
      VAR_15->pld, VAR_18, "A", "Raw PLD value");

  if (VAR_8) {
   FUNC_5(VAR_9, "Revision:%d\n",
       VAR_17[0] & 0x7f);
   if ((VAR_17[0] & 0x80) == 0) {
    FUNC_5(VAR_9,
        "Color:#%02x%02x%02x\n",
        VAR_17[1], VAR_17[2],
        VAR_17[3]);
   }
   FUNC_5(VAR_9, "Width %d mm Height %d mm\n",
       VAR_17[4] | (VAR_17[5] << 8),
       VAR_17[6] | (VAR_17[7] << 8));
   if (VAR_17[8] & 1) {
    FUNC_5(VAR_9, "Visible\n");
   }
   if (VAR_17[8] & 2) {
    FUNC_5(VAR_9, "Dock\n");
   }
   if (VAR_17[8] & 4) {
    FUNC_5(VAR_9, "Lid\n");
   }
   FUNC_5(VAR_9, "PanelPosition: %d\n",
       (VAR_17[8] >> 3) & 7);
   FUNC_5(VAR_9, "VertPosition: %d\n",
       (VAR_17[8] >> 6) & 3);
   FUNC_5(VAR_9, "HorizPosition: %d\n",
       (VAR_17[9]) & 3);
   FUNC_5(VAR_9, "Shape: %d\n",
       (VAR_17[9] >> 2) & 0xf);
   FUNC_5(VAR_9, "80: %02x, %02x, %02x\n",
       VAR_17[9], VAR_17[10], VAR_17[11]);
   FUNC_5(VAR_9, "96: %02x, %02x, %02x, %02x\n",
       VAR_17[12], VAR_17[13],
       VAR_17[14], VAR_17[15]);

   if ((VAR_17[0] & 0x7f) >= 2) {
    FUNC_5(VAR_9, "VOFF%d mm HOFF %dmm",
        VAR_17[16] | (VAR_17[17] << 8),
        VAR_17[18] | (VAR_17[19] << 8));
   }
  }
 skip:
  FUNC_1(VAR_13.Pointer);
 }
 return (0);
}
