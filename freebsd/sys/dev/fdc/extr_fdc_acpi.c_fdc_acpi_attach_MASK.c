
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fdc_data {int fdc_dev; } ;
typedef int device_t ;
struct TYPE_9__ {TYPE_2__* Pointer; int Length; } ;
struct TYPE_7__ {int Pointer; } ;
struct TYPE_8__ {TYPE_1__ Buffer; } ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef TYPE_3__ ACPI_BUFFER ;


 int FUNC_0 (int ,int ,char*,int *,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 struct fdc_data* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct fdc_data*) ;
 int FUNC_8 (struct fdc_data*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_11 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_5)
{
 struct fdc_data *VAR_6;
 ACPI_BUFFER VAR_7;
 ACPI_OBJECT *VAR_8;
 device_t VAR_9;
 int VAR_10;


 VAR_6 = FUNC_3(VAR_5);
 VAR_6->fdc_dev = VAR_5;


 VAR_10 = VAR_1;
 VAR_7.Length = VAR_0;
 VAR_7.Pointer = FUNC_11(VAR_7.Length, VAR_3, VAR_2 | VAR_4);
 if (VAR_7.Pointer == ((void*)0))
  goto out;


 VAR_10 = FUNC_7(VAR_5, VAR_6);
 if (VAR_10 != 0)
  goto out;


 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10 != 0)
  goto out;





 VAR_9 = FUNC_2(VAR_5);
 if (FUNC_1(FUNC_0(VAR_9, VAR_5, "_FDE", ((void*)0), &VAR_7))) {
  VAR_10 = FUNC_6(VAR_5);
  goto out;
 }


 VAR_8 = VAR_7.Pointer;
 VAR_10 = FUNC_4(VAR_9, VAR_5, VAR_8->Buffer.Pointer);

out:
 if (VAR_7.Pointer)
  FUNC_10(VAR_7.Pointer, VAR_3);
 if (VAR_10 != 0)
  FUNC_8(VAR_6);
 else
  FUNC_9(VAR_5);

 return (VAR_10);
}
