
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct make_dev_args {int mda_mode; struct dmtpps_softc* mda_si_drv1; int mda_unit; int mda_gid; int mda_uid; int * mda_cr; int * mda_devsw; int mda_flags; } ;
struct TYPE_4__ {int * driver_mtx; int driver_abi; int ppscap; int flags; } ;
struct TYPE_3__ {unsigned int tc_counter_mask; int tc_frequency; int tc_quality; struct dmtpps_softc* tc_priv; int tc_get_timecount; int tc_name; } ;
struct dmtpps_softc {int tmr_num; int tclr; int tmr_name; int dev; int pps_cdev; TYPE_2__ pps_state; int pps_mtx; TYPE_1__ tc; int * mem_res; int mem_rid; } ;
typedef int device_t ;
typedef int clk_ident_t ;


 int FUNC_0 (struct dmtpps_softc*,int ) ;
 int FUNC_1 (struct dmtpps_softc*,int ,int) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int * FUNC_2 (int ,int ,int *,int ) ;
 struct dmtpps_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (struct make_dev_args*) ;
 int FUNC_7 (struct make_dev_args*,int *,int ) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int,char*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_27)
{
 struct dmtpps_softc *VAR_28;
 struct make_dev_args VAR_29;
 clk_ident_t VAR_30;
 int VAR_31, VAR_32;

 VAR_28 = FUNC_3(VAR_27);
 VAR_28->dev = VAR_27;


 VAR_31 = FUNC_15(VAR_21, &VAR_32);


 if ((VAR_30 = FUNC_12(VAR_27)) == VAR_12)
  return (VAR_10);
 if ((VAR_31 = FUNC_16(VAR_30, VAR_20)) != 0)
  return (VAR_31);
 if ((VAR_31 = FUNC_14(VAR_30)) != 0)
  return (VAR_31);


 VAR_28->mem_res = FUNC_2(VAR_27, VAR_22,
     &VAR_28->mem_rid, VAR_19);
 if (VAR_28->mem_res == ((void*)0)) {
  return (VAR_10);
 }


 VAR_28->tmr_num = FUNC_13(VAR_27, "timer");
 FUNC_10(VAR_28->tmr_name, sizeof(VAR_28->tmr_name), "DMTimer%d", VAR_28->tmr_num);






 VAR_28->tclr = VAR_2;
 FUNC_1(VAR_28, VAR_0, VAR_28->tclr);


 FUNC_1(VAR_28, VAR_8, VAR_9);
 while (FUNC_0(VAR_28, VAR_5) & VAR_6)
  continue;

 VAR_28->tclr |= VAR_3 | VAR_1;
 FUNC_1(VAR_28, VAR_7, 0);
 FUNC_1(VAR_28, VAR_4, 0);
 FUNC_1(VAR_28, VAR_0, VAR_28->tclr);


 VAR_28->tc.tc_name = VAR_28->tmr_name;
 VAR_28->tc.tc_get_timecount = VAR_26;
 VAR_28->tc.tc_counter_mask = ~0u;
 VAR_28->tc.tc_frequency = VAR_32;
 VAR_28->tc.tc_quality = 1000;
 VAR_28->tc.tc_priv = VAR_28;

 FUNC_11(&VAR_28->tc);
 FUNC_8(&VAR_28->pps_mtx, "dmtpps", ((void*)0), VAR_14);
 VAR_28->pps_state.flags = VAR_15;
 VAR_28->pps_state.ppscap = VAR_17;
 VAR_28->pps_state.driver_abi = VAR_16;
 VAR_28->pps_state.driver_mtx = &VAR_28->pps_mtx;
 FUNC_9(&VAR_28->pps_state);


 FUNC_6(&VAR_29);
 VAR_29.mda_flags = VAR_13;
 VAR_29.mda_devsw = &VAR_25;
 VAR_29.mda_cr = ((void*)0);
 VAR_29.mda_uid = VAR_23;
 VAR_29.mda_gid = VAR_11;
 VAR_29.mda_mode = 0600;
 VAR_29.mda_unit = FUNC_4(VAR_27);
 VAR_29.mda_si_drv1 = VAR_28;
 if ((VAR_31 = FUNC_7(&VAR_29, &VAR_28->pps_cdev, VAR_18)) != 0) {
  FUNC_5(VAR_27, "Failed to create cdev %s\n", VAR_18);
  return (VAR_31);
 }

 if (VAR_24)
  FUNC_5(VAR_28->dev, "Using %s for PPS device /dev/%s\n",
      VAR_28->tmr_name, VAR_18);

 return (0);
}
