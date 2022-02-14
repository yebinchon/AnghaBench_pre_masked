
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct wb_softc {int chip; } ;
typedef int device_t ;
typedef int buf ;
struct TYPE_3__ {int device_id; char* descr; int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct wb_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int,char*,char*,int,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6)
{
 char VAR_7[128];
 struct wb_softc *VAR_8;
 int VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;

 if (FUNC_8(VAR_6) != VAR_3)
  return (VAR_1);
 if (FUNC_6(VAR_6) != VAR_2)
  return (VAR_1);

 VAR_8 = FUNC_0(VAR_6);
 VAR_10 = FUNC_5(VAR_6) >> 8;
 VAR_11 = FUNC_7(VAR_6);
 for (VAR_9 = 0; VAR_9 < FUNC_3(VAR_5); VAR_9++) {
  if (VAR_5[VAR_9].device_id == VAR_10) {
   VAR_8->chip = VAR_5[VAR_9].chip;
   FUNC_4(VAR_7, sizeof(VAR_7),
       "%s (0x%02x/0x%02x) Watchdog Timer",
       VAR_5[VAR_9].descr, VAR_10, VAR_11);
   FUNC_2(VAR_6, VAR_7);
   return (VAR_0);
  }
 }
 if (VAR_4) {
  FUNC_1(VAR_6,
      "unrecognized chip: devid 0x%02x, revid 0x%02x\n",
      VAR_10, VAR_11);
 }
 return (VAR_1);
}
