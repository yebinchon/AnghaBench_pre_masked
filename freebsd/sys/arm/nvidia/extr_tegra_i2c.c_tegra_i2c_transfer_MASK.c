
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_i2c_softc {int bus_inuse; int bus_err; scalar_t__ done; scalar_t__ msg_idx; struct iic_msg* msg; int mtx; } ;
struct iic_msg {scalar_t__ len; int flags; int * buf; } ;
typedef enum tegra_i2c_xfer_type { ____Placeholder_tegra_i2c_xfer_type } tegra_i2c_xfer_type ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tegra_i2c_softc*) ;
 int VAR_6 ;
 int FUNC_1 (struct tegra_i2c_softc*,int ) ;
 int FUNC_2 (struct tegra_i2c_softc*) ;
 int FUNC_3 (struct tegra_i2c_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct tegra_i2c_softc* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_6 (struct tegra_i2c_softc*) ;
 int FUNC_7 (struct tegra_i2c_softc*) ;
 int FUNC_8 (struct tegra_i2c_softc*) ;
 int FUNC_9 (struct tegra_i2c_softc*,struct iic_msg*,int) ;
 int FUNC_10 (struct tegra_i2c_softc*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_11, struct iic_msg *VAR_12, uint32_t VAR_13)
{
 int VAR_14, VAR_15;
 struct tegra_i2c_softc *VAR_16;
 enum tegra_i2c_xfer_type VAR_17;

 VAR_16 = FUNC_4(VAR_11);
 FUNC_0(VAR_16);


 while (VAR_16->bus_inuse == 1)
  FUNC_1(VAR_16, 0);
 VAR_16->bus_inuse = 1;

 VAR_14 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  VAR_16->msg = &VAR_12[VAR_15];
  VAR_16->msg_idx = 0;
  VAR_16->bus_err = 0;
  VAR_16->done = 0;

  if (VAR_16->msg == ((void*)0) || VAR_16->msg->buf == ((void*)0) ||
      VAR_16->msg->len == 0) {
   VAR_14 = VAR_0;
   break;
  }


  if (VAR_15 == (VAR_13 - 1)) {
   if (VAR_12[VAR_15].flags & VAR_5)
    VAR_17 = VAR_7;
   else
    VAR_17 = VAR_9;
  } else {
   if (VAR_12[VAR_15 + 1].flags & VAR_4)
    VAR_17 = VAR_7;
   else
    VAR_17 = VAR_8;
  }
  FUNC_9(VAR_16, VAR_16->msg, VAR_17);
  if (VAR_10)
   VAR_14 = FUNC_8(VAR_16);
  else
   VAR_14 = FUNC_5(&VAR_16->done, &VAR_16->mtx, VAR_6, "iic",
       VAR_3);

  FUNC_3(VAR_16, VAR_1, 0);
  FUNC_3(VAR_16, VAR_2, 0xFFFFFFFF);
  if (VAR_14 == 0)
   VAR_14 = VAR_16->bus_err;
  if (VAR_14 != 0)
   break;
 }

 if (VAR_14 != 0) {
  FUNC_7(VAR_16);
  FUNC_6(VAR_16);
 }

 VAR_16->msg = ((void*)0);
 VAR_16->msg_idx = 0;
 VAR_16->bus_err = 0;
 VAR_16->done = 0;


 VAR_16->bus_inuse = 0;
 FUNC_10(VAR_16);
 FUNC_2(VAR_16);

 return (VAR_14);
}
