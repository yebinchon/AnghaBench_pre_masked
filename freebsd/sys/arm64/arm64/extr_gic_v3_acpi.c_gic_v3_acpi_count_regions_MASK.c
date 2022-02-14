
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct TYPE_7__ {scalar_t__ nregions; } ;
struct gic_v3_softc {TYPE_1__ gic_redists; } ;
typedef int device_t ;
struct TYPE_8__ {int Length; } ;
struct TYPE_9__ {TYPE_2__ Header; } ;
typedef TYPE_3__ ACPI_TABLE_MADT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*,int ,struct gic_v3_softc*) ;
 struct gic_v3_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct gic_v3_softc *VAR_4;
 ACPI_TABLE_MADT *VAR_5;
 vm_paddr_t VAR_6;

 VAR_4 = FUNC_4(VAR_3);

 VAR_6 = FUNC_0(VAR_0);
 if (VAR_6 == 0)
  return (VAR_1);

 VAR_5 = FUNC_1(VAR_6, VAR_0);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(VAR_3, "Unable to map the MADT\n");
  return (VAR_1);
 }

 FUNC_3(VAR_5 + 1, (char *)VAR_5 + VAR_5->Header.Length,
     VAR_2, VAR_4);
 FUNC_2(VAR_5);

 return (VAR_4->gic_redists.nregions > 0 ? 0 : VAR_1);
}
