
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct gic_v3_softc {int gic_nchildren; } ;
struct TYPE_5__ {int gic_domain; int msi_xref; } ;
struct gic_v3_acpi_devinfo {TYPE_1__ di_gic_dinfo; int di_rl; } ;
typedef int * device_t ;
struct TYPE_7__ {int TranslationId; scalar_t__ BaseAddress; } ;
struct TYPE_6__ {scalar_t__ Type; } ;
typedef TYPE_2__ ACPI_SUBTABLE_HEADER ;
typedef TYPE_3__ ACPI_MADT_GENERIC_TRANSLATOR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int*) ;
 int * FUNC_1 (int *,char*,int) ;
 struct gic_v3_softc* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct gic_v3_acpi_devinfo*) ;
 struct gic_v3_acpi_devinfo* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(ACPI_SUBTABLE_HEADER *VAR_6, void *VAR_7)
{
 ACPI_MADT_GENERIC_TRANSLATOR *VAR_8;
 struct gic_v3_acpi_devinfo *VAR_9;
 struct gic_v3_softc *VAR_10;
 device_t VAR_11, VAR_12;
 u_int VAR_13;
 int VAR_14, VAR_15;

 if (VAR_6->Type == VAR_0) {

  VAR_8 = (ACPI_MADT_GENERIC_TRANSLATOR *)VAR_6;
  VAR_12 = VAR_7;
  VAR_10 = FUNC_2(VAR_12);

  VAR_11 = FUNC_1(VAR_12, "its", -1);
  if (VAR_11 == ((void*)0))
   return;

  VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2, VAR_3 | VAR_4);
  FUNC_6(&VAR_9->di_rl);
  FUNC_5(&VAR_9->di_rl, VAR_5, 0,
      VAR_8->BaseAddress, VAR_8->BaseAddress + 128 * 1024 - 1,
      128 * 1024);
  VAR_14 = FUNC_0(VAR_8->TranslationId, &VAR_13, &VAR_15);
  if (VAR_14 == 0) {
   VAR_9->di_gic_dinfo.gic_domain = VAR_15;
   VAR_9->di_gic_dinfo.msi_xref = VAR_13;
  } else {
   VAR_9->di_gic_dinfo.gic_domain = -1;
   VAR_9->di_gic_dinfo.msi_xref = VAR_1;
  }
  VAR_10->gic_nchildren++;
  FUNC_3(VAR_11, VAR_9);
 }
}
