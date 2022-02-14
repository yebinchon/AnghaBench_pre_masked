
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct vtdmap {int cap; } ;
typedef int envname ;
struct TYPE_9__ {unsigned long Address; } ;
struct TYPE_8__ {int Length; scalar_t__ Type; } ;
struct TYPE_6__ {int Length; } ;
struct TYPE_7__ {TYPE_1__ Header; } ;
typedef int ACPI_TABLE_HEADER ;
typedef TYPE_2__ ACPI_TABLE_DMAR ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_DMAR_HEADER ;
typedef TYPE_4__ ACPI_DMAR_HARDWARE_UNIT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_4__** VAR_8 ;
 scalar_t__ FUNC_4 (char*,unsigned long*) ;
 int VAR_9 ;
 int FUNC_5 (char*,...) ;
 int* VAR_10 ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (struct vtdmap*) ;
 struct vtdmap** VAR_11 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(void)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 struct vtdmap *VAR_16;
 vm_paddr_t VAR_17;
 char *VAR_18, VAR_19[32];
 unsigned long VAR_20;
 ACPI_STATUS VAR_21;
 ACPI_TABLE_DMAR *VAR_22;
 ACPI_DMAR_HEADER *VAR_23;
 ACPI_DMAR_HARDWARE_UNIT *VAR_24;
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  FUNC_6(VAR_19, sizeof(VAR_19), "vtd.regmap.%d.addr", VAR_13);
  if (FUNC_4(VAR_19, &VAR_20) == 0)
   break;
  VAR_11[VAR_13] = (struct vtdmap *)FUNC_2(VAR_20);
 }

 if (VAR_13 > 0)
  goto skip_dmar;


 VAR_21 = FUNC_1(VAR_1, 0, (ACPI_TABLE_HEADER **)&VAR_22);
 if (FUNC_0(VAR_21))
  return (VAR_3);

 VAR_18 = (char *)VAR_22 + VAR_22->Header.Length;
 VAR_14 = VAR_22->Header.Length - sizeof(ACPI_TABLE_DMAR);
 while (VAR_14 > sizeof(ACPI_DMAR_HEADER)) {
  VAR_23 = (ACPI_DMAR_HEADER *)(VAR_18 - VAR_14);
  if (VAR_23->Length > VAR_14)
   break;







  if (VAR_23->Type != VAR_0)
   break;

  VAR_24 = (ACPI_DMAR_HARDWARE_UNIT *)VAR_23;
  VAR_8[VAR_13] = VAR_24;
  VAR_11[VAR_13] = (struct vtdmap *)FUNC_2(VAR_24->Address);
  if (++VAR_13 >= VAR_2)
   break;
  VAR_14 -= VAR_23->Length;
 }

 if (VAR_13 <= 0)
  return (VAR_3);

skip_dmar:
 VAR_7 = VAR_13;

 VAR_9 = 64 * 1024;
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++){
  VAR_16 = VAR_11[VAR_12];

  if (FUNC_3(VAR_16->cap) != 0)
   FUNC_5("vtd_init: invalid caching mode");


  if ((VAR_15 = FUNC_7(VAR_16)) < VAR_9)
   VAR_9 = VAR_15;
 }




 for (VAR_12 = 0; VAR_12 < 256; VAR_12++) {
  VAR_17 = FUNC_8(VAR_6[VAR_12]);
  if (VAR_17 & VAR_4)
   FUNC_5("ctx table (0x%0lx) not page aligned", VAR_17);

  VAR_10[VAR_12 * 2] = VAR_17 | VAR_5;
 }

 return (0);
}
