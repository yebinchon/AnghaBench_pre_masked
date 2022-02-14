
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int device_t ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ id; scalar_t__ rev; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 char VAR_4[64];
 int VAR_5;
 uint32_t VAR_6 = FUNC_2(VAR_3);
 uint8_t VAR_7 = FUNC_3(VAR_3);

 if ((intptr_t)FUNC_0(VAR_3) >= 0)
  return (VAR_1);

 for (VAR_5 = 0; VAR_2[VAR_5].id != 0; VAR_5++) {
  if (VAR_2[VAR_5].id == VAR_6 &&
      VAR_2[VAR_5].rev <= VAR_7) {
   FUNC_4(VAR_4, sizeof(VAR_4), "%s AHCI SATA controller",
       VAR_2[VAR_5].name);
   FUNC_1(VAR_3, VAR_4);
   return (VAR_0);
  }
 }
 FUNC_1(VAR_3, "AHCI SATA controller");
 return (VAR_0);
}
