
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct resource_list {int dummy; } ;
struct acpi_softc {int acpi_resources_reserved; } ;
struct acpi_device {int ad_handle; struct resource_list ad_rl; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
struct TYPE_4__ {int Flags; } ;
typedef TYPE_1__ ACPI_DEVICE_INFO ;


 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct acpi_device* FUNC_8 (int ) ;
 struct acpi_softc* FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (struct resource_list*,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (struct resource_list*,int,int) ;
 int FUNC_12 (struct resource_list*,int ,int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (struct resource_list*,int,int) ;
 int FUNC_14 (struct resource_list*,int ,int ,int,int) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_15(device_t VAR_8, device_t VAR_9, int VAR_10, int VAR_11,
    rman_res_t VAR_12, rman_res_t VAR_13)
{
    struct acpi_softc *VAR_14 = FUNC_9(VAR_8);
    struct acpi_device *VAR_15 = FUNC_8(VAR_9);
    struct resource_list *VAR_16 = &VAR_15->ad_rl;
    ACPI_DEVICE_INFO *VAR_17;
    rman_res_t VAR_18;
    int VAR_19;


    if (VAR_10 == VAR_4 &&
 FUNC_0(VAR_8, VAR_9, VAR_6, ((void*)0)) <= 0)
 return (0);
    if (VAR_10 == VAR_5 || VAR_10 == VAR_3) {
 if (FUNC_1(FUNC_2(VAR_15->ad_handle, &VAR_17))) {
     if ((VAR_17->Flags & VAR_0) != 0) {

  VAR_19 = (VAR_10 == VAR_3 && VAR_12 == VAR_1);



  if (!VAR_19) {
      FUNC_3(VAR_17);
      return (0);
  }
     }
     FUNC_3(VAR_17);
 }
    }
    if (FUNC_11(VAR_16, VAR_10, VAR_11))
 return (VAR_2);


    if (FUNC_13(VAR_16, VAR_10, VAR_11))
 FUNC_14(VAR_16, VAR_8, VAR_9, VAR_10, VAR_11);


    VAR_18 = (VAR_12 + VAR_13 - 1);
    FUNC_10(VAR_16, VAR_10, VAR_11, VAR_12, VAR_18, VAR_13);


    if (!VAR_14->acpi_resources_reserved)
 return (0);


    if (FUNC_0(VAR_8, VAR_9, VAR_7, ((void*)0)) <= 0)
 return (0);






    if (VAR_10 == VAR_4)
 return (0);






    if (FUNC_7(VAR_9) == FUNC_6("cpu"))
 return (0);







    FUNC_12(VAR_16, VAR_8, VAR_9, VAR_10, &VAR_11, VAR_12, VAR_18, VAR_13, 0);
    return (0);
}
