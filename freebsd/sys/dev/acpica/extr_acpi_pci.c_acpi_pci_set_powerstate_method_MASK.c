
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef scalar_t__ ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,char*,int,int ,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_8, device_t VAR_9, int VAR_10)
{
 ACPI_HANDLE VAR_11;
 ACPI_STATUS VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = 0;
 if (VAR_10 < VAR_0 || VAR_10 > VAR_1)
  return (VAR_3);
 FUNC_0(VAR_7);
 VAR_13 = FUNC_8(VAR_9);
 if (VAR_13 < VAR_10 && VAR_6) {
  VAR_14 = FUNC_9(VAR_8, VAR_9, VAR_10);
  if (VAR_14)
   goto out;
 }
 VAR_11 = FUNC_4(VAR_9);
 VAR_12 = FUNC_6(VAR_11, VAR_10);
 if (FUNC_2(VAR_12)) {
  if (VAR_4)
   FUNC_7(VAR_8, "set ACPI power state D%d on %s\n",
       VAR_10, FUNC_5(VAR_11));
 } else if (VAR_12 != VAR_2)
  FUNC_7(VAR_8,
      "failed to set ACPI power state D%d on %s: %s\n",
      VAR_10, FUNC_5(VAR_11), FUNC_3(VAR_12));
 if (VAR_13 > VAR_10 && VAR_5)
  VAR_14 = FUNC_9(VAR_8, VAR_9, VAR_10);

out:
 FUNC_1(VAR_7);
 return (VAR_14);
}
