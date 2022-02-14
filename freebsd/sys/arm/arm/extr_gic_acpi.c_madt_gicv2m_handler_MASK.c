
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gic_acpi_devinfo {int rl; } ;
struct arm_gic_softc {int * gic_dev; } ;
typedef int * device_t ;
struct TYPE_5__ {scalar_t__ BaseAddress; int SpiBase; int SpiCount; int Flags; int MsiFrameId; } ;
struct TYPE_4__ {scalar_t__ Type; } ;
typedef TYPE_1__ ACPI_SUBTABLE_HEADER ;
typedef TYPE_2__ ACPI_MADT_GENERIC_MSI_FRAME ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,char*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int *,struct gic_acpi_devinfo*) ;
 struct gic_acpi_devinfo* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ACPI_SUBTABLE_HEADER *VAR_6, void *VAR_7)
{
 struct arm_gic_softc *VAR_8;
 ACPI_MADT_GENERIC_MSI_FRAME *VAR_9;
 struct gic_acpi_devinfo *VAR_10;
 device_t VAR_11, VAR_12;

 if (VAR_6->Type == VAR_0) {
  VAR_8 = VAR_7;
  VAR_11 = VAR_8->gic_dev;
  VAR_9 = (ACPI_MADT_GENERIC_MSI_FRAME *)VAR_6;

  FUNC_1(VAR_11, "frame: %x %lx %x %u %u\n", VAR_9->MsiFrameId,
      VAR_9->BaseAddress, VAR_9->Flags, VAR_9->SpiCount, VAR_9->SpiBase);

  VAR_12 = FUNC_0(VAR_11, ((void*)0), -1);
  if (VAR_12 == ((void*)0))
   return;

  VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1, VAR_2 | VAR_3);
  FUNC_5(&VAR_10->rl);
  FUNC_4(&VAR_10->rl, VAR_5, 0,
      VAR_9->BaseAddress, VAR_9->BaseAddress + VAR_4 - 1,
      VAR_4);
  FUNC_2(VAR_12, VAR_10);
 }
}
