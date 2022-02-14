
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tegra_i2c_softc {int done; int dev; TYPE_1__* msg; void* bus_err; } ;
struct TYPE_2__ {int flags; } ;


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
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct tegra_i2c_softc*) ;
 int FUNC_1 (struct tegra_i2c_softc*,int ) ;
 int FUNC_2 (struct tegra_i2c_softc*) ;
 int FUNC_3 (struct tegra_i2c_softc*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct tegra_i2c_softc*) ;
 int FUNC_6 (struct tegra_i2c_softc*) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_14)
{
 struct tegra_i2c_softc *VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18;

 VAR_15 = (struct tegra_i2c_softc *)VAR_14;

 FUNC_0(VAR_15);
 VAR_16 = FUNC_1(VAR_15, VAR_2);
 if (VAR_15->msg == ((void*)0)) {

  VAR_17 = FUNC_1(VAR_15, VAR_1);
  VAR_17 &= ~VAR_9;
  VAR_17 &= ~VAR_7;
  FUNC_3(VAR_15, VAR_1, 0);
  FUNC_3(VAR_15, VAR_3, VAR_16);
  FUNC_2(VAR_15);
  return;
 }

 if ((VAR_16 & VAR_0) != 0) {
  if (VAR_16 & VAR_5)
   VAR_15->bus_err = VAR_12;
  if (VAR_16 & VAR_4)
   VAR_15->bus_err = VAR_11;
  if ((VAR_16 & VAR_10) ||
      (VAR_16 & VAR_8))
   VAR_15->bus_err = VAR_11;
  VAR_15->done = 1;
 } else if ((VAR_16 & VAR_7) &&
     (VAR_15->msg != ((void*)0)) && (VAR_15->msg->flags & VAR_13)) {
  VAR_18 = FUNC_5(VAR_15);
  if (VAR_18 == 0) {
   VAR_17 = FUNC_1(VAR_15, VAR_1);
   VAR_17 &= ~VAR_7;
   FUNC_3(VAR_15, VAR_1, VAR_17);
  }
 } else if ((VAR_16 & VAR_9) &&
     (VAR_15->msg != ((void*)0)) && !(VAR_15->msg->flags & VAR_13)) {
  VAR_18 = FUNC_6(VAR_15);
  if (VAR_18 == 0) {
   VAR_17 = FUNC_1(VAR_15, VAR_1);
   VAR_17 &= ~VAR_9;
   FUNC_3(VAR_15, VAR_1, VAR_17);
  }
 } else if ((VAR_16 & VAR_7) ||
      (VAR_16 & VAR_9)) {
  FUNC_4(VAR_15->dev, "Unexpected data interrupt: 0x%08X\n",
      VAR_16);
  VAR_17 = FUNC_1(VAR_15, VAR_1);
  VAR_17 &= ~VAR_9;
  VAR_17 &= ~VAR_7;
  FUNC_3(VAR_15, VAR_1, VAR_17);
 }
 if (VAR_16 & VAR_6)
  VAR_15->done = 1;
 FUNC_3(VAR_15, VAR_3, VAR_16);
 if (VAR_15->done) {
  FUNC_3(VAR_15, VAR_1, 0);
  FUNC_7(&(VAR_15->done));
 }
 FUNC_2(VAR_15);
}
