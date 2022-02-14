
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int device_t ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ id; scalar_t__ rev; int quirks; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_10)
{
 char VAR_11[64];
 int VAR_12, VAR_13 = 0;
 uint32_t VAR_14 = FUNC_2(VAR_10);
 uint8_t VAR_15 = FUNC_4(VAR_10);





 if (FUNC_1(VAR_10) == VAR_3)
  return (VAR_2);


 if (FUNC_1(VAR_10) == VAR_4 &&
     FUNC_5(VAR_10) == VAR_7 &&
     FUNC_3(VAR_10) == VAR_5)
  VAR_13 = 1;
 else if (FUNC_1(VAR_10) == VAR_4 &&
     FUNC_5(VAR_10) == VAR_6)
  VAR_13 = 2;

 for (VAR_12 = 0; VAR_8[VAR_12].id != 0; VAR_12++) {
  if (VAR_8[VAR_12].id == VAR_14 &&
      VAR_8[VAR_12].rev <= VAR_15 &&
      (VAR_13 || (VAR_9 == 1 &&
       !(VAR_8[VAR_12].quirks & VAR_0)))) {

   if (FUNC_6(VAR_10) == 0x197b &&
       (FUNC_7(VAR_10, 0xdf, 1) & 0x40) == 0)
    return (VAR_2);
   FUNC_8(VAR_11, sizeof(VAR_11), "%s AHCI SATA controller",
       VAR_8[VAR_12].name);
   FUNC_0(VAR_10, VAR_11);
   return (VAR_1);
  }
 }
 if (VAR_13 != 1)
  return (VAR_2);
 FUNC_0(VAR_10, "AHCI SATA controller");
 return (VAR_1);
}
