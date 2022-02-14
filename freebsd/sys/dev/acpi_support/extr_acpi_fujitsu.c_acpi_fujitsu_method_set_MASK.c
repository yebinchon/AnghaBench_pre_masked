
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_nameval {int value; int exists; } ;
struct acpi_fujitsu_softc {int lastValChanged; int dev; int handle; struct int_nameval gvol; struct int_nameval gmou; struct int_nameval gbls; struct int_nameval gbll; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct acpi_fujitsu_softc *VAR_7, int VAR_8, int VAR_9)
{
 struct int_nameval VAR_10;
 ACPI_STATUS VAR_11;
 char *VAR_12;
 int VAR_13;

 FUNC_1(VAR_6);

 switch (VAR_8) {
  case 132:
   VAR_13 = VAR_0;
   VAR_12 = "SBLL";
   VAR_10 = VAR_7->gbll;
   break;
  case 131:
   VAR_13 = VAR_0;
   VAR_12 = "SBL2";
   VAR_10 = VAR_7->gbls;
   break;
  case 130:
   VAR_13 = VAR_3;
   VAR_12 = "SMOU";
   VAR_10 = VAR_7->gmou;
   break;
  case 129:
  case 128:
   VAR_13 = VAR_4;
   VAR_12 = "SVOL";
   VAR_10 = VAR_7->gvol;
   break;
  default:
   return (VAR_1);
 }

 if(!VAR_10.exists)
  return (VAR_1);

 if (VAR_8 == 128) {
  if (VAR_9 == 1)
   VAR_9 = VAR_10.value | VAR_5;
  else if (VAR_9 == 0)
   VAR_9 = VAR_10.value & ~VAR_5;
  else
   return (VAR_1);
 }

 VAR_11 = FUNC_2(VAR_7->handle, VAR_12, VAR_9);
 if (FUNC_0(VAR_11)) {
  FUNC_3(VAR_7->dev, "Couldn't update %s\n", VAR_12);
  return (VAR_2);
 }

 VAR_7->lastValChanged = VAR_13;
 return (0);
}
