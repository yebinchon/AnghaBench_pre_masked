
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fdc_walk_ctx {int index; scalar_t__* fd_present; int dev; int acpi_dev; } ;
typedef int * device_t ;
struct TYPE_10__ {int * Pointer; int Length; } ;
struct TYPE_8__ {int Value; } ;
struct TYPE_7__ {TYPE_3__* Elements; } ;
struct TYPE_9__ {scalar_t__ Type; TYPE_2__ Integer; TYPE_1__ Package; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 scalar_t__ FUNC_0 (int ,int *,char*,int *,TYPE_4__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,...) ;
 int * FUNC_4 (int ,char*,size_t) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ,int ,int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8(ACPI_HANDLE VAR_8, device_t *VAR_9, int VAR_10, void *VAR_11)
{
 struct fdc_walk_ctx *VAR_12;
 device_t VAR_13, VAR_14;
 ACPI_BUFFER VAR_15;
 ACPI_OBJECT *VAR_16, *VAR_17;
 ACPI_STATUS VAR_18;

 VAR_12 = (struct fdc_walk_ctx *)VAR_11;
 VAR_15.Pointer = ((void*)0);






 if (VAR_12->index > 3)
  return (VAR_4);


 if (VAR_12->fd_present[VAR_12->index] != VAR_1)
  goto out;


 VAR_13 = FUNC_4(VAR_12->dev, "fd", VAR_12->index);
 if (VAR_13 == ((void*)0))
  goto out;
 VAR_14 = *VAR_9;
 *VAR_9 = VAR_13;


 VAR_15.Length = VAR_0;
 VAR_15.Pointer = FUNC_7(VAR_15.Length, VAR_6, VAR_5 | VAR_7);
 if (VAR_15.Pointer == ((void*)0))
  goto out;







 VAR_18 = FUNC_0(VAR_12->acpi_dev, VAR_14, "_FDI", ((void*)0),
     &VAR_15);
 if (FUNC_1(VAR_18)) {
  if (VAR_18 != VAR_3)
   FUNC_3(VAR_12->dev, "_FDI failed - %#x\n", VAR_18);
  goto out;
 }
 VAR_16 = (ACPI_OBJECT *)VAR_15.Pointer;
 if (!FUNC_2(VAR_16, 16)) {
  FUNC_3(VAR_12->dev, "invalid _FDI package\n");
  goto out;
 }
 VAR_17 = &VAR_16->Package.Elements[1];
 if (VAR_17 == ((void*)0) || VAR_17->Type != VAR_2) {
  FUNC_3(VAR_12->dev, "invalid type object in _FDI\n");
  goto out;
 }
 FUNC_5(VAR_13, VAR_17->Integer.Value);

out:
 VAR_12->index++;
 if (VAR_15.Pointer)
  FUNC_6(VAR_15.Pointer, VAR_6);
 return (VAR_4);
}
