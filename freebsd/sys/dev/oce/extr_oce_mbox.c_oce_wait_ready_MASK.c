
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_1__* POCE_SOFTC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;

int
FUNC_4(POCE_SOFTC VAR_7)
{

 uint32_t VAR_8, VAR_9;

 if (!FUNC_1(VAR_7))
  return (-1);

 for (VAR_9 = 0; VAR_9 < 30000; VAR_9++) {
  VAR_8 = FUNC_2(VAR_7, VAR_6, VAR_3);
  if (VAR_8 & VAR_4)
   return 0;

  if (VAR_8 & VAR_2 &&
   !(VAR_8 & VAR_5)) {
   FUNC_3(VAR_7->dev, "Error detected in the card\n");
   return VAR_0;
  }

  FUNC_0(1000);
 }

 FUNC_3(VAR_7->dev, "Firmware wait timed out\n");

 return (-1);
}
