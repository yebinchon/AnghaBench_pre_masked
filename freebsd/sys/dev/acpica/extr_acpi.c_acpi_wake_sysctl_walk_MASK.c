
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int **,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    device_t *VAR_9;
    device_t VAR_10;
    ACPI_STATUS VAR_11;

    VAR_6 = FUNC_5(VAR_5, &VAR_9, &VAR_8);
    if (VAR_6 != 0 || VAR_8 == 0) {
 if (VAR_8 == 0)
     FUNC_9(VAR_9, VAR_2);
 return (VAR_6);
    }
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
 VAR_10 = VAR_9[VAR_7];
 FUNC_10(VAR_10);
 if (!FUNC_8(VAR_10))
     continue;
 VAR_11 = FUNC_1(FUNC_4(VAR_10), "_PRW", ((void*)0), ((void*)0));
 if (FUNC_0(VAR_11)) {
     FUNC_2(FUNC_6(VAR_10),
  FUNC_3(FUNC_7(VAR_10)), VAR_3,
  "wake", VAR_1 | VAR_0, VAR_10, 0,
  VAR_4, "I", "Device set to wake the system");
 }
    }
    FUNC_9(VAR_9, VAR_2);

    return (0);
}
