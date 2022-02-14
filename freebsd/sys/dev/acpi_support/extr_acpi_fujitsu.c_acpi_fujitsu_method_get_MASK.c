
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct int_nameval {int value; int name; int exists; } ;
struct acpi_fujitsu_softc {int bIsMuted; int dev; int handle; struct int_nameval rvol; struct int_nameval rbll; struct int_nameval gsif; struct int_nameval ghks; struct int_nameval gvol; struct int_nameval gmou; struct int_nameval gbls; struct int_nameval gbll; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct acpi_fujitsu_softc *VAR_5, int VAR_6)
{
 struct int_nameval VAR_7;
 ACPI_STATUS VAR_8;

 FUNC_1(VAR_4);

 switch (VAR_6) {
  case 136:
   VAR_7 = VAR_5->gbll;
   break;
  case 135:
   VAR_7 = VAR_5->gbls;
   break;
  case 133:
   VAR_7 = VAR_5->gmou;
   break;
  case 131:
  case 130:
   VAR_7 = VAR_5->gvol;
   break;
  case 134:
   VAR_7 = VAR_5->ghks;
   break;
  case 132:
   VAR_7 = VAR_5->gsif;
   break;
  case 129:
   VAR_7 = VAR_5->rbll;
   break;
  case 128:
   VAR_7 = VAR_5->rvol;
   break;
  default:
   return (VAR_1);
 }

 if(!VAR_7.exists)
  return (VAR_0);

 VAR_8 = FUNC_2(VAR_5->handle, VAR_7.name, &VAR_7.value);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_5->dev, "Couldn't query method (%s)\n", VAR_7.name);
  return (VAR_1);
 }

 if (VAR_6 == 130) {
  VAR_5->bIsMuted = (uint8_t)((VAR_7.value & VAR_3) != 0);
  return (VAR_5->bIsMuted);
 }

 VAR_7.value &= VAR_2;
 return (VAR_7.value);
}
