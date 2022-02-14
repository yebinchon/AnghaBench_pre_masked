
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct rsb_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ rta; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rsb_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rsb_softc*,int ) ;
 int FUNC_2 (struct rsb_softc*,int ,int) ;
 struct rsb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_8, uint16_t VAR_9)
{
 struct rsb_softc *VAR_10;
 uint8_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_8);

 FUNC_0(VAR_10);


 for (VAR_11 = 0, VAR_12 = 0; VAR_7[VAR_12].rta != 0; VAR_12++)
  if (VAR_7[VAR_12].addr == VAR_9) {
   VAR_11 = VAR_7[VAR_12].rta;
   break;
  }
 if (VAR_11 == 0) {
  FUNC_4(VAR_8, "RTA not known for address %#x\n", VAR_9);
  return (VAR_3);
 }


 FUNC_2(VAR_10, VAR_6, FUNC_1(VAR_10, VAR_6));
 FUNC_2(VAR_10, VAR_5, (VAR_9 << VAR_1) | (VAR_11 << VAR_2));
 FUNC_2(VAR_10, VAR_4, VAR_0);

 return (FUNC_5(VAR_8));
}
