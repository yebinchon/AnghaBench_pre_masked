
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int dev; scalar_t__ hw_error; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,...) ;
 int* VAR_11 ;
 int* VAR_12 ;

__attribute__((used)) static void FUNC_3(POCE_SOFTC VAR_13)
{

 uint32_t VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 uint32_t VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 uint32_t VAR_21;

 if (VAR_13->hw_error)
  return;

 if (FUNC_0(VAR_13)) {
  VAR_18 = FUNC_1(VAR_13, VAR_9, VAR_7);
  if (VAR_18 & VAR_6) {
   VAR_19 = FUNC_1(VAR_13, VAR_9, VAR_4);
   VAR_20 = FUNC_1(VAR_13, VAR_9, VAR_5);
  }
 } else {
  VAR_14 = FUNC_1(VAR_13, VAR_10, VAR_2);
  VAR_15 = FUNC_1(VAR_13, VAR_10, VAR_0);
  VAR_16 = FUNC_1(VAR_13, VAR_10, VAR_3);
  VAR_17 = FUNC_1(VAR_13, VAR_10, VAR_1);

  VAR_14 = (VAR_14 & ~VAR_16);
  VAR_15 = (VAR_15 & ~VAR_17);
 }





 if (VAR_18 & VAR_6) {
  VAR_13->hw_error = VAR_8;
  FUNC_2(VAR_13->dev, "Error detected in the card\n");
 }

 if (VAR_18 & VAR_6) {
  FUNC_2(VAR_13->dev,
    "ERR: sliport status 0x%x\n", VAR_18);
  FUNC_2(VAR_13->dev,
    "ERR: sliport error1 0x%x\n", VAR_19);
  FUNC_2(VAR_13->dev,
    "ERR: sliport error2 0x%x\n", VAR_20);
 }

 if (VAR_14) {
  for (VAR_21 = 0; VAR_14; VAR_14 >>= 1, VAR_21++) {
   if (VAR_14 & 1)
    FUNC_2(VAR_13->dev, "UE: %s bit set\n",
       VAR_12[VAR_21]);
  }
 }

 if (VAR_15) {
  for (VAR_21 = 0; VAR_15; VAR_15 >>= 1, VAR_21++) {
   if (VAR_15 & 1)
    FUNC_2(VAR_13->dev, "UE: %s bit set\n",
       VAR_11[VAR_21]);
  }
 }

}
