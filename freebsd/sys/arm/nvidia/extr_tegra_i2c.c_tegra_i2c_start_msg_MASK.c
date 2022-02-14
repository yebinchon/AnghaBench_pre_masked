
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_i2c_softc {int dummy; } ;
struct iic_msg {int len; int slave; int flags; } ;
typedef enum tegra_i2c_xfer_type { ____Placeholder_tegra_i2c_xfer_type } tegra_i2c_xfer_type ;


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
 int FUNC_0 (struct tegra_i2c_softc*,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_1(struct tegra_i2c_softc *VAR_19, struct iic_msg *VAR_20,
    enum tegra_i2c_xfer_type VAR_21)
{
 uint32_t VAR_22, VAR_23;


 VAR_22 = (0 << VAR_14) |
    VAR_16 |
    (1 << VAR_13) |
    (1 << VAR_15);
 FUNC_0(VAR_19, VAR_11, VAR_22);



 FUNC_0(VAR_19, VAR_11, VAR_20->len - 1);


 VAR_22 = VAR_1;
 if (VAR_21 == VAR_17)
  VAR_22 |= VAR_0;
 else if (VAR_21 == VAR_18)
  VAR_22 |= VAR_3;
 VAR_22 |= VAR_20->slave << VAR_4;
 if (VAR_20->flags & VAR_12) {
  VAR_22 |= VAR_2;
  VAR_22 |= 1 << VAR_4;
 } else
  VAR_22 &= ~(1 << VAR_4);

 FUNC_0(VAR_19, VAR_11, VAR_22);


 VAR_23 = VAR_7 | VAR_6 | VAR_8;
 if (VAR_20->flags & VAR_12)
  VAR_23 |= VAR_9;
 else
  VAR_23 |= VAR_10;
 FUNC_0(VAR_19, VAR_5, VAR_23);
}
