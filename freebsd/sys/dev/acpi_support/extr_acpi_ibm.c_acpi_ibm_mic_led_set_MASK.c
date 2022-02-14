
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_ibm_softc {int mic_led_state; int handle; scalar_t__ mic_led_handle; } ;
struct TYPE_5__ {int Value; } ;
struct TYPE_7__ {TYPE_1__ Integer; int Type; } ;
struct TYPE_6__ {int Count; TYPE_3__* Pointer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,TYPE_2__*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2 (struct acpi_ibm_softc *VAR_2, int VAR_3)
{
 ACPI_OBJECT_LIST VAR_4;
 ACPI_OBJECT VAR_5[1];
 ACPI_STATUS VAR_6;

 if (VAR_3 < 0 || VAR_3 > 1)
  return (VAR_1);

 if (VAR_2->mic_led_handle) {
  VAR_5[0].Type = VAR_0;
  VAR_5[0].Integer.Value = 0;

  if (VAR_3 == 1)
   VAR_5[0].Integer.Value = 2;

  VAR_4.Pointer = VAR_5;
  VAR_4.Count = 1;

  VAR_6 = FUNC_1 (VAR_2->handle, "MMTS", &VAR_4, ((void*)0));
  if (FUNC_0(VAR_6))
   VAR_2->mic_led_state = VAR_3;
  return(VAR_6);
 }

 return (0);
}
