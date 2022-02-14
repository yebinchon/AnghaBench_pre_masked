
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_prw_data {int lowest_wake; int gpe_bit; int gpe_handle; } ;
typedef int * device_t ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct acpi_prw_data*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,char*,int ) ;

__attribute__((used)) static int
FUNC_8(ACPI_HANDLE VAR_4, int VAR_5)
{
    struct acpi_prw_data VAR_6;
    device_t VAR_7;





    if (FUNC_5(VAR_4, &VAR_6) != 0)
 return (VAR_2);
    VAR_7 = FUNC_2(VAR_4);
    if (VAR_7 == ((void*)0) || (FUNC_3(VAR_7) & VAR_0) == 0)
 return (0);






    if (VAR_5 > VAR_6.lowest_wake) {
 FUNC_0(VAR_6.gpe_handle, VAR_6.gpe_bit, VAR_1);
 if (VAR_3)
     FUNC_7(VAR_7, "run_prep re-enabled %s\n", FUNC_4(VAR_4));
    } else {
 FUNC_1(VAR_4, "_PSW", 0);
 FUNC_6(VAR_4, 0);
 if (VAR_3)
     FUNC_7(VAR_7, "run_prep cleaned up for %s\n",
  FUNC_4(VAR_4));
    }

    return (0);
}
