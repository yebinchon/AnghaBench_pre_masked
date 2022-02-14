
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct axp2xx_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,char*,char*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_21)
{
 struct axp2xx_softc *VAR_22;
 uint8_t VAR_23;

 VAR_22 = VAR_21;

 FUNC_0(VAR_22->dev, VAR_3, &VAR_23, 1);
 if (VAR_23) {
  if (VAR_23 & VAR_2)
   FUNC_2("PMU", "AC", "overvoltage", ((void*)0));
  if (VAR_23 & VAR_7)
   FUNC_2("PMU", "USB", "overvoltage", ((void*)0));
  if (VAR_23 & VAR_6)
   FUNC_2("PMU", "USB", "undervoltage", ((void*)0));
  if (VAR_23 & VAR_0)
   FUNC_2("PMU", "AC", "plugged", ((void*)0));
  if (VAR_23 & VAR_1)
   FUNC_2("PMU", "AC", "unplugged", ((void*)0));
  if (VAR_23 & VAR_4)
   FUNC_2("PMU", "USB", "plugged", ((void*)0));
  if (VAR_23 & VAR_5)
   FUNC_2("PMU", "USB", "unplugged", ((void*)0));
  FUNC_1(VAR_22->dev, VAR_3, VAR_19);
 }

 FUNC_0(VAR_22->dev, VAR_14, &VAR_23, 1);
 if (VAR_23) {
  if (VAR_23 & VAR_8)
   FUNC_2("PMU", "Battery", "charged", ((void*)0));
  if (VAR_23 & VAR_9)
   FUNC_2("PMU", "Battery", "charging", ((void*)0));
  if (VAR_23 & VAR_10)
   FUNC_2("PMU", "Battery", "connected", ((void*)0));
  if (VAR_23 & VAR_11)
   FUNC_2("PMU", "Battery", "disconnected", ((void*)0));
  if (VAR_23 & VAR_12)
   FUNC_2("PMU", "Battery", "low temp", ((void*)0));
  if (VAR_23 & VAR_13)
   FUNC_2("PMU", "Battery", "high temp", ((void*)0));
  FUNC_1(VAR_22->dev, VAR_14, VAR_19);
 }

 FUNC_0(VAR_22->dev, VAR_16, &VAR_23, 1);
 if (VAR_23) {
  if (VAR_23 & VAR_15)
   FUNC_3(VAR_20);
  FUNC_1(VAR_22->dev, VAR_16, VAR_19);
 }

 FUNC_0(VAR_22->dev, VAR_17, &VAR_23, 1);
 if (VAR_23) {
  FUNC_1(VAR_22->dev, VAR_17, VAR_19);
 }

 FUNC_0(VAR_22->dev, VAR_18, &VAR_23, 1);
 if (VAR_23) {
  FUNC_1(VAR_22->dev, VAR_18, VAR_19);
 }
}
