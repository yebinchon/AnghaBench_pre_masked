
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(ACPI_HANDLE VAR_1, UINT32 VAR_2, void *VAR_3)
{
 device_t VAR_4, VAR_5;
 ACPI_STATUS VAR_6;
 int VAR_7;

 VAR_5 = VAR_3;

 switch (VAR_2) {
 case 129:
  FUNC_9(&VAR_0);
  FUNC_2(VAR_5);
  FUNC_10(&VAR_0);
  break;
 case 128:
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4 == ((void*)0)) {
   FUNC_8(VAR_5, "no device to eject for %s\n",
       FUNC_5(VAR_1));
   return;
  }
  FUNC_9(&VAR_0);
  VAR_7 = FUNC_6(VAR_4);
  if (VAR_7) {
   FUNC_10(&VAR_0);
   FUNC_8(VAR_5, "failed to detach %s: %d\n",
       FUNC_7(VAR_4), VAR_7);
   return;
  }
  VAR_6 = FUNC_3(VAR_1, "_EJ0", 1);
  if (FUNC_0(VAR_6)) {
   FUNC_10(&VAR_0);
   FUNC_8(VAR_5, "failed to eject %s: %s\n",
       FUNC_5(VAR_1), FUNC_1(VAR_6));
   return;
  }
  FUNC_2(VAR_5);
  FUNC_10(&VAR_0);
  break;
 default:
  FUNC_8(VAR_5, "unknown notify %#x for %s\n", VAR_2,
      FUNC_5(VAR_1));
  break;
 }
}
