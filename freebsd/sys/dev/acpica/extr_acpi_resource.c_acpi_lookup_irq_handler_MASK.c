
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct lookup_irq_request {scalar_t__ counter; scalar_t__ rid; int irq; int found; int pol; int trig; int * acpi_res; scalar_t__ checkrid; } ;
struct TYPE_8__ {int InterruptCount; int* Interrupts; int Triggering; int Polarity; } ;
struct TYPE_7__ {int InterruptCount; int* Interrupts; int Triggering; int Polarity; } ;
struct TYPE_9__ {TYPE_2__ ExtendedIrq; TYPE_1__ Irq; } ;
struct TYPE_10__ {int Type; TYPE_3__ Data; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_RESOURCE ;


 int VAR_0 ;
 int VAR_1 ;


 size_t FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_4__*,int *,size_t) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3(ACPI_RESOURCE *VAR_4, void *VAR_5)
{
    struct lookup_irq_request *VAR_6;
    size_t VAR_7;
    u_int VAR_8, VAR_9, VAR_10, VAR_11;

    switch (VAR_4->Type) {
    case 128:
 VAR_8 = VAR_4->Data.Irq.InterruptCount;
 VAR_9 = VAR_4->Data.Irq.Interrupts[0];
 VAR_7 = FUNC_0(VAR_1);
 VAR_10 = VAR_4->Data.Irq.Triggering;
 VAR_11 = VAR_4->Data.Irq.Polarity;
 break;
    case 129:
 VAR_8 = VAR_4->Data.ExtendedIrq.InterruptCount;
 VAR_9 = VAR_4->Data.ExtendedIrq.Interrupts[0];
 VAR_7 = FUNC_0(VAR_0);
 VAR_10 = VAR_4->Data.ExtendedIrq.Triggering;
 VAR_11 = VAR_4->Data.ExtendedIrq.Polarity;
 break;
    default:
 return (VAR_3);
    }
    if (VAR_8 != 1)
 return (VAR_3);
    VAR_6 = (struct lookup_irq_request *)VAR_5;
    if (VAR_6->checkrid) {
 if (VAR_6->counter != VAR_6->rid) {
     VAR_6->counter++;
     return (VAR_3);
 }
 FUNC_1(VAR_9 == VAR_6->irq, ("IRQ resources do not match"));
    } else {
 if (VAR_6->irq != VAR_9)
     return (VAR_3);
    }
    VAR_6->found = 1;
    VAR_6->pol = VAR_11;
    VAR_6->trig = VAR_10;
    if (VAR_6->acpi_res != ((void*)0))
 FUNC_2(VAR_4, VAR_6->acpi_res, VAR_7);
    return (VAR_2);
}
