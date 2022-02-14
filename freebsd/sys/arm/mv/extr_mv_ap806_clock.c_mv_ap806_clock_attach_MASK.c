
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct mv_ap806_clock_softc {int * syscon; int dev; } ;
struct clkdom {int dummy; } ;
typedef int device_t ;
struct TYPE_7__ {void* freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv_ap806_clock_softc*,int) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct clkdom* FUNC_2 (int ) ;
 int FUNC_3 (struct clkdom*) ;
 int FUNC_4 (struct clkdom*) ;
 int FUNC_5 (struct clkdom*,TYPE_1__*) ;
 struct mv_ap806_clock_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct mv_ap806_clock_softc *VAR_8;
 struct clkdom *VAR_9;
 uint64_t VAR_10;
 uint32_t VAR_11;

 VAR_8 = FUNC_6(VAR_7);
 VAR_8->dev = VAR_7;

 if (FUNC_1(VAR_8->dev, &VAR_8->syscon) != 0 ||
     VAR_8->syscon == ((void*)0)) {
  FUNC_7(VAR_7, "cannot get syscon for device\n");
  return (VAR_0);
 }





 VAR_11 = FUNC_0(VAR_8, 0x400);
 switch (VAR_11 & 0x1f) {
 case 0x0:
 case 0x1:
  VAR_10 = 2000000000;
  break;
 case 0x6:
  VAR_10 = 1800000000;
  break;
 case 0xd:
  VAR_10 = 1600000000;
  break;
 case 0x14:
  VAR_10 = 1333000000;
  break;
 default:
  FUNC_7(VAR_7, "Cannot guess clock freq with reg %x\n",
       VAR_11 & 0x1f);
  return (VAR_0);
  break;
 };

 VAR_1 = VAR_10;
 VAR_2 = VAR_10;
 VAR_9 = FUNC_2(VAR_7);

 FUNC_5(VAR_9, &VAR_1);
 FUNC_5(VAR_9, &VAR_2);
 FUNC_5(VAR_9, &VAR_3);
 FUNC_5(VAR_9, &VAR_4);
 FUNC_5(VAR_9, &VAR_5);

 FUNC_4(VAR_9);

 if (VAR_6)
  FUNC_3(VAR_9);
 return (0);
}
