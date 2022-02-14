
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_panasonic_softc {int dev; } ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_7__ {int * Pointer; int Length; } ;
struct TYPE_5__ {int Value; } ;
struct TYPE_6__ {scalar_t__ Type; TYPE_1__ Integer; } ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct acpi_panasonic_softc *VAR_4, ACPI_HANDLE VAR_5,
    UINT32 *VAR_6)
{
 ACPI_BUFFER VAR_7;
 ACPI_OBJECT *VAR_8;
 UINT64 VAR_9;
 int VAR_10;

 FUNC_0(VAR_3);
 VAR_10 = VAR_2;

 VAR_7.Length = VAR_0;
 VAR_7.Pointer = ((void*)0);
 FUNC_1(VAR_5, "HINF", ((void*)0), &VAR_7);
 VAR_8 = (ACPI_OBJECT *)VAR_7.Pointer;
 if (VAR_8->Type != VAR_1) {
  FUNC_3(VAR_4->dev, "HINF returned non-integer\n");
  goto end;
 }
 VAR_9 = VAR_8->Integer.Value;





 if ((VAR_9 & 0x7f) > 0 && (VAR_9 & 0x7f) < 11) {
  *VAR_6 = VAR_9;
  VAR_10 = 0;
 }
end:
 if (VAR_7.Pointer)
  FUNC_2(VAR_7.Pointer);

 return (VAR_10);
}
