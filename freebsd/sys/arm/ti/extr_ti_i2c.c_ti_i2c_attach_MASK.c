
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ti_i2c_softc {scalar_t__ clk_id; int sc_rev; int sc_fifo_trsh; int sc_timeout; int * sc_iicbus; int sc_irq_h; int * sc_irq_res; int * sc_mem_res; int sc_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int phandle_t ;
typedef int ich_func_t ;
typedef int device_t ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct ti_i2c_softc*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ti_i2c_softc*) ;
 int FUNC_3 (struct ti_i2c_softc*) ;
 void* FUNC_4 (int ,int ,int*,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int,int *,int ,struct ti_i2c_softc*,int *) ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int ,char*,int) ;
 struct ti_i2c_softc* FUNC_9 (int ) ;
 struct sysctl_ctx_list* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_18 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_19 ;
 int FUNC_17 (struct ti_i2c_softc*,int ) ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int
FUNC_18(device_t VAR_22)
{
 int VAR_23, VAR_24;
 phandle_t VAR_25;
 struct ti_i2c_softc *VAR_26;
 struct sysctl_ctx_list *VAR_27;
 struct sysctl_oid_list *VAR_28;
 uint16_t VAR_29;

  VAR_26 = FUNC_9(VAR_22);
 VAR_26->sc_dev = VAR_22;


 VAR_25 = FUNC_13(VAR_22);

 VAR_26->clk_id = FUNC_14(VAR_22);
 if (VAR_26->clk_id == VAR_11) {
  FUNC_12(VAR_22, "failed to get device id using ti,hwmod\n");
  return (VAR_4);
 }


 VAR_24 = 0;
 VAR_26->sc_mem_res = FUNC_4(VAR_22, VAR_16, &VAR_24,
     VAR_13);
 if (VAR_26->sc_mem_res == ((void*)0)) {
  FUNC_12(VAR_22, "Cannot map registers.\n");
  return (VAR_4);
 }


 VAR_24 = 0;
 VAR_26->sc_irq_res = FUNC_4(VAR_22, VAR_15, &VAR_24,
     VAR_13 | VAR_14);
 if (VAR_26->sc_irq_res == ((void*)0)) {
  FUNC_5(VAR_22, VAR_16, 0, VAR_26->sc_mem_res);
  FUNC_12(VAR_22, "Cannot allocate interrupt.\n");
  return (VAR_4);
 }

 FUNC_3(VAR_26);


 VAR_23 = FUNC_15(VAR_22);
 if (VAR_23) {
  FUNC_12(VAR_22, "ti_i2c_activate failed\n");
  goto out;
 }


 VAR_26->sc_rev = FUNC_17(VAR_26, VAR_8) & 0xff;


 VAR_29 = FUNC_17(VAR_26, VAR_7);
 VAR_29 >>= VAR_6;
 VAR_29 &= VAR_5;

 FUNC_12(VAR_22, "I2C revision %d.%d FIFO size: %d bytes\n",
     VAR_26->sc_rev >> 4, VAR_26->sc_rev & 0xf, 8 << VAR_29);


 VAR_26->sc_fifo_trsh = 5;


 VAR_26->sc_timeout = 5*VAR_18;

 VAR_27 = FUNC_10(VAR_22);
 VAR_28 = FUNC_1(FUNC_11(VAR_22));
 FUNC_0(VAR_27, VAR_28, VAR_12, "i2c_clock",
     VAR_1 | VAR_3 | VAR_0, VAR_26, 0,
     VAR_20, "IU", "I2C bus clock");

 FUNC_0(VAR_27, VAR_28, VAR_12, "i2c_timeout",
     VAR_2 | VAR_3 | VAR_0, VAR_26, 0,
     VAR_21, "IU", "I2C bus timeout (in ticks)");


 VAR_23 = FUNC_6(VAR_22, VAR_26->sc_irq_res, VAR_10 | VAR_9,
     ((void*)0), VAR_19, VAR_26, &VAR_26->sc_irq_h);
 if (VAR_23)
  goto out;


 if ((VAR_26->sc_iicbus = FUNC_8(VAR_22, "iicbus", -1)) == ((void*)0)) {
  FUNC_12(VAR_22, "could not allocate iicbus instance\n");
  VAR_23 = VAR_4;
  goto out;
 }


 FUNC_7((ich_func_t)VAR_17, VAR_22);

out:
 if (VAR_23) {
  FUNC_16(VAR_22);
  FUNC_2(VAR_26);
 }

 return (VAR_23);
}
