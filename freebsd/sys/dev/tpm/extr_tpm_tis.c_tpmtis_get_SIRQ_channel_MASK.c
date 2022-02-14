
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct tpm_sc {int dummy; } ;
struct TYPE_7__ {int * Interrupts; } ;
struct TYPE_6__ {int * Interrupts; } ;
struct TYPE_8__ {TYPE_2__ ExtendedIrq; TYPE_1__ Irq; } ;
struct TYPE_9__ {int Type; TYPE_3__ Data; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_RESOURCE ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_sc*,int ,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_1(ACPI_RESOURCE *VAR_2, void *VAR_3)
{
 struct tpm_sc *VAR_4;
 uint8_t VAR_5;

 VAR_4 = (struct tpm_sc *)VAR_3;

 switch (VAR_2->Type) {
 case 128:
  VAR_5 = VAR_2->Data.Irq.Interrupts[0];
  break;
 case 129:
  VAR_5 = VAR_2->Data.ExtendedIrq.Interrupts[0];
  break;
 default:
  return (VAR_0);
 }

 FUNC_0(VAR_4, VAR_1, VAR_5);
 return (VAR_0);
}
