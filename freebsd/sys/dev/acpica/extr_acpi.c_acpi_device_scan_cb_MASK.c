
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device_scan_ctx {scalar_t__ parent; int arg; int (* user_fn ) (scalar_t__,int **,int ,int ) ;} ;
typedef int * device_t ;
typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef scalar_t__ ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int **,int ,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9(ACPI_HANDLE VAR_6, UINT32 VAR_7, void *VAR_8, void **VAR_9)
{
    struct acpi_device_scan_ctx *VAR_10;
    device_t VAR_11, VAR_12;
    ACPI_STATUS VAR_13;
    ACPI_OBJECT_TYPE VAR_14;





    VAR_10 = (struct acpi_device_scan_ctx *)VAR_8;
    if (FUNC_4(VAR_6) || VAR_6 == VAR_10->parent)
 return (VAR_4);


    if (FUNC_0(FUNC_3(VAR_6, &VAR_14)))
 return (VAR_4);
    if (VAR_14 != VAR_0 && VAR_14 != VAR_2 &&
 VAR_14 != VAR_3 && VAR_14 != VAR_1)
 return (VAR_4);





    VAR_12 = FUNC_5(VAR_6);
    VAR_11 = VAR_12;
    VAR_13 = VAR_10->user_fn(VAR_6, &VAR_11, VAR_7, VAR_10->arg);
    if (FUNC_0(VAR_13) || VAR_12 == VAR_11)
 return (VAR_13);


    if (VAR_12 != ((void*)0)) {
 FUNC_6(FUNC_7(VAR_12), VAR_12);
 FUNC_2(VAR_6, VAR_5);
    }


    if (VAR_11 != ((void*)0))
 FUNC_1(VAR_6, VAR_5, VAR_11);

    return (VAR_4);
}
